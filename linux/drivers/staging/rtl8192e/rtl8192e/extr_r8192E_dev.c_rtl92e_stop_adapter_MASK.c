
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r8192_priv {int bHwRfOffAction; int skb_queue; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int * skb_aggQ; int * skb_waitQ; int bSupportRemoteWakeUp; int (* SetHwRegHandler ) (struct net_device*,int ,int*) ;} ;


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
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (struct net_device*,int ,int) ;
 struct r8192_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*,int ,int*) ;

void FUNC_8(struct net_device *VAR_11, bool VAR_12)
{
 struct r8192_priv *VAR_13 = FUNC_5(VAR_11);
 int VAR_14;
 u8 VAR_15;
 u8 VAR_16;
 u32 VAR_17;

 VAR_15 = VAR_7;
 VAR_13->rtllib->SetHwRegHandler(VAR_11, VAR_3, &VAR_15);

 if (!VAR_13->rtllib->bSupportRemoteWakeUp) {
  VAR_16 = 0x0;
  FUNC_3(VAR_11, VAR_0, VAR_16);
 }

 FUNC_0(20);

 if (!VAR_12) {
  FUNC_0(150);

  VAR_13->bHwRfOffAction = 2;

  if (!VAR_13->rtllib->bSupportRemoteWakeUp) {
   FUNC_2(VAR_11);
   VAR_17 = FUNC_1(VAR_11, VAR_1);
   VAR_17 |= VAR_2;
   FUNC_4(VAR_11, VAR_1, VAR_17);
  } else {
   FUNC_4(VAR_11, VAR_8, 0xffffffff);
   FUNC_4(VAR_11, VAR_9, 0xffffffff);
   FUNC_4(VAR_11, VAR_10, 0xffffffff);


   FUNC_3(VAR_11, VAR_6, 0x5);
   FUNC_3(VAR_11, VAR_5, 0xa);
  }
 }

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
  FUNC_6(&VAR_13->rtllib->skb_waitQ[VAR_14]);
 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
  FUNC_6(&VAR_13->rtllib->skb_aggQ[VAR_14]);

 FUNC_6(&VAR_13->skb_queue);
}
