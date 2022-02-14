
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_dcb {int aen_work; int wq; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_dcb *VAR_3, void *VAR_4)
{
 u32 *VAR_5 = VAR_4;

 if (FUNC_3(VAR_1, &VAR_3->state))
  return;

 if (*VAR_5 & VAR_0)
  FUNC_2(VAR_2, &VAR_3->state);
 else
  FUNC_0(VAR_2, &VAR_3->state);

 FUNC_1(VAR_3->wq, &VAR_3->aen_work, 0);
}
