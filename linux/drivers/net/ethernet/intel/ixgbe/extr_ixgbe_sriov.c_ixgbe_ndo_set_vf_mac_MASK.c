
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int num_vfs; TYPE_2__* pdev; TYPE_1__* vfinfo; int state; } ;
typedef int s32 ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int pf_set_mac; unsigned char* vf_mac_addresses; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*) ;
 int FUNC_4 (struct ixgbe_adapter*,unsigned char*,int) ;
 int FUNC_5 (struct ixgbe_adapter*,int,unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char*,int ) ;
 struct ixgbe_adapter* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int FUNC_9(struct net_device *VAR_3, int VAR_4, u8 *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_7(VAR_3);
 s32 VAR_7;

 if (VAR_4 >= VAR_6->num_vfs)
  return -VAR_0;

 if (FUNC_2(VAR_5)) {
  FUNC_0(&VAR_6->pdev->dev, "setting MAC %pM on VF %d\n",
    VAR_5, VAR_4);
  FUNC_0(&VAR_6->pdev->dev, "Reload the VF driver to make this change effective.");

  VAR_7 = FUNC_5(VAR_6, VAR_4, VAR_5);
  if (VAR_7 >= 0) {
   VAR_6->vfinfo[VAR_4].pf_set_mac = 1;

   if (FUNC_8(VAR_2, &VAR_6->state)) {
    FUNC_1(&VAR_6->pdev->dev, "The VF MAC address has been set, but the PF device is not up.\n");
    FUNC_1(&VAR_6->pdev->dev, "Bring the PF device up before attempting to use the VF device.\n");
   }
  } else {
   FUNC_1(&VAR_6->pdev->dev, "The VF MAC address was NOT set due to invalid or duplicate MAC address.\n");
  }
 } else if (FUNC_3(VAR_5)) {
  unsigned char *VAR_8 =
        VAR_6->vfinfo[VAR_4].vf_mac_addresses;


  if (FUNC_3(VAR_8))
   return 0;

  FUNC_0(&VAR_6->pdev->dev, "removing MAC on VF %d\n", VAR_4);

  VAR_7 = FUNC_4(VAR_6, VAR_8, VAR_4);
  if (VAR_7 >= 0) {
   VAR_6->vfinfo[VAR_4].pf_set_mac = 0;
   FUNC_6(VAR_8, VAR_5, VAR_1);
  } else {
   FUNC_1(&VAR_6->pdev->dev, "Could NOT remove the VF MAC address.\n");
  }
 } else {
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
