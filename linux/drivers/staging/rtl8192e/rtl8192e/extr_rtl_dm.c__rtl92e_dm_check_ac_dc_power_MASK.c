
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {scalar_t__ ResetProgress; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int FUNC_1 (char const*,char**,char**,int ) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_2(VAR_7);
 static char const VAR_9[] = "/etc/acpi/wireless-rtl-ac-dc-power.sh";
 char *VAR_10[] = {(char *)VAR_9, VAR_3, ((void*)0)};
 static char *VAR_11[] = {"HOME=/",
   "TERM=linux",
   "PATH=/usr/bin:/bin",
    ((void*)0)};

 if (VAR_8->ResetProgress == VAR_4) {
  FUNC_0((VAR_0 | VAR_1 | VAR_2),
    "GPIOChangeRFWorkItemCallBack(): Silent Reset!!!!!!!\n");
  return;
 }

 if (VAR_8->rtllib->state != VAR_5)
  return;
 FUNC_1(VAR_9, VAR_10, VAR_11, VAR_6);

 return;
}
