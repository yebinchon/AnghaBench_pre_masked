
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int asq_last_status; } ;
struct i40e_hw {int vendor_id; int device_id; int debug_mask; TYPE_3__ aq; } ;
struct i40e_pf {TYPE_2__* pdev; int state; struct i40e_hw hw; } ;
struct i40e_nvm_access {int config; int data_size; int offset; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct ethtool_eeprom {int magic; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,int ,int,int ,int ,int ) ;
 int FUNC_1 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 struct i40e_netdev_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7,
      struct ethtool_eeprom *VAR_8, u8 *VAR_9)
{
 struct i40e_netdev_priv *VAR_10 = FUNC_2(VAR_7);
 struct i40e_hw *VAR_11 = &VAR_10->vsi->back->hw;
 struct i40e_pf *VAR_12 = VAR_10->vsi->back;
 struct i40e_nvm_access *VAR_13 = (struct i40e_nvm_access *)VAR_8;
 int VAR_14 = 0;
 int VAR_15 = 0;
 u32 VAR_16;


 VAR_16 = VAR_11->vendor_id | (VAR_11->device_id << 16);
 if (VAR_8->magic == VAR_16)
  VAR_15 = -VAR_2;

 else if (!VAR_8->magic || (VAR_8->magic >> 16) != VAR_11->device_id)
  VAR_15 = -VAR_1;
 else if (FUNC_3(VAR_6, VAR_12->state) ||
   FUNC_3(VAR_5, VAR_12->state))
  VAR_15 = -VAR_0;
 else
  VAR_14 = FUNC_1(VAR_11, VAR_13, VAR_9, &VAR_15);

 if ((VAR_15 || VAR_14) && (VAR_11->debug_mask & VAR_3))
  FUNC_0(&VAR_12->pdev->dev,
    "NVMUpdate write failed err=%d status=0x%x errno=%d module=%d offset=0x%x size=%d\n",
    VAR_14, VAR_11->aq.asq_last_status, VAR_15,
    (u8)(VAR_13->config & VAR_4),
    VAR_13->offset, VAR_13->data_size);

 return VAR_15;
}
