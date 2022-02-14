
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t qhead; int * event_buff; } ;
struct ks_wlan_private {scalar_t__ dev_state; int sme_task; TYPE_1__ sme_i; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ks_wlan_private*) ;
 int FUNC_1 (struct ks_wlan_private*,int ) ;
 int FUNC_2 (struct ks_wlan_private*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
void FUNC_4(unsigned long VAR_1)
{
 struct ks_wlan_private *VAR_2 = (struct ks_wlan_private *)VAR_1;

 if (VAR_2->dev_state < VAR_0)
  return;

 if (FUNC_0(VAR_2) <= 0)
  return;

 FUNC_1(VAR_2, VAR_2->sme_i.event_buff[VAR_2->sme_i.qhead]);
 FUNC_2(VAR_2);
 if (FUNC_0(VAR_2) > 0)
  FUNC_3(&VAR_2->sme_task);
}
