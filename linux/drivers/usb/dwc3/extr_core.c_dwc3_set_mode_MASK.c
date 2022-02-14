
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int drd_work; int lock; int desired_dr_role; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;

void FUNC_3(struct dwc3 *VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_1->desired_dr_role = VAR_2;
 FUNC_2(&VAR_1->lock, VAR_3);

 FUNC_0(VAR_0, &VAR_1->drd_work);
}
