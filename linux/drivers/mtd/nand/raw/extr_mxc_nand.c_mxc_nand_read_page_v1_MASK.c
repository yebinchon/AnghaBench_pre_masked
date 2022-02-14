
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct nand_chip {int dummy; } ;
struct mxc_nand_host {int active_cs; int main_area0; TYPE_1__* devtype_data; } ;
struct TYPE_4__ {int failed; int corrected; } ;
struct mtd_info {int writesize; TYPE_2__ ecc_stats; } ;
struct TYPE_3__ {int (* send_cmd ) (struct mxc_nand_host*,int ,int) ;int (* enable_hwecc ) (struct nand_chip*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mtd_info*,int,void*) ;
 int FUNC_1 (struct mxc_nand_host*) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (struct mtd_info*,int ,int) ;
 struct mxc_nand_host* FUNC_4 (struct nand_chip*) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int) ;
 int FUNC_7 (struct mxc_nand_host*,int ,int) ;
 int FUNC_8 (struct mxc_nand_host*,int ,int) ;
 int FUNC_9 (struct mxc_nand_host*,int) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static int FUNC_11(struct nand_chip *VAR_5, void *VAR_6, void *VAR_7,
     bool VAR_8, int VAR_9)
{
 struct mtd_info *VAR_10 = FUNC_5(VAR_5);
 struct mxc_nand_host *VAR_11 = FUNC_4(VAR_5);
 unsigned int VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 VAR_11->devtype_data->enable_hwecc(VAR_5, VAR_8);

 VAR_11->devtype_data->send_cmd(VAR_11, VAR_0, 0);
 FUNC_3(VAR_10, 0, VAR_9);

 if (VAR_10->writesize > 512)
  VAR_11->devtype_data->send_cmd(VAR_11, VAR_1, 1);

 VAR_13 = VAR_10->writesize >> 9;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  uint16_t VAR_15;


  FUNC_10((VAR_11->active_cs << 4) | VAR_14, VAR_3);

  FUNC_10(VAR_2, VAR_4);


  FUNC_9(VAR_11, 1);

  VAR_15 = FUNC_1(VAR_11);

  VAR_15 >>= 2;

  if (VAR_6 && VAR_8) {
   switch (VAR_15 & 0x3) {
   case 0:
   default:
    break;
   case 1:
    VAR_10->ecc_stats.corrected++;
    VAR_12 = 1;
    break;
   case 2:
    VAR_10->ecc_stats.failed++;
    break;
   }
  }
 }

 if (VAR_6)
  FUNC_2(VAR_6, VAR_11->main_area0, VAR_10->writesize);
 if (VAR_7)
  FUNC_0(VAR_10, 1, VAR_7);

 return VAR_12;
}
