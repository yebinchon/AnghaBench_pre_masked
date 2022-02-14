
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct phy_stop_req {void* phy_id; void* tag; } ;
struct inbound_queue_table {int dummy; } ;
typedef int payload ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct phy_stop_req*,int ,int) ;
 int FUNC_2 (struct pm8001_hba_info*,struct inbound_queue_table*,int,struct phy_stop_req*,int ) ;

__attribute__((used)) static int FUNC_3(struct pm8001_hba_info *VAR_1,
        u8 VAR_2)
{
 struct phy_stop_req VAR_3;
 struct inbound_queue_table *VAR_4;
 int VAR_5;
 u32 VAR_6 = 0x01;
 u32 VAR_7 = VAR_0;
 VAR_4 = &VAR_1->inbnd_q_tbl[0];
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.tag = FUNC_0(VAR_6);
 VAR_3.phy_id = FUNC_0(VAR_2);
 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_7, &VAR_3, 0);
 return VAR_5;
}
