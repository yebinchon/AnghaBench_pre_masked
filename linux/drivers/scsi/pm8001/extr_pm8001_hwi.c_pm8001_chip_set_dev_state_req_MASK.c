
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct set_dev_state_req {void* nds; void* device_id; void* tag; } ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {size_t device_id; } ;
struct pm8001_ccb_info {size_t ccb_tag; struct pm8001_device* device; } ;
struct inbound_queue_table {int dummy; } ;
typedef int payload ;


 size_t VAR_0 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (struct set_dev_state_req*,int ,int) ;
 int FUNC_2 (struct pm8001_hba_info*,struct inbound_queue_table*,size_t,struct set_dev_state_req*,int ) ;
 int FUNC_3 (struct pm8001_hba_info*,size_t*) ;

int
FUNC_4(struct pm8001_hba_info *VAR_1,
 struct pm8001_device *VAR_2, u32 VAR_3)
{
 struct set_dev_state_req VAR_4;
 struct inbound_queue_table *VAR_5;
 struct pm8001_ccb_info *VAR_6;
 int VAR_7;
 u32 VAR_8;
 u32 VAR_9 = VAR_0;
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_7 = FUNC_3(VAR_1, &VAR_8);
 if (VAR_7)
  return -1;
 VAR_6 = &VAR_1->ccb_info[VAR_8];
 VAR_6->ccb_tag = VAR_8;
 VAR_6->device = VAR_2;
 VAR_5 = &VAR_1->inbnd_q_tbl[0];
 VAR_4.tag = FUNC_0(VAR_8);
 VAR_4.device_id = FUNC_0(VAR_2->device_id);
 VAR_4.nds = FUNC_0(VAR_3);
 VAR_7 = FUNC_2(VAR_1, VAR_5, VAR_9, &VAR_4, 0);
 return VAR_7;

}
