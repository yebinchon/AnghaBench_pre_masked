
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int rb_work_scheduled; int rbdr_work; scalar_t__ rb_alloc_fail; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nicvf*,int ) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(unsigned long VAR_1)
{
 struct nicvf *VAR_2 = (struct nicvf *)VAR_1;

 FUNC_1(VAR_2, VAR_0);
 if (VAR_2->rb_alloc_fail) {
  VAR_2->rb_work_scheduled = 1;
  FUNC_2(&VAR_2->rbdr_work, FUNC_0(10));
 }
}
