
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_dev_channel {int linked; int ch_id; } ;
struct net_dev_context {struct net_device* dev; struct net_dev_channel rx; struct net_dev_channel tx; int list; struct most_interface* iface; } ;
struct most_interface {int dummy; } ;
struct most_channel_config {scalar_t__ data_type; scalar_t__ direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_0 (int,char*,int ,int ) ;
 struct net_dev_context* FUNC_1 (struct most_interface*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 struct net_dev_context* FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct most_interface *VAR_9, int VAR_10,
         struct most_channel_config *VAR_11, char *VAR_12,
         char *VAR_13)
{
 struct net_dev_context *VAR_14;
 struct net_dev_channel *VAR_15;
 struct net_device *VAR_16;
 unsigned long VAR_17;
 int VAR_18 = 0;

 if (!VAR_9)
  return -VAR_0;

 if (VAR_11->data_type != VAR_2)
  return -VAR_0;

 FUNC_3(&VAR_8);
 VAR_14 = FUNC_1(VAR_9);
 if (!VAR_14) {
  VAR_16 = FUNC_0(sizeof(struct net_dev_context), "meth%d",
       VAR_4, VAR_6);
  if (!VAR_16) {
   VAR_18 = -VAR_1;
   goto unlock;
  }

  VAR_14 = FUNC_5(VAR_16);
  VAR_14->iface = VAR_9;
  VAR_14->dev = VAR_16;

  FUNC_8(&VAR_5, VAR_17);
  FUNC_2(&VAR_14->list, &VAR_7);
  FUNC_9(&VAR_5, VAR_17);

  VAR_15 = VAR_11->direction == VAR_3 ? &VAR_14->tx : &VAR_14->rx;
 } else {
  VAR_15 = VAR_11->direction == VAR_3 ? &VAR_14->tx : &VAR_14->rx;
  if (VAR_15->linked) {
   FUNC_6("direction is allocated\n");
   VAR_18 = -VAR_0;
   goto unlock;
  }

  if (FUNC_7(VAR_14->dev)) {
   FUNC_6("register_netdev() failed\n");
   VAR_18 = -VAR_0;
   goto unlock;
  }
 }
 VAR_15->ch_id = VAR_10;
 VAR_15->linked = 1;

unlock:
 FUNC_4(&VAR_8);
 return VAR_18;
}
