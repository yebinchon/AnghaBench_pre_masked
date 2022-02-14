
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct qeth_hdr_tso {int dummy; } ;
struct qeth_hdr {int dummy; } ;
struct TYPE_7__ {scalar_t__ link_type; int unique_id; } ;
struct qeth_card {TYPE_2__* dev; int napi; TYPE_1__ info; } ;
struct TYPE_8__ {int dev_id; int features; int hw_features; int vlan_features; unsigned int needed_headroom; int * netdev_ops; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 scalar_t__ FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;
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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (struct qeth_card*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (struct qeth_card*,int ) ;
 int FUNC_11 (struct qeth_card*) ;
 int FUNC_12 (struct qeth_card*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_14(struct qeth_card *VAR_23, bool VAR_24)
{
 unsigned int VAR_25;
 int VAR_26;

 if (FUNC_1(VAR_23) || FUNC_2(VAR_23)) {
  if ((VAR_23->info.link_type == VAR_16) ||
      (VAR_23->info.link_type == VAR_15)) {
   FUNC_9("qeth_l3: ignoring TR device\n");
   return -VAR_0;
  }

  VAR_23->dev->netdev_ops = &VAR_21;


  FUNC_11(VAR_23);
  if (!(VAR_23->info.unique_id & VAR_18))
   VAR_23->dev->dev_id = VAR_23->info.unique_id & 0xffff;

  if (!FUNC_3(VAR_23)) {
   VAR_23->dev->features |= VAR_11;
   VAR_23->dev->hw_features |= VAR_12 |
    VAR_10 | VAR_9;
   VAR_23->dev->vlan_features |= VAR_12 |
    VAR_10 | VAR_9;
  }

  if (FUNC_10(VAR_23, VAR_3)) {
   VAR_23->dev->hw_features |= VAR_8;
   VAR_23->dev->vlan_features |= VAR_8;
  }
  if (FUNC_10(VAR_23, VAR_4)) {
   VAR_23->dev->hw_features |= VAR_13;
   VAR_23->dev->vlan_features |= VAR_13;
  }


  if (VAR_23->dev->hw_features & VAR_13)
   VAR_25 = sizeof(struct qeth_hdr_tso) + VAR_19;
  else if (VAR_23->dev->hw_features & VAR_12)
   VAR_25 = sizeof(struct qeth_hdr_tso);
  else
   VAR_25 = sizeof(struct qeth_hdr) + VAR_19;
 } else if (FUNC_0(VAR_23)) {
  VAR_23->dev->flags |= VAR_2;
  VAR_23->dev->netdev_ops = &VAR_20;
  VAR_25 = sizeof(struct qeth_hdr) - VAR_1;

  VAR_26 = FUNC_12(VAR_23);
  if (VAR_26)
   goto out;
 } else
  return -VAR_0;

 VAR_23->dev->needed_headroom = VAR_25;
 VAR_23->dev->features |= VAR_7 |
    VAR_6 |
    VAR_5;

 FUNC_6(VAR_23->dev);
 if (VAR_23->dev->hw_features & (VAR_12 | VAR_13))
  FUNC_8(VAR_23->dev,
           VAR_14 * (FUNC_4(VAR_23) - 1));

 FUNC_7(VAR_23->dev, &VAR_23->napi, VAR_22, VAR_17);
 VAR_26 = FUNC_13(VAR_23->dev);
 if (!VAR_26 && VAR_24)
  FUNC_5(VAR_23->dev);

out:
 if (VAR_26)
  VAR_23->dev->netdev_ops = ((void*)0);
 return VAR_26;
}
