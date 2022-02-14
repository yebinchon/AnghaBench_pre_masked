
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct inbound_queue_table {int dummy; } ;
struct dereg_dev_req {void* device_id; void* tag; } ;
typedef int payload ;


 int VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct dereg_dev_req*,int ,int) ;
 int FUNC_3 (struct pm8001_hba_info*,struct inbound_queue_table*,int,struct dereg_dev_req*,int ) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct pm8001_hba_info *VAR_1,
 u32 VAR_2)
{
 struct dereg_dev_req VAR_3;
 u32 VAR_4 = VAR_0;
 int VAR_5;
 struct inbound_queue_table *VAR_6;

 VAR_6 = &VAR_1->inbnd_q_tbl[0];
 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.tag = FUNC_1(1);
 VAR_3.device_id = FUNC_1(VAR_2);
 FUNC_0(VAR_1,
  FUNC_4("unregister device device_id = %d\n", VAR_2));
 VAR_5 = FUNC_3(VAR_1, VAR_6, VAR_4, &VAR_3, 0);
 return VAR_5;
}
