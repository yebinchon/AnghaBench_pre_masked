
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_hwdev {int hwif; } ;
struct hinic_pfhwdev {int pf_to_mgmt; struct hinic_hwdev hwdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct hinic_pfhwdev *VAR_2)
{
 struct hinic_hwdev *VAR_3 = &VAR_2->hwdev;

 FUNC_1(VAR_3->hwif, VAR_1);

 FUNC_2(&VAR_2->pf_to_mgmt, VAR_0);

 FUNC_0(&VAR_2->pf_to_mgmt);
}
