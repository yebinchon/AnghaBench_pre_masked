
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wakeup_request; } ;
struct ks_wlan_private {int net_dev; int rw_dwork; int wq; TYPE_1__ sleepstatus; } ;
struct hostif_sleep_request {int dummy; } ;
typedef enum sleep_mode_type { ____Placeholder_sleep_mode_type } sleep_mode_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 struct hostif_sleep_request* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,long) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct ks_wlan_private*,struct hostif_sleep_request*,int ) ;

__attribute__((used)) static
void FUNC_6(struct ks_wlan_private *VAR_3,
     enum sleep_mode_type VAR_4)
{
 struct hostif_sleep_request *VAR_5;

 if (VAR_4 == VAR_2) {
  VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
  if (!VAR_5)
   return;

  FUNC_5(VAR_3, VAR_5, FUNC_1(sizeof(*VAR_5)));
 } else if (VAR_4 == VAR_1) {
  FUNC_0(&VAR_3->sleepstatus.wakeup_request, 1);
  FUNC_4(VAR_3->wq, &VAR_3->rw_dwork, 1);
 } else {
  FUNC_3(VAR_3->net_dev, "invalid mode %ld\n", (long)VAR_4);
  return;
 }
}
