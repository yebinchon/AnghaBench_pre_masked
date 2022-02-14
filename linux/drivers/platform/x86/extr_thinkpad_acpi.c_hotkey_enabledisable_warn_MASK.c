
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(bool VAR_2)
{
 FUNC_3("procfs hotkey enable/disable");
 if (!FUNC_0((VAR_1 == VAR_0 || !VAR_2),
    FUNC_2("hotkey enable/disable functionality has been removed from the driver.  Hotkeys are always enabled.\n")))
  FUNC_1("Please remove the hotkey=enable module parameter, it is deprecated.  Hotkeys are always enabled.\n");
}
