
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dev_state; int msg_enable; int vxlan_ports; int mdio_complete; int i2c_complete; int i2c_mutex; int tstamp_lock; int rss_mutex; int xpcs_lock; int lock; struct device* dev; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct xgbe_prv_data* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_3 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct xgbe_prv_data* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;

struct xgbe_prv_data *FUNC_11(struct device *VAR_6)
{
 struct xgbe_prv_data *VAR_7;
 struct net_device *VAR_8;

 VAR_8 = FUNC_3(sizeof(struct xgbe_prv_data),
       VAR_2);
 if (!VAR_8) {
  FUNC_4(VAR_6, "alloc_etherdev_mq failed\n");
  return FUNC_0(-VAR_0);
 }
 FUNC_2(VAR_8, VAR_6);
 VAR_7 = FUNC_7(VAR_8);
 VAR_7->netdev = VAR_8;
 VAR_7->dev = VAR_6;

 FUNC_10(&VAR_7->lock);
 FUNC_10(&VAR_7->xpcs_lock);
 FUNC_6(&VAR_7->rss_mutex);
 FUNC_10(&VAR_7->tstamp_lock);
 FUNC_6(&VAR_7->i2c_mutex);
 FUNC_5(&VAR_7->i2c_complete);
 FUNC_5(&VAR_7->mdio_complete);
 FUNC_1(&VAR_7->vxlan_ports);

 VAR_7->msg_enable = FUNC_8(VAR_4, VAR_5);

 FUNC_9(VAR_1, &VAR_7->dev_state);
 FUNC_9(VAR_3, &VAR_7->dev_state);

 return VAR_7;
}
