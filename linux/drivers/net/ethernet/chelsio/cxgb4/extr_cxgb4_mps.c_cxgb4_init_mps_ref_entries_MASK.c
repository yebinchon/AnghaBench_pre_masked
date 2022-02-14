
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int mps_ref; int mps_ref_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct adapter *VAR_0)
{
 FUNC_1(&VAR_0->mps_ref_lock);
 FUNC_0(&VAR_0->mps_ref);

 return 0;
}
