
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ice_vsi {struct ice_pf* back; } ;
struct TYPE_4__ {int sq_last_status; } ;
struct ice_hw {int vendor_id; int device_id; TYPE_2__ adminq; } ;
struct ice_pf {TYPE_1__* pdev; struct ice_hw hw; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;
struct device {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int,int ) ;
 int* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device*,int*) ;
 int FUNC_3 (struct ice_hw*,int,int*,int*) ;
 int FUNC_4 (int *,int *,int) ;
 struct ice_netdev_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_3, struct ethtool_eeprom *VAR_4,
        u8 *VAR_5)
{
 struct ice_netdev_priv *VAR_6 = FUNC_5(VAR_3);
 u16 VAR_7, VAR_8, VAR_9;
 struct ice_vsi *VAR_10 = VAR_6->vsi;
 struct ice_pf *VAR_11 = VAR_10->back;
 struct ice_hw *VAR_12 = &VAR_11->hw;
 enum ice_status VAR_13;
 struct device *VAR_14;
 int VAR_15 = 0;
 u16 *VAR_16;

 VAR_14 = &VAR_11->pdev->dev;

 VAR_4->magic = VAR_12->vendor_id | (VAR_12->device_id << 16);

 VAR_7 = VAR_4->offset >> 1;
 VAR_8 = (VAR_4->offset + VAR_4->len - 1) >> 1;
 VAR_9 = VAR_8 - VAR_7 + 1;

 VAR_16 = FUNC_1(VAR_14, VAR_9, sizeof(u16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_13 = FUNC_3(VAR_12, VAR_7, &VAR_9, VAR_16);
 if (VAR_13) {
  FUNC_0(VAR_14, "ice_read_sr_buf failed, err %d aq_err %d\n",
   VAR_13, VAR_12->adminq.sq_last_status);
  VAR_4->len = sizeof(u16) * VAR_9;
  VAR_15 = -VAR_0;
  goto out;
 }

 FUNC_4(VAR_5, (u8 *)VAR_16 + (VAR_4->offset & 1), VAR_4->len);
out:
 FUNC_2(VAR_14, VAR_16);
 return VAR_15;
}
