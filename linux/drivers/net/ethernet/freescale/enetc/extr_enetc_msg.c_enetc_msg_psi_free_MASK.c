
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_si {int pdev; int hw; } ;
struct enetc_pf {int num_vfs; int msg_task; struct enetc_si* si; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct enetc_si*,int) ;
 int FUNC_3 (int ,struct enetc_si*) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct enetc_pf *VAR_1)
{
 struct enetc_si *VAR_2 = VAR_1->si;
 int VAR_3;

 FUNC_0(&VAR_1->msg_task);


 FUNC_1(&VAR_2->hw);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_vfs; VAR_3++)
  FUNC_2(VAR_2, VAR_3);


 FUNC_3(FUNC_4(VAR_2->pdev, VAR_0), VAR_2);
}
