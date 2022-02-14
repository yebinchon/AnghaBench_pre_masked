
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_adaptive_kbd; } ;


 int FUNC_0 (int ,int *,char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
 FUNC_8();

 if (FUNC_3(1) < 0 ||
     FUNC_1(VAR_2) < 0)
  FUNC_7("error while attempting to reset the event firmware interface\n");

 FUNC_9();
 FUNC_4();
 FUNC_6();
 FUNC_5();
 FUNC_2(0);


 if (VAR_3.has_adaptive_kbd) {
  if (!FUNC_0(VAR_1, ((void*)0), "STRW", "vd",
     VAR_0)) {
   FUNC_7("Cannot set adaptive keyboard mode.\n");
  }
 }
}
