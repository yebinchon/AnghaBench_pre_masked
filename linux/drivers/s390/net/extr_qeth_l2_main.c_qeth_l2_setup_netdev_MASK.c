
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_hdr_tso {int dummy; } ;
struct qeth_hdr {int dummy; } ;
struct qeth_card {TYPE_1__* dev; int napi; } ;
struct TYPE_5__ {int needed_headroom; int features; int hw_features; int vlan_features; int * netdev_ops; int priv_flags; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 scalar_t__ FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;
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
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (struct qeth_card*,int ) ;
 scalar_t__ FUNC_8 (struct qeth_card*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct qeth_card *VAR_21, bool VAR_22)
{
 int VAR_23;

 if (FUNC_2(VAR_21)) {
  VAR_21->dev->netdev_ops = &VAR_19;
  VAR_21->dev->flags |= VAR_0;
  goto add_napi;
 }

 VAR_21->dev->needed_headroom = sizeof(struct qeth_hdr);
 VAR_21->dev->netdev_ops = &VAR_18;
 VAR_21->dev->priv_flags |= VAR_1;

 if (FUNC_1(VAR_21)) {
  VAR_21->dev->features |= VAR_14;
 } else {
  if (!FUNC_3(VAR_21))
   VAR_21->dev->hw_features |= VAR_7;
  VAR_21->dev->features |= VAR_7;
 }

 if (FUNC_0(VAR_21) && !FUNC_3(VAR_21)) {
  VAR_21->dev->features |= VAR_11;

  if (FUNC_7(VAR_21, VAR_4)) {
   VAR_21->dev->hw_features |= VAR_9;
   VAR_21->dev->vlan_features |= VAR_9;
  }
 }
 if (FUNC_8(VAR_21, VAR_5)) {
  VAR_21->dev->hw_features |= VAR_8;
  VAR_21->dev->vlan_features |= VAR_8;
 }
 if (FUNC_7(VAR_21, VAR_2) ||
     FUNC_8(VAR_21, VAR_3)) {
  VAR_21->dev->hw_features |= VAR_10;
  VAR_21->dev->vlan_features |= VAR_10;
 }
 if (FUNC_7(VAR_21, VAR_6)) {
  VAR_21->dev->hw_features |= VAR_12;
  VAR_21->dev->vlan_features |= VAR_12;
 }
 if (FUNC_8(VAR_21, VAR_6)) {
  VAR_21->dev->hw_features |= VAR_13;
  VAR_21->dev->vlan_features |= VAR_13;
 }

 if (VAR_21->dev->hw_features & (VAR_12 | VAR_13)) {
  VAR_21->dev->needed_headroom = sizeof(struct qeth_hdr_tso);
  FUNC_6(VAR_21->dev,
           VAR_15 * (VAR_16 - 1));
 }

add_napi:
 FUNC_5(VAR_21->dev, &VAR_21->napi, VAR_20, VAR_17);
 VAR_23 = FUNC_9(VAR_21->dev);
 if (!VAR_23 && VAR_22)
  FUNC_4(VAR_21->dev);

 if (VAR_23)
  VAR_21->dev->netdev_ops = ((void*)0);
 return VAR_23;
}
