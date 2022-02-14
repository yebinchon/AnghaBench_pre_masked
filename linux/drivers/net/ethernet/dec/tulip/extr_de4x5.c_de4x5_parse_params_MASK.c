
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {char* name; } ;
struct TYPE_2__ {int fdx; void* autosense; } ;
struct de4x5_private {TYPE_1__ params; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 char* VAR_7 ;
 struct de4x5_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_8)
{
    struct de4x5_private *VAR_9 = FUNC_0(VAR_8);
    char *VAR_10, *VAR_11, VAR_12;

    VAR_9->params.fdx = 0;
    VAR_9->params.autosense = VAR_1;

    if (VAR_7 == ((void*)0)) return;

    if ((VAR_10 = FUNC_2(VAR_7, VAR_8->name))) {
 if (!(VAR_11 = FUNC_2(VAR_10+FUNC_1(VAR_8->name), "eth"))) VAR_11 = VAR_10 + FUNC_1(VAR_10);
 VAR_12 = *VAR_11;
 *VAR_11 = '\0';

 if (FUNC_2(VAR_10, "fdx") || FUNC_2(VAR_10, "FDX")) VAR_9->params.fdx = 1;

 if (FUNC_2(VAR_10, "autosense") || FUNC_2(VAR_10, "AUTOSENSE")) {
     if (FUNC_2(VAR_10, "TP_NW")) {
  VAR_9->params.autosense = VAR_4;
     } else if (FUNC_2(VAR_10, "TP")) {
  VAR_9->params.autosense = VAR_3;
     } else if (FUNC_2(VAR_10, "BNC_AUI")) {
  VAR_9->params.autosense = VAR_2;
     } else if (FUNC_2(VAR_10, "BNC")) {
  VAR_9->params.autosense = VAR_2;
     } else if (FUNC_2(VAR_10, "AUI")) {
  VAR_9->params.autosense = VAR_0;
     } else if (FUNC_2(VAR_10, "10Mb")) {
  VAR_9->params.autosense = VAR_6;
     } else if (FUNC_2(VAR_10, "100Mb")) {
  VAR_9->params.autosense = VAR_5;
     } else if (FUNC_2(VAR_10, "AUTO")) {
  VAR_9->params.autosense = VAR_1;
     }
 }
 *VAR_11 = VAR_12;
    }
}
