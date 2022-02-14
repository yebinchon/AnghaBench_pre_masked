
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ flex10_enable; } ;
struct TYPE_8__ {int addr; } ;
struct i40e_hw {int partition_id; TYPE_4__ func_caps; TYPE_3__ mac; } ;
struct i40e_pf {size_t lan_vsi; TYPE_5__* pdev; TYPE_2__** vsi; struct i40e_hw hw; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_10__ {int dev; } ;
struct TYPE_7__ {TYPE_1__* netdev; } ;
struct TYPE_6__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct i40e_pf *VAR_5)
{
 struct i40e_hw *VAR_6 = &VAR_5->hw;
 i40e_status VAR_7;
 u8 VAR_8[6];
 u16 VAR_9 = 0;


 if (VAR_5->vsi[VAR_5->lan_vsi] && VAR_5->vsi[VAR_5->lan_vsi]->netdev) {
  FUNC_1(VAR_8,
    VAR_5->vsi[VAR_5->lan_vsi]->netdev->dev_addr);
 } else {
  FUNC_0(&VAR_5->pdev->dev,
   "Failed to retrieve MAC address; using default\n");
  FUNC_1(VAR_8, VAR_6->mac.addr);
 }





 VAR_9 = VAR_3;

 if (VAR_6->func_caps.flex10_enable && VAR_6->partition_id != 1)
  VAR_9 = VAR_2;

 VAR_7 = FUNC_2(VAR_6, VAR_9, VAR_8, ((void*)0));
 if (VAR_7) {
  FUNC_0(&VAR_5->pdev->dev,
   "Failed to update MAC address registers; cannot enable Multicast Magic packet wake up");
  return;
 }

 VAR_9 = VAR_0
   | VAR_1
   | VAR_4;
 VAR_7 = FUNC_2(VAR_6, VAR_9, VAR_8, ((void*)0));
 if (VAR_7)
  FUNC_0(&VAR_5->pdev->dev,
   "Failed to enable Multicast Magic Packet wake up\n");
}
