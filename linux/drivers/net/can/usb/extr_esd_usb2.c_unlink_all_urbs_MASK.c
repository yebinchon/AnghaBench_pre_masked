
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esd_usb2_net_priv {TYPE_1__* tx_contexts; int active_tx_jobs; int tx_submitted; } ;
struct esd_usb2 {int net_count; struct esd_usb2_net_priv** nets; int rx_submitted; } ;
struct TYPE_2__ {int echo_index; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct esd_usb2 *VAR_1)
{
 struct esd_usb2_net_priv *VAR_2;
 int VAR_3, VAR_4;

 FUNC_1(&VAR_1->rx_submitted);
 for (VAR_3 = 0; VAR_3 < VAR_1->net_count; VAR_3++) {
  VAR_2 = VAR_1->nets[VAR_3];
  if (VAR_2) {
   FUNC_1(&VAR_2->tx_submitted);
   FUNC_0(&VAR_2->active_tx_jobs, 0);

   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    VAR_2->tx_contexts[VAR_4].echo_index = VAR_0;
  }
 }
}
