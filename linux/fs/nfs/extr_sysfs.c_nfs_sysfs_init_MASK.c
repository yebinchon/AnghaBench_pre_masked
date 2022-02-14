
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (char*,int *,int *) ;

int FUNC_3(void)
{
 VAR_3 = FUNC_0("nfs", ((void*)0), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_2 = FUNC_2("net", VAR_3, ((void*)0));
 if (!VAR_2) {
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
  return -VAR_0;
 }
 return 0;
}
