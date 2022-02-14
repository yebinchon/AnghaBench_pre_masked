
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ver_build; } ;
struct mvumi_hs_page1 {int cl_inout_list_depth; int capability; int cl_in_max_entry_size; int cl_out_max_entry_size; TYPE_1__ fw_ver; int max_devices_support; int max_transfer_size; int max_io_support; } ;
struct mvumi_hs_header {unsigned char checksum; int page_code; int frame_length; } ;
struct mvumi_hba {int list_num_io; int hba_capability; int ib_max_size_setting; int ib_max_size; int ob_max_size_setting; int ob_max_size; int eot_flag; TYPE_2__* pdev; int max_target_id; int max_transfer_size; int max_io; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 unsigned char FUNC_2 (struct mvumi_hs_header*,int ) ;

__attribute__((used)) static int FUNC_3(struct mvumi_hba *VAR_2,
    struct mvumi_hs_header *VAR_3)
{
 struct mvumi_hs_page1 *VAR_4;
 unsigned char VAR_5;

 VAR_5 = FUNC_2(VAR_3,
      VAR_3->frame_length);
 if (VAR_5 != VAR_3->checksum) {
  FUNC_1(&VAR_2->pdev->dev, "checksum error\n");
  return -1;
 }

 switch (VAR_3->page_code) {
 case 128:
  VAR_4 = (struct mvumi_hs_page1 *) VAR_3;

  VAR_2->max_io = VAR_4->max_io_support;
  VAR_2->list_num_io = VAR_4->cl_inout_list_depth;
  VAR_2->max_transfer_size = VAR_4->max_transfer_size;
  VAR_2->max_target_id = VAR_4->max_devices_support;
  VAR_2->hba_capability = VAR_4->capability;
  VAR_2->ib_max_size_setting = VAR_4->cl_in_max_entry_size;
  VAR_2->ib_max_size = (1 << VAR_4->cl_in_max_entry_size) << 2;

  VAR_2->ob_max_size_setting = VAR_4->cl_out_max_entry_size;
  VAR_2->ob_max_size = (1 << VAR_4->cl_out_max_entry_size) << 2;

  FUNC_0(&VAR_2->pdev->dev, "FW version:%d\n",
      VAR_4->fw_ver.ver_build);

  if (VAR_2->hba_capability & VAR_1)
   VAR_2->eot_flag = 22;
  else
   VAR_2->eot_flag = 27;
  if (VAR_2->hba_capability & VAR_0)
   VAR_2->list_num_io = 1 << VAR_4->cl_inout_list_depth;
  break;
 default:
  FUNC_1(&VAR_2->pdev->dev, "handshake: page code error\n");
  return -1;
 }
 return 0;
}
