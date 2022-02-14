
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct kvaser_usb_net_priv {TYPE_2__* dev; } ;
struct TYPE_3__ {int capabilities; } ;
struct TYPE_4__ {TYPE_1__ card_data; } ;


 int VAR_0 ;
 void* FUNC_0 (struct kvaser_usb_net_priv const*,struct sk_buff const*,int*,int*,int ) ;
 void* FUNC_1 (struct kvaser_usb_net_priv const*,struct sk_buff const*,int*,int*,int ) ;

__attribute__((used)) static void *
FUNC_2(const struct kvaser_usb_net_priv *VAR_1,
         const struct sk_buff *VAR_2, int *VAR_3,
         int *VAR_4, u16 VAR_5)
{
 void *VAR_6;

 if (VAR_1->dev->card_data.capabilities & VAR_0)
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5);
 else
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5);

 return VAR_6;
}
