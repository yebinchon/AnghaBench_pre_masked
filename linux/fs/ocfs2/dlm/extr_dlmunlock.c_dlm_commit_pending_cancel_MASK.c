
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_lock_resource {int granted; } ;
struct TYPE_2__ {int convert_type; } ;
struct dlm_lock {TYPE_1__ ml; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(struct dlm_lock_resource *VAR_1,
          struct dlm_lock *VAR_2)
{
 FUNC_0(&VAR_2->list, &VAR_1->granted);
 VAR_2->ml.convert_type = VAR_0;
}
