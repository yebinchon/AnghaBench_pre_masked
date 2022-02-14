
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 () ;
 int * VAR_2 ;

int FUNC_6(void)
{
 int VAR_3;

 VAR_2 = FUNC_3(((void*)0));
 if (!VAR_2)
  return -VAR_0;






 FUNC_1(VAR_2, "vendorid",
      VAR_1);
 FUNC_2(VAR_2, "vendorid", "Intel Corp.");
 FUNC_1(VAR_2, "deviceid", 0x1);
 FUNC_2(VAR_2, "deviceid",
        FUNC_5()->nodename);
 FUNC_1(VAR_2, "devicerv", 0x80000100);

 VAR_3 = FUNC_0();
 if (VAR_3) {
  FUNC_4(VAR_2);
  VAR_2 = ((void*)0);
 }

 return VAR_3;
}
