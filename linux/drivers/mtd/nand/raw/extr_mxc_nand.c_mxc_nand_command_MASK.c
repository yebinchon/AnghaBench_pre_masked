
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct mxc_nand_host {int status_request; int buf_start; int main_area0; int data_buf; TYPE_1__* devtype_data; int dev; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {int (* send_page ) (struct mtd_info*,int ) ;int (* send_cmd ) (struct mxc_nand_host*,unsigned int,int) ;int (* send_read_id ) (struct mxc_nand_host*) ;int (* preset ) (struct mtd_info*) ;} ;
 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned int,...) ;
 int FUNC_1 (int ,char*,unsigned int,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mtd_info*,int,int) ;
 struct mxc_nand_host* FUNC_4 (struct nand_chip*) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct mtd_info*) ;
 int FUNC_7 (struct mxc_nand_host*,unsigned int,int) ;
 int FUNC_8 (struct mxc_nand_host*,unsigned int,int) ;
 int FUNC_9 (struct mxc_nand_host*,unsigned int,int) ;
 int FUNC_10 (struct mxc_nand_host*) ;
 int FUNC_11 (struct mxc_nand_host*,unsigned int,int) ;
 int FUNC_12 (struct mxc_nand_host*,unsigned int,int) ;
 int FUNC_13 (struct mtd_info*,int ) ;

__attribute__((used)) static void FUNC_14(struct nand_chip *VAR_1, unsigned VAR_2,
        int VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_5(VAR_1);
 struct mxc_nand_host *VAR_6 = FUNC_4(VAR_1);

 FUNC_1(VAR_6->dev, "mxc_nand_command (cmd = 0x%x, col = 0x%x, page = 0x%x)\n",
       VAR_2, VAR_3, VAR_4);


 VAR_6->status_request = 0;


 switch (VAR_2) {
 case 129:
  VAR_6->devtype_data->preset(VAR_5);
  VAR_6->devtype_data->send_cmd(VAR_6, VAR_2, 0);
  break;

 case 128:
  VAR_6->buf_start = 0;
  VAR_6->status_request = 1;

  VAR_6->devtype_data->send_cmd(VAR_6, VAR_2, 1);
  FUNC_0(VAR_3 != -1 || VAR_4 != -1,
     "Unexpected column/row value (cmd=%u, col=%d, row=%d)\n",
     VAR_2, VAR_3, VAR_4);
  FUNC_3(VAR_5, VAR_3, VAR_4);
  break;

 case 130:
  VAR_6->devtype_data->send_cmd(VAR_6, VAR_2, 1);
  FUNC_3(VAR_5, VAR_3, VAR_4);
  VAR_6->devtype_data->send_read_id(VAR_6);
  VAR_6->buf_start = 0;
  break;

 case 133:
 case 132:
  VAR_6->devtype_data->send_cmd(VAR_6, VAR_2, 0);
  FUNC_0(VAR_3 != -1,
     "Unexpected column value (cmd=%u, col=%d)\n",
     VAR_2, VAR_3);
  FUNC_3(VAR_5, VAR_3, VAR_4);

  break;
 case 131:
  VAR_6->devtype_data->send_cmd(VAR_6, VAR_2, 0);
  FUNC_3(VAR_5, VAR_3, VAR_4);
  VAR_6->devtype_data->send_page(VAR_5, VAR_0);
  FUNC_2(VAR_6->data_buf, VAR_6->main_area0, 512);
  VAR_6->buf_start = 0;
  break;
 default:
  FUNC_0(1, "Unimplemented command (cmd=%u)\n",
     VAR_2);
  break;
 }
}
