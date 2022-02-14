
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
typedef enum led_ctl_mode { ____Placeholder_led_ctl_mode } led_ctl_mode ;
struct TYPE_2__ {int iw_mode; int (* LedControlHandler ) (struct net_device*,int) ;int state; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_10)
{
 struct r8192_priv *VAR_11 = FUNC_2(VAR_10);
 u8 VAR_12;
 enum led_ctl_mode VAR_13 = VAR_1;

 VAR_12 = FUNC_0(VAR_10, VAR_2);
 VAR_12 &= ~VAR_5;

 switch (VAR_11->rtllib->iw_mode) {
 case 129:
  if (VAR_11->rtllib->state == VAR_9)
   VAR_12 |= (VAR_4 << VAR_8);
  else
   VAR_12 |= (VAR_7 << VAR_8);
  VAR_13 = VAR_0;
  break;
 case 130:
  if (VAR_11->rtllib->state == VAR_9)
   VAR_12 |= (VAR_3 << VAR_8);
  else
   VAR_12 |= (VAR_7 << VAR_8);
  break;
 case 128:
  if (VAR_11->rtllib->state == VAR_9)
   VAR_12 |= (VAR_6 << VAR_8);
  else
   VAR_12 |= (VAR_7 << VAR_8);
  break;
 default:
  break;
 }

 FUNC_1(VAR_10, VAR_2, VAR_12);
 if (VAR_11->rtllib->LedControlHandler)
  VAR_11->rtllib->LedControlHandler(VAR_10, VAR_13);
}
