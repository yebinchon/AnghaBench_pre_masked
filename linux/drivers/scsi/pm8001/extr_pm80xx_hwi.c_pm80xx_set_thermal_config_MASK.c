
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct set_ctrl_cfg_req {int* cfg_pg; int tag; } ;
struct pm8001_hba_info {int pdev; struct inbound_queue_table* inbnd_q_tbl; } ;
struct inbound_queue_table {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct set_ctrl_cfg_req*,int ,int) ;
 int FUNC_3 (struct pm8001_hba_info*,struct inbound_queue_table*,int,struct set_ctrl_cfg_req*,int ) ;
 int FUNC_4 (struct pm8001_hba_info*,int*) ;
 int FUNC_5 (struct pm8001_hba_info*,int) ;

int
FUNC_6(struct pm8001_hba_info *VAR_7)
{
 struct set_ctrl_cfg_req VAR_8;
 struct inbound_queue_table *VAR_9;
 int VAR_10;
 u32 VAR_11;
 u32 VAR_12 = VAR_1;
 u32 VAR_13;

 FUNC_2(&VAR_8, 0, sizeof(struct set_ctrl_cfg_req));
 VAR_10 = FUNC_4(VAR_7, &VAR_11);
 if (VAR_10)
  return -1;

 VAR_9 = &VAR_7->inbnd_q_tbl[0];
 VAR_8.tag = FUNC_1(VAR_11);

 if (FUNC_0(VAR_7->pdev))
  VAR_13 = VAR_5;
 else
  VAR_13 = VAR_6;

 VAR_8.cfg_pg[0] = (VAR_4 << 9) |
    (VAR_3 << 8) | VAR_13;
 VAR_8.cfg_pg[1] = (VAR_0 << 24) | (VAR_2 << 8);

 VAR_10 = FUNC_3(VAR_7, VAR_9, VAR_12, &VAR_8, 0);
 if (VAR_10)
  FUNC_5(VAR_7, VAR_11);
 return VAR_10;

}
