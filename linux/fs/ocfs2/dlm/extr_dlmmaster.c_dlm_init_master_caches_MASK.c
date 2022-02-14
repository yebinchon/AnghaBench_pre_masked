
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* FUNC_1 (char*,int,int ,int ,int *) ;

int FUNC_2(void)
{
 VAR_4 = FUNC_1("o2dlm_lockres",
           sizeof(struct dlm_lock_resource),
           0, VAR_2, ((void*)0));
 if (!VAR_4)
  goto bail;

 VAR_3 = FUNC_1("o2dlm_lockname",
            VAR_0, 0,
            VAR_2, ((void*)0));
 if (!VAR_3)
  goto bail;

 return 0;
bail:
 FUNC_0();
 return -VAR_1;
}
