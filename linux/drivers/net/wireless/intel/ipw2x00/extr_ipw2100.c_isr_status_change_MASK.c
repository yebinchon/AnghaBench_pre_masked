
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; } ;
struct ipw2100_priv {int status; TYPE_1__ wstats; } ;
struct TYPE_4__ {int status; int name; int (* cb ) (struct ipw2100_priv*,int) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ipw2100_priv*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (struct ipw2100_priv*,int) ;

__attribute__((used)) static void FUNC_4(struct ipw2100_priv *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_5 == VAR_0 &&
     VAR_4->status & VAR_1 &&
     !(VAR_4->status & VAR_2)) {
  FUNC_0("Scan detected while associated, with "
          "no scan request.  Restarting firmware.\n");


  FUNC_2(VAR_4);
 }

 for (VAR_6 = 0; VAR_3[VAR_6].status != -1; VAR_6++) {
  if (VAR_5 == VAR_3[VAR_6].status) {
   FUNC_1("Status change: %s\n",
     VAR_3[VAR_6].name);
   if (VAR_3[VAR_6].cb)
    VAR_3[VAR_6].cb(VAR_4, VAR_5);
   VAR_4->wstats.status = VAR_5;
   return;
  }
 }

 FUNC_1("unknown status received: %04x\n", VAR_5);
}
