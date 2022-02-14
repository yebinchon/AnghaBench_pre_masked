
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int powersave_enabled; } ;


 int FUNC_0 (char*,char*) ;

void FUNC_1(struct cw1200_common *VAR_0,
        bool VAR_1)
{
 FUNC_0("[BH] Powerave is %s.\n",
   VAR_1 ? "enabled" : "disabled");
 VAR_0->powersave_enabled = VAR_1;
}
