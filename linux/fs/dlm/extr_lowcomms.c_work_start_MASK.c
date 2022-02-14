
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*) ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static int FUNC_3(void)
{
 VAR_3 = FUNC_0("dlm_recv",
      VAR_2 | VAR_1, 1);
 if (!VAR_3) {
  FUNC_2("can't start dlm_recv");
  return -VAR_0;
 }

 VAR_4 = FUNC_0("dlm_send",
      VAR_2 | VAR_1, 1);
 if (!VAR_4) {
  FUNC_2("can't start dlm_send");
  FUNC_1(VAR_3);
  return -VAR_0;
 }

 return 0;
}
