
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int task_abort ;
struct task_abort_req {void* tag; void* device_id; void* abort_all; void* tag_to_abort; } ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct inbound_queue_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct task_abort_req*,int ,int) ;
 int FUNC_2 (struct pm8001_hba_info*,struct inbound_queue_table*,int,struct task_abort_req*,int ) ;

__attribute__((used)) static int FUNC_3(struct pm8001_hba_info *VAR_3, u32 VAR_4,
 u32 VAR_5, u8 VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct task_abort_req VAR_9;
 struct inbound_queue_table *VAR_10;
 int VAR_11;
 VAR_10 = &VAR_3->inbnd_q_tbl[0];
 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 if (VAR_2 == (VAR_6 & VAR_1)) {
  VAR_9.abort_all = 0;
  VAR_9.device_id = FUNC_0(VAR_5);
  VAR_9.tag_to_abort = FUNC_0(VAR_7);
  VAR_9.tag = FUNC_0(VAR_8);
 } else if (VAR_0 == (VAR_6 & VAR_1)) {
  VAR_9.abort_all = FUNC_0(1);
  VAR_9.device_id = FUNC_0(VAR_5);
  VAR_9.tag = FUNC_0(VAR_8);
 }
 VAR_11 = FUNC_2(VAR_3, VAR_10, VAR_4, &VAR_9, 0);
 return VAR_11;
}
