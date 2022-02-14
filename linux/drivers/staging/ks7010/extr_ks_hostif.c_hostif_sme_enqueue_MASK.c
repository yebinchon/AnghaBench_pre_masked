
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {size_t qtail; int * event_buff; } ;
struct ks_wlan_private {int sme_task; int net_dev; TYPE_1__ sme_i; } ;


 int VAR_0 ;
 int FUNC_0 (struct ks_wlan_private*) ;
 int FUNC_1 (struct ks_wlan_private*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ks_wlan_private *VAR_1, u16 VAR_2)
{

 if (FUNC_0(VAR_1) < (VAR_0 - 1)) {
  VAR_1->sme_i.event_buff[VAR_1->sme_i.qtail] = VAR_2;
  FUNC_1(VAR_1);
 } else {

  FUNC_2(VAR_1->net_dev, "sme queue buffer overflow\n");
 }

 FUNC_3(&VAR_1->sme_task);
}
