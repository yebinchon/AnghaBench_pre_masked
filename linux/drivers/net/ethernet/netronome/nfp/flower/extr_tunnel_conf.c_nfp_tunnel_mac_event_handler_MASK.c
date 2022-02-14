
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr {struct nfp_flower_repr_priv* app_priv; struct nfp_app* app; } ;
struct nfp_flower_repr_priv {int on_bridge; } ;
struct nfp_app {int dummy; } ;
struct netdev_notifier_changeupper_info {scalar_t__ linking; struct net_device* upper_dev; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*) ;
 struct nfp_repr* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nfp_app*,char*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct nfp_app*,struct net_device*,int ) ;

int FUNC_6(struct nfp_app *VAR_9,
     struct net_device *VAR_10,
     unsigned long VAR_11, void *VAR_12)
{
 int VAR_13;

 if (VAR_11 == VAR_3) {
  VAR_13 = FUNC_5(VAR_9, VAR_10,
          VAR_6);
  if (VAR_13)
   FUNC_2(VAR_9, "Failed to delete offload MAC on %s.\n",
          FUNC_0(VAR_10));
 } else if (VAR_11 == VAR_4) {
  VAR_13 = FUNC_5(VAR_9, VAR_10,
          VAR_5);
  if (VAR_13)
   FUNC_2(VAR_9, "Failed to offload MAC on %s.\n",
          FUNC_0(VAR_10));
 } else if (VAR_11 == VAR_1) {

  if (!(VAR_10->flags & VAR_0))
   return VAR_8;

  VAR_13 = FUNC_5(VAR_9, VAR_10,
          VAR_7);
  if (VAR_13)
   FUNC_2(VAR_9, "Failed to offload MAC change on %s.\n",
          FUNC_0(VAR_10));
 } else if (VAR_11 == VAR_2) {






  struct netdev_notifier_changeupper_info *VAR_14 = VAR_12;
  struct net_device *VAR_15 = VAR_14->upper_dev;
  struct nfp_flower_repr_priv *VAR_16;
  struct nfp_repr *VAR_17;

  if (!FUNC_4(VAR_10) ||
      !FUNC_3(VAR_15))
   return VAR_8;

  VAR_17 = FUNC_1(VAR_10);
  if (VAR_17->app != VAR_9)
   return VAR_8;

  VAR_16 = VAR_17->app_priv;

  if (VAR_14->linking) {
   if (FUNC_5(VAR_9, VAR_10,
         VAR_6))
    FUNC_2(VAR_9, "Failed to delete offloaded MAC on %s.\n",
           FUNC_0(VAR_10));
   VAR_16->on_bridge = 1;
  } else {
   VAR_16->on_bridge = 0;

   if (!(VAR_10->flags & VAR_0))
    return VAR_8;

   if (FUNC_5(VAR_9, VAR_10,
         VAR_5))
    FUNC_2(VAR_9, "Failed to offload MAC on %s.\n",
           FUNC_0(VAR_10));
  }
 }
 return VAR_8;
}
