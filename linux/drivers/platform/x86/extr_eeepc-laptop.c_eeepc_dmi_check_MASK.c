
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {int cpufv_disabled; int hotplug_disabled; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(struct eeepc_laptop *VAR_1)
{
 const char *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return;
 if (FUNC_2(VAR_2, "701") == 0 || FUNC_2(VAR_2, "702") == 0) {
  VAR_1->cpufv_disabled = 1;
  FUNC_1("model %s does not officially support setting cpu speed\n",
   VAR_2);
  FUNC_1("cpufv disabled to avoid instability\n");
 }
 if (FUNC_2(VAR_2, "1005HA") == 0 || FUNC_2(VAR_2, "1201N") == 0 ||
     FUNC_2(VAR_2, "1005PE") == 0) {
  VAR_1->hotplug_disabled = 1;
  FUNC_1("wlan hotplug disabled\n");
 }
}
