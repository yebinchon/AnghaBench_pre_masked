
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visor_vbus_deviceinfo {int infostrs; int drvname; int devtype; } ;
struct TYPE_2__ {char const* release; } ;


 int FUNC_0 (struct visor_vbus_deviceinfo*,int ,int) ;
 int FUNC_1 (int ,int,char*,char const*) ;
 TYPE_1__* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(
  struct visor_vbus_deviceinfo *VAR_0,
  const char *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(struct visor_vbus_deviceinfo));
 FUNC_1(VAR_0->devtype,
   sizeof(VAR_0->devtype),
   "%s", (VAR_1) ? VAR_1 : "unknownType");
 FUNC_1(VAR_0->drvname,
   sizeof(VAR_0->drvname),
   "%s", (VAR_2) ? VAR_2 : "unknownDriver");
 FUNC_1(VAR_0->infostrs,
   sizeof(VAR_0->infostrs), "kernel ver. %s",
   FUNC_2()->release);
}
