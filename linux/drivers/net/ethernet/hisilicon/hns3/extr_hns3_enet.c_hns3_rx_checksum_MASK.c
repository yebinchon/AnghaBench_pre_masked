
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int csum_level; int ip_summed; } ;
struct net_device {int features; } ;
struct TYPE_8__ {int l3l4_csum_err; } ;
struct hns3_enet_ring {int syncp; TYPE_4__ stats; TYPE_3__* tqp; } ;
struct TYPE_7__ {TYPE_2__* handle; } ;
struct TYPE_5__ {struct net_device* netdev; } ;
struct TYPE_6__ {TYPE_1__ kinfo; } ;


 int FUNC_0 (int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct hns3_enet_ring *VAR_19, struct sk_buff *VAR_20,
        u32 VAR_21, u32 VAR_22, u32 VAR_23)
{
 struct net_device *VAR_24 = VAR_19->tqp->handle->kinfo.netdev;
 int VAR_25, VAR_26;
 int VAR_27;

 VAR_20->ip_summed = VAR_0;

 FUNC_2(VAR_20);

 if (!(VAR_24->features & VAR_18))
  return;


 if (!(VAR_22 & FUNC_0(VAR_10)))
  return;

 if (FUNC_5(VAR_21 & (FUNC_0(VAR_7) | FUNC_0(VAR_11) |
     FUNC_0(VAR_14) |
     FUNC_0(VAR_15)))) {
  FUNC_3(&VAR_19->syncp);
  VAR_19->stats.l3l4_csum_err++;
  FUNC_4(&VAR_19->syncp);

  return;
 }

 VAR_27 = FUNC_1(VAR_23, VAR_16,
       VAR_17);
 switch (VAR_27) {
 case 130:
 case 128:
  VAR_20->csum_level = 1;

 case 129:
  VAR_25 = FUNC_1(VAR_21, VAR_8,
       VAR_9);
  VAR_26 = FUNC_1(VAR_21, VAR_12,
       VAR_13);


  if ((VAR_25 == VAR_2 ||
       VAR_25 == VAR_3) &&
      (VAR_26 == VAR_6 ||
       VAR_26 == VAR_5 ||
       VAR_26 == VAR_4))
   VAR_20->ip_summed = VAR_1;
  break;
 default:
  break;
 }
}
