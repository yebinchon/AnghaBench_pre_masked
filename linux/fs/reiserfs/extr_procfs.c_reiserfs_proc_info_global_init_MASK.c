
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int ) ;

int FUNC_2(void)
{
 if (VAR_0 == ((void*)0)) {
  VAR_0 = FUNC_0(VAR_1, ((void*)0));
  if (!VAR_0) {
   FUNC_1(((void*)0), "cannot create /proc/%s",
      VAR_1);
   return 1;
  }
 }
 return 0;
}
