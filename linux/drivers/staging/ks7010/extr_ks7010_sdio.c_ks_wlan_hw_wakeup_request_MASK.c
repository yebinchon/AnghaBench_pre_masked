
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct ks_wlan_private {int wakeup_count; int last_wakeup; int net_dev; TYPE_1__ psstatus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct ks_wlan_private *VAR_4)
{
 int VAR_5;

 if (FUNC_0(&VAR_4->psstatus.status) == VAR_0) {
  VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2);
  if (VAR_5)
   FUNC_2(VAR_4->net_dev, "write WAKEUP_REG\n");

  VAR_4->last_wakeup = VAR_3;
  ++VAR_4->wakeup_count;
 }
}
