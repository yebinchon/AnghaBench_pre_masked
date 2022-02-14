
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2)
{
 FUNC_2(&VAR_1);


 if (!FUNC_0()) {
     FUNC_1(VAR_2);
     goto unlock;
 }





 VAR_0--;
 if (!VAR_0)
  FUNC_1(((void*)0));

unlock:
 FUNC_3(&VAR_1);
}
