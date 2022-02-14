
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nand_chip {int oob_poi; } ;
struct mxc_nand_host {TYPE_1__* devtype_data; int main_area0; } ;
struct mtd_info {int writesize; } ;
struct TYPE_2__ {int (* send_cmd ) (struct mxc_nand_host*,int ,int) ;int (* send_page ) (struct mtd_info*,int ) ;int (* enable_hwecc ) (struct nand_chip*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtd_info*,int,int ) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (struct mtd_info*,int ,int) ;
 struct mxc_nand_host* FUNC_3 (struct nand_chip*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int) ;
 int FUNC_6 (struct mxc_nand_host*,int ,int) ;
 int FUNC_7 (struct mtd_info*,int ) ;
 int FUNC_8 (struct mxc_nand_host*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_3, const uint8_t *VAR_4,
          bool VAR_5, int VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_4(VAR_3);
 struct mxc_nand_host *VAR_8 = FUNC_3(VAR_3);

 VAR_8->devtype_data->enable_hwecc(VAR_3, VAR_5);

 VAR_8->devtype_data->send_cmd(VAR_8, VAR_1, 0);
 FUNC_2(VAR_7, 0, VAR_6);

 FUNC_1(VAR_8->main_area0, VAR_4, VAR_7->writesize);
 FUNC_0(VAR_7, 0, VAR_3->oob_poi);

 VAR_8->devtype_data->send_page(VAR_7, VAR_2);
 VAR_8->devtype_data->send_cmd(VAR_8, VAR_0, 1);
 FUNC_2(VAR_7, 0, VAR_6);

 return 0;
}
