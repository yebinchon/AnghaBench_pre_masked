
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int status; int action_mutex; int rf_kill; scalar_t__ stop_rf_kill; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct ipw2100_priv*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct ipw2100_priv*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ipw2100_priv*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct ipw2100_priv *VAR_3, int VAR_4)
{
 if ((VAR_4 ? 1 : 0) ==
     (VAR_3->status & VAR_1 ? 1 : 0))
  return 0;

 FUNC_0("Manual SW RF Kill set to: RADIO  %s\n",
     VAR_4 ? "OFF" : "ON");

 FUNC_3(&VAR_3->action_mutex);

 if (VAR_4) {
  VAR_3->status |= VAR_1;
  FUNC_1(VAR_3);
 } else {
  VAR_3->status &= ~VAR_1;
  if (FUNC_5(VAR_3)) {
   FUNC_0("Can not turn radio back on - "
       "disabled by HW switch\n");

   VAR_3->stop_rf_kill = 0;
   FUNC_2(VAR_2, &VAR_3->rf_kill,
      FUNC_6(VAR_0));
  } else
   FUNC_7(VAR_3);
 }

 FUNC_4(&VAR_3->action_mutex);
 return 1;
}
