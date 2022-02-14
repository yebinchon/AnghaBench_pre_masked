
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int attr; } ;
struct TYPE_3__ {int hotkey_tablet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int*,char*,char*,...) ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (char*,char*,char*) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_7 = 0, VAR_8;
 char *VAR_9 = ((void*)0);

 if (FUNC_0(VAR_4, &VAR_8, "GMMS", "qdd", 0)) {
  int VAR_10;

  VAR_7 = FUNC_2(VAR_8,
            &VAR_10);
  if (VAR_10)
   VAR_6.hotkey_tablet = VAR_1;
  VAR_9 = "GMMS";
 } else if (FUNC_0(VAR_4, &VAR_8, "MHKG", "qd")) {

  VAR_6.hotkey_tablet = VAR_2;
  VAR_7 = !!(VAR_8 & VAR_0);
  VAR_9 = "MHKG";
 }

 if (!VAR_6.hotkey_tablet)
  return 0;

 FUNC_3("Tablet mode switch found (type: %s), currently in %s mode\n",
  VAR_9, VAR_7 ? "tablet" : "laptop");

 VAR_8 = FUNC_1(VAR_5,
         &VAR_3.attr);
 if (VAR_8)
  return -1;

 return VAR_7;
}
