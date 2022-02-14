
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct inbound_queue_table {int dummy; } ;
struct hw_event_ack_req {void* param1; void* param0; void* sea_phyid_portid; void* tag; } ;
typedef int payload ;


 size_t VAR_0 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct pm8001_hba_info*,struct inbound_queue_table*,size_t,struct hw_event_ack_req*,int ) ;

__attribute__((used)) static void FUNC_3(struct pm8001_hba_info *VAR_1,
 u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct hw_event_ack_req VAR_8;
 u32 VAR_9 = VAR_0;

 struct inbound_queue_table *VAR_10;

 FUNC_1((u8 *)&VAR_8, 0, sizeof(VAR_8));
 VAR_10 = &VAR_1->inbnd_q_tbl[VAR_2];
 VAR_8.tag = FUNC_0(1);
 VAR_8.sea_phyid_portid = FUNC_0(((VAR_3 & 0xFFFF) << 8) |
  ((VAR_5 & 0x0F) << 4) | (VAR_4 & 0x0F));
 VAR_8.param0 = FUNC_0(VAR_6);
 VAR_8.param1 = FUNC_0(VAR_7);
 FUNC_2(VAR_1, VAR_10, VAR_9, &VAR_8, 0);
}
