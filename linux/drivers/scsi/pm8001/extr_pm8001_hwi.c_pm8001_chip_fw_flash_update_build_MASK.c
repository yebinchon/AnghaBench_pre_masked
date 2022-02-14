
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct inbound_queue_table {int dummy; } ;
struct TYPE_3__ {int len; } ;
struct TYPE_4__ {int addr; TYPE_1__ im_len; } ;
struct fw_flash_updata_info {TYPE_2__ sgl; int total_image_len; int cur_image_offset; int cur_image_len; } ;
struct fw_flash_Update_req {void* sgl_addr_hi; void* sgl_addr_lo; int len; void* total_image_len; void* cur_image_offset; void* cur_image_len; void* tag; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fw_flash_Update_req*,int ,int) ;
 int FUNC_4 (struct pm8001_hba_info*,struct inbound_queue_table*,int ,struct fw_flash_Update_req*,int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct pm8001_hba_info *VAR_1,
 void *VAR_2, u32 VAR_3)
{
 struct fw_flash_Update_req VAR_4;
 struct fw_flash_updata_info *VAR_5;
 struct inbound_queue_table *VAR_6;
 int VAR_7;
 u32 VAR_8 = VAR_0;

 FUNC_3(&VAR_4, 0, sizeof(struct fw_flash_Update_req));
 VAR_6 = &VAR_1->inbnd_q_tbl[0];
 VAR_5 = VAR_2;
 VAR_4.tag = FUNC_0(VAR_3);
 VAR_4.cur_image_len = FUNC_0(VAR_5->cur_image_len);
 VAR_4.cur_image_offset = FUNC_0(VAR_5->cur_image_offset);
 VAR_4.total_image_len = FUNC_0(VAR_5->total_image_len);
 VAR_4.len = VAR_5->sgl.im_len.len ;
 VAR_4.sgl_addr_lo =
  FUNC_0(FUNC_2(FUNC_1(VAR_5->sgl.addr)));
 VAR_4.sgl_addr_hi =
  FUNC_0(FUNC_5(FUNC_1(VAR_5->sgl.addr)));
 VAR_7 = FUNC_4(VAR_1, VAR_6, VAR_8, &VAR_4, 0);
 return VAR_7;
}
