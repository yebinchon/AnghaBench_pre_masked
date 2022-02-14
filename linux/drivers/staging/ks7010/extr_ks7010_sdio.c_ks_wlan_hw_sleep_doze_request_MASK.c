
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int doze_request; } ;
struct ks_wlan_private {TYPE_1__ sleepstatus; scalar_t__ sleep_mode; int last_doze; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct ks_wlan_private *VAR_3)
{
 int VAR_4;


 FUNC_1(&VAR_3->sleepstatus.doze_request, 0);

 if (FUNC_0(&VAR_3->sleepstatus.status) == 0) {
  VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_0);
  if (VAR_4) {
   FUNC_3(VAR_3->net_dev, "write GCR_B_REG\n");
   goto set_sleep_mode;
  }
  FUNC_1(&VAR_3->sleepstatus.status, 1);
  VAR_3->last_doze = VAR_2;
 }

set_sleep_mode:
 VAR_3->sleep_mode = FUNC_0(&VAR_3->sleepstatus.status);
}
