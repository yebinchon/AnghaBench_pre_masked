
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct kvaser_usb_net_priv {int dummy; } ;
struct kvaser_usb {size_t nchannels; struct kvaser_usb_net_priv** nets; TYPE_1__* intf; } ;
struct kvaser_cmd {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,size_t) ;
 size_t FUNC_1 (struct kvaser_usb const*,struct kvaser_cmd const*) ;

__attribute__((used)) static struct kvaser_usb_net_priv *
FUNC_2(const struct kvaser_usb *VAR_0,
       const struct kvaser_cmd *VAR_1)
{
 struct kvaser_usb_net_priv *VAR_2 = ((void*)0);
 u8 VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (VAR_3 >= VAR_0->nchannels)
  FUNC_0(&VAR_0->intf->dev,
   "Invalid channel number (%d)\n", VAR_3);
 else
  VAR_2 = VAR_0->nets[VAR_3];

 return VAR_2;
}
