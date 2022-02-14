
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int vlan_flags; int valid_sections; } ;
struct ice_vsi_ctx {TYPE_5__ info; } ;
struct TYPE_9__ {int vlan_flags; } ;
struct ice_vsi {TYPE_4__ info; int idx; TYPE_2__* back; } ;
struct TYPE_8__ {int sq_last_status; } ;
struct ice_hw {TYPE_3__ adminq; } ;
struct device {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_7__ {struct ice_hw hw; TYPE_1__* pdev; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int,int,int ) ;
 int FUNC_2 (struct device*,struct ice_vsi_ctx*) ;
 struct ice_vsi_ctx* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct ice_hw*,int ,struct ice_vsi_ctx*,int *) ;

int FUNC_5(struct ice_vsi *VAR_7, bool VAR_8)
{
 struct device *VAR_9 = &VAR_7->back->pdev->dev;
 struct ice_hw *VAR_10 = &VAR_7->back->hw;
 struct ice_vsi_ctx *VAR_11;
 enum ice_status VAR_12;
 int VAR_13 = 0;

 VAR_11 = FUNC_3(VAR_9, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;





 if (VAR_8)

  VAR_11->info.vlan_flags = VAR_5;
 else

  VAR_11->info.vlan_flags = VAR_4;


 VAR_11->info.vlan_flags |= VAR_6;

 VAR_11->info.valid_sections = FUNC_0(VAR_3);

 VAR_12 = FUNC_4(VAR_10, VAR_7->idx, VAR_11, ((void*)0));
 if (VAR_12) {
  FUNC_1(VAR_9, "update VSI for VLAN strip failed, ena = %d err %d aq_err %d\n",
   VAR_8, VAR_12, VAR_10->adminq.sq_last_status);
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_7->info.vlan_flags = VAR_11->info.vlan_flags;
out:
 FUNC_2(VAR_9, VAR_11);
 return VAR_13;
}
