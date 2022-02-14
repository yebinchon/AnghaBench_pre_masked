
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct gs_usb {int rx_submitted; int active_channels; } ;
struct gs_can {TYPE_1__* tx_context; int active_tx_urbs; int tx_submitted; struct gs_usb* parent; } ;
struct TYPE_2__ {int echo_id; struct gs_can* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct gs_can*) ;
 struct gs_can* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 int VAR_2;
 struct gs_can *VAR_3 = FUNC_4(VAR_1);
 struct gs_usb *VAR_4 = VAR_3->parent;

 FUNC_6(VAR_1);


 if (FUNC_0(&VAR_4->active_channels))
  FUNC_7(&VAR_4->rx_submitted);


 FUNC_7(&VAR_3->tx_submitted);
 FUNC_1(&VAR_3->active_tx_urbs, 0);


 VAR_2 = FUNC_3(VAR_3);
 if (VAR_2 < 0)
  FUNC_5(VAR_1, "Couldn't shutdown device (err=%d)", VAR_2);


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3->tx_context[VAR_2].dev = VAR_3;
  VAR_3->tx_context[VAR_2].echo_id = VAR_0;
 }


 FUNC_2(VAR_1);

 return 0;
}
