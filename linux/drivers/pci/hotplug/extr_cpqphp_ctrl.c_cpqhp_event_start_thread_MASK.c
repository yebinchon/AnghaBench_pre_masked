
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,char*) ;

int FUNC_4(void)
{
 VAR_0 = FUNC_3(VAR_1, ((void*)0), "phpd_event");
 if (FUNC_0(VAR_0)) {
  FUNC_2("Can't start up our event thread\n");
  return FUNC_1(VAR_0);
 }

 return 0;
}
