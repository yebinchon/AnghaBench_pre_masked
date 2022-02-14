
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int (* write_byte ) (struct nand_chip*,int ) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;
struct mxc_nand_host {TYPE_2__* devtype_data; int data_buf; int main_area0; scalar_t__ buf_start; } ;
struct mtd_info {int writesize; } ;
struct TYPE_4__ {int (* send_page ) (struct mtd_info*,int ) ;int (* send_cmd ) (struct mxc_nand_host*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mtd_info*,int,int) ;
 struct mxc_nand_host* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int ) ;
 int FUNC_5 (struct mxc_nand_host*,int ,int) ;
 int FUNC_6 (struct mtd_info*,int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_3, int VAR_4,
     u8 *VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_3(VAR_3);
 struct mxc_nand_host *VAR_7 = FUNC_2(VAR_3);
 int VAR_8;

 VAR_7->buf_start = 0;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
  VAR_3->legacy.write_byte(VAR_3, VAR_5[VAR_8]);

 FUNC_0(VAR_7->main_area0, VAR_7->data_buf, VAR_6->writesize);
 VAR_7->devtype_data->send_cmd(VAR_7, VAR_0, 0);
 FUNC_1(VAR_6, VAR_4, -1);
 VAR_7->devtype_data->send_page(VAR_6, VAR_1);

 return 0;
}
