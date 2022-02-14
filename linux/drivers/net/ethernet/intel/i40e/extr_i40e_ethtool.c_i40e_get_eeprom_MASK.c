
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int asq_last_status; } ;
struct i40e_hw {int vendor_id; int device_id; int debug_mask; TYPE_3__ aq; } ;
struct i40e_pf {TYPE_2__* pdev; int state; struct i40e_hw hw; } ;
struct i40e_nvm_access {int config; int data_size; int offset; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct ethtool_eeprom {int len; int magic; int offset; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct i40e_pf* back; } ;


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
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int,int,int,int *,int,int *) ;
 int FUNC_3 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *,int) ;
 struct i40e_netdev_priv* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_12,
      struct ethtool_eeprom *VAR_13, u8 *VAR_14)
{
 struct i40e_netdev_priv *VAR_15 = FUNC_8(VAR_12);
 struct i40e_hw *VAR_16 = &VAR_15->vsi->back->hw;
 struct i40e_pf *VAR_17 = VAR_15->vsi->back;
 int VAR_18 = 0, VAR_19, VAR_20;
 u8 *VAR_21;
 u16 VAR_22, VAR_23;
 bool VAR_24;
 u32 VAR_25;


 if (VAR_13->len == 0)
  return -VAR_1;


 VAR_25 = VAR_16->vendor_id | (VAR_16->device_id << 16);
 if (VAR_13->magic && VAR_13->magic != VAR_25) {
  struct i40e_nvm_access *VAR_26 = (struct i40e_nvm_access *)VAR_13;
  int VAR_27 = 0;


  if ((VAR_13->magic >> 16) != VAR_16->device_id)
   VAR_27 = -VAR_1;
  else if (FUNC_9(VAR_11, VAR_17->state) ||
    FUNC_9(VAR_10, VAR_17->state))
   VAR_27 = -VAR_0;
  else
   VAR_18 = FUNC_3(VAR_16, VAR_26, VAR_14, &VAR_27);

  if ((VAR_27 || VAR_18) && (VAR_16->debug_mask & VAR_6))
   FUNC_0(&VAR_17->pdev->dev,
     "NVMUpdate read failed err=%d status=0x%x errno=%d module=%d offset=0x%x size=%d\n",
     VAR_18, VAR_16->aq.asq_last_status, VAR_27,
     (u8)(VAR_26->config & VAR_7),
     VAR_26->offset, VAR_26->data_size);

  return VAR_27;
 }


 VAR_13->magic = VAR_16->vendor_id | (VAR_16->device_id << 16);

 VAR_21 = FUNC_6(VAR_13->len, VAR_3);
 if (!VAR_21)
  return -VAR_2;

 VAR_18 = FUNC_1(VAR_16, VAR_9);
 if (VAR_18) {
  FUNC_0(&VAR_17->pdev->dev,
    "Failed Acquiring NVM resource for read err=%d status=0x%x\n",
    VAR_18, VAR_16->aq.asq_last_status);
  goto free_buff;
 }

 VAR_23 = VAR_13->len / 4096;
 VAR_23 += (VAR_13->len % 4096) ? 1 : 0;
 VAR_19 = 4096;
 VAR_24 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
  if (VAR_22 == (VAR_23 - 1)) {
   VAR_19 = VAR_13->len - (4096 * VAR_22);
   VAR_24 = 1;
  }
  VAR_20 = VAR_13->offset + (4096 * VAR_22),
  VAR_18 = FUNC_2(VAR_16, 0x0, VAR_20, VAR_19,
    (u8 *)VAR_21 + (4096 * VAR_22),
    VAR_24, ((void*)0));
  if (VAR_18 && VAR_16->aq.asq_last_status == VAR_5) {
   FUNC_0(&VAR_17->pdev->dev,
     "read NVM failed, invalid offset 0x%x\n",
     VAR_20);
   break;
  } else if (VAR_18 &&
      VAR_16->aq.asq_last_status == VAR_4) {
   FUNC_0(&VAR_17->pdev->dev,
     "read NVM failed, access, offset 0x%x\n",
     VAR_20);
   break;
  } else if (VAR_18) {
   FUNC_0(&VAR_17->pdev->dev,
     "read NVM failed offset %d err=%d status=0x%x\n",
     VAR_20, VAR_18, VAR_16->aq.asq_last_status);
   break;
  }
 }

 FUNC_4(VAR_16);
 FUNC_7(VAR_14, (u8 *)VAR_21, VAR_13->len);
free_buff:
 FUNC_5(VAR_21);
 return VAR_18;
}
