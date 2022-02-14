
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_hwdev {int aeqs; } ;
struct hinic_pfhwdev {struct hinic_hwdev hwdev; } ;
struct hinic_pf_to_mgmt {int cmd_chain; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 struct hinic_pfhwdev* FUNC_2 (struct hinic_pf_to_mgmt*) ;

void FUNC_3(struct hinic_pf_to_mgmt *VAR_1)
{
 struct hinic_pfhwdev *VAR_2 = FUNC_2(VAR_1);
 struct hinic_hwdev *VAR_3 = &VAR_2->hwdev;

 FUNC_0(&VAR_3->aeqs, VAR_0);
 FUNC_1(VAR_1->cmd_chain);
}
