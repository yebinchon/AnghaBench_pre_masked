
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int options; } ;
struct mxc_nand_host {TYPE_1__* devtype_data; } ;
struct mtd_info {int writesize; int size; } ;
struct TYPE_2__ {int (* send_addr ) (struct mxc_nand_host*,int,int) ;} ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct mxc_nand_host* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct mxc_nand_host*,int,int) ;
 int FUNC_3 (struct mxc_nand_host*,int,int) ;
 int FUNC_4 (struct mxc_nand_host*,int,int) ;
 int FUNC_5 (struct mxc_nand_host*,int,int) ;
 int FUNC_6 (struct mxc_nand_host*,int,int) ;
 int FUNC_7 (struct mxc_nand_host*,int,int) ;
 int FUNC_8 (struct mxc_nand_host*,int,int) ;
 int FUNC_9 (struct mxc_nand_host*,int,int) ;
 int FUNC_10 (struct mxc_nand_host*,int,int) ;

__attribute__((used)) static void FUNC_11(struct mtd_info *VAR_1, int VAR_2, int VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);
 struct mxc_nand_host *VAR_5 = FUNC_1(VAR_4);


 if (VAR_2 != -1) {
  VAR_5->devtype_data->send_addr(VAR_5, VAR_2 & 0xff,
           VAR_3 == -1);
  if (VAR_1->writesize > 512)

   VAR_5->devtype_data->send_addr(VAR_5,
            (VAR_2 >> 8) & 0xff,
            0);
 }


 if (VAR_3 != -1) {

  VAR_5->devtype_data->send_addr(VAR_5, (VAR_3 & 0xff), 0);

  if (VAR_1->writesize > 512) {
   if (VAR_1->size >= 0x10000000) {

    VAR_5->devtype_data->send_addr(VAR_5,
      (VAR_3 >> 8) & 0xff,
      0);
    VAR_5->devtype_data->send_addr(VAR_5,
      (VAR_3 >> 16) & 0xff,
      1);
   } else

    VAR_5->devtype_data->send_addr(VAR_5,
      (VAR_3 >> 8) & 0xff, 1);
  } else {
   if (VAR_4->options & VAR_0) {

    VAR_5->devtype_data->send_addr(VAR_5,
      (VAR_3 >> 8) & 0xff,
      0);
    VAR_5->devtype_data->send_addr(VAR_5,
      (VAR_3 >> 16) & 0xff,
      1);
   } else

    VAR_5->devtype_data->send_addr(VAR_5,
      (VAR_3 >> 8) & 0xff, 1);
  }
 }
}
