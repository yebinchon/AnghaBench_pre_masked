
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct kvaser_usb_net_priv {int start_comp; int netdev; } ;
struct kvaser_usb {size_t nchannels; struct kvaser_usb_net_priv** nets; TYPE_3__* intf; } ;
struct TYPE_4__ {size_t channel; } ;
struct TYPE_5__ {TYPE_1__ simple; } ;
struct kvaser_cmd {TYPE_2__ u; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct kvaser_usb *VAR_0,
          const struct kvaser_cmd *VAR_1)
{
 struct kvaser_usb_net_priv *VAR_2;
 u8 VAR_3 = VAR_1->u.simple.channel;

 if (VAR_3 >= VAR_0->nchannels) {
  FUNC_2(&VAR_0->intf->dev,
   "Invalid channel number (%d)\n", VAR_3);
  return;
 }

 VAR_2 = VAR_0->nets[VAR_3];

 if (FUNC_1(&VAR_2->start_comp) &&
     FUNC_3(VAR_2->netdev)) {
  FUNC_5(VAR_2->netdev);
 } else {
  FUNC_4(VAR_2->netdev);
  FUNC_0(&VAR_2->start_comp);
 }
}
