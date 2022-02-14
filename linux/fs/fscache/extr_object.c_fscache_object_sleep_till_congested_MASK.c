
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 () ;
 long FUNC_4 (long) ;
 int * FUNC_5 (int *) ;
 int VAR_1 ;

bool FUNC_6(signed long *VAR_2)
{
 wait_queue_head_t *VAR_3 = FUNC_5(&VAR_0);
 FUNC_0(VAR_1);

 if (FUNC_3())
  return 1;

 FUNC_1(VAR_3, &VAR_1);
 if (!FUNC_3())
  *VAR_2 = FUNC_4(*VAR_2);
 FUNC_2(VAR_3, &VAR_1);

 return FUNC_3();
}
