
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ice_vsi {int rss_table_size; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; int flags; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__*) ;
 scalar_t__* FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (struct ice_vsi*,scalar_t__*,scalar_t__*,int) ;
 struct ice_netdev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_5, u32 *VAR_6, u8 *VAR_7, u8 *VAR_8)
{
 struct ice_netdev_priv *VAR_9 = FUNC_3(VAR_5);
 struct ice_vsi *VAR_10 = VAR_9->vsi;
 struct ice_pf *VAR_11 = VAR_10->back;
 int VAR_12 = 0, VAR_13;
 u8 *VAR_14;

 if (VAR_8)
  *VAR_8 = VAR_2;

 if (!VAR_6)
  return 0;

 if (!FUNC_5(VAR_4, VAR_11->flags)) {

  FUNC_4(VAR_5, "RSS is not configured on this VSI!\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_1(&VAR_11->pdev->dev, VAR_10->rss_table_size, VAR_3);
 if (!VAR_14)
  return -VAR_1;

 if (FUNC_2(VAR_10, VAR_7, VAR_14, VAR_10->rss_table_size)) {
  VAR_12 = -VAR_0;
  goto out;
 }

 for (VAR_13 = 0; VAR_13 < VAR_10->rss_table_size; VAR_13++)
  VAR_6[VAR_13] = (u32)(VAR_14[VAR_13]);

out:
 FUNC_0(&VAR_11->pdev->dev, VAR_14);
 return VAR_12;
}
