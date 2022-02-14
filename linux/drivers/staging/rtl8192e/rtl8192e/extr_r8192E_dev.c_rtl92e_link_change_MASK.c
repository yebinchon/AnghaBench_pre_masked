
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ bPromiscuousOn; } ;
struct rtllib_device {scalar_t__ state; scalar_t__ pairwise_key_type; scalar_t__ iw_mode; TYPE_2__ IntelPromiscuousModeInfo; } ;
struct r8192_priv {int ReceiveConfig; struct rtllib_device* rtllib; TYPE_1__* ops; int up; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* update_ratr_table ) (struct net_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int,int ) ;
 int FUNC_5 (struct net_device*,int ,int ) ;
 struct r8192_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

void FUNC_8(struct net_device *VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_6(VAR_7);
 struct rtllib_device *VAR_9 = VAR_8->rtllib;

 if (!VAR_8->up)
  return;

 if (VAR_9->state == VAR_6) {
  FUNC_0(VAR_7);
  VAR_8->ops->update_ratr_table(VAR_7);
  if ((VAR_9->pairwise_key_type == VAR_3) ||
      (VAR_9->pairwise_key_type == VAR_2))
   FUNC_2(VAR_7);
 } else {
  FUNC_4(VAR_7, 0x173, 0);
 }
 FUNC_1(VAR_7);

 if (VAR_9->iw_mode == VAR_1 || VAR_9->iw_mode == VAR_0) {
  u32 VAR_10;

  VAR_10 = FUNC_3(VAR_7, VAR_4);
  if (VAR_8->rtllib->state == VAR_6) {
   if (VAR_9->IntelPromiscuousModeInfo.bPromiscuousOn)
    ;
   else
    VAR_8->ReceiveConfig = VAR_10 |= VAR_5;
  } else
   VAR_8->ReceiveConfig = VAR_10 &= ~VAR_5;

  FUNC_5(VAR_7, VAR_4, VAR_10);
 }
}
