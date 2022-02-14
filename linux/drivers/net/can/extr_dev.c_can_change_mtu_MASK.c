
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int mtu; } ;
struct can_priv {int ctrlmode_static; int ctrlmode; int ctrlmode_supported; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct can_priv* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_4, int VAR_5)
{
 struct can_priv *VAR_6 = FUNC_0(VAR_4);


 if (VAR_4->flags & VAR_3)
  return -VAR_1;


 switch (VAR_5) {
 case 128:

  if (VAR_6->ctrlmode_static & VAR_0)
   return -VAR_2;

  VAR_6->ctrlmode &= ~VAR_0;
  break;

 case 129:

  if (!(VAR_6->ctrlmode_supported & VAR_0) &&
      !(VAR_6->ctrlmode_static & VAR_0))
   return -VAR_2;

  VAR_6->ctrlmode |= VAR_0;
  break;

 default:
  return -VAR_2;
 }

 VAR_4->mtu = VAR_5;
 return 0;
}
