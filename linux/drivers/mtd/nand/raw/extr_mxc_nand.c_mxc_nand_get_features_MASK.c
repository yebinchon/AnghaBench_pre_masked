
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int (* read_byte ) (struct nand_chip*) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;
struct mxc_nand_host {scalar_t__ buf_start; int main_area0; int data_buf; TYPE_2__* devtype_data; } ;
struct mtd_info {int dummy; } ;
struct TYPE_4__ {int (* send_page ) (struct mtd_info*,int ) ;int (* send_cmd ) (struct mxc_nand_host*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct mtd_info*,int,int) ;
 struct mxc_nand_host* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct mxc_nand_host*,int ,int) ;
 int FUNC_5 (struct mtd_info*,int ) ;
 int FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_3, int VAR_4,
     u8 *VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_3(VAR_3);
 struct mxc_nand_host *VAR_7 = FUNC_2(VAR_3);
 int VAR_8;

 VAR_7->devtype_data->send_cmd(VAR_7, VAR_0, 0);
 FUNC_1(VAR_6, VAR_4, -1);
 VAR_7->devtype_data->send_page(VAR_6, VAR_1);
 FUNC_0(VAR_7->data_buf, VAR_7->main_area0, 512);
 VAR_7->buf_start = 0;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
  *VAR_5++ = VAR_3->legacy.read_byte(VAR_3);

 return 0;
}
