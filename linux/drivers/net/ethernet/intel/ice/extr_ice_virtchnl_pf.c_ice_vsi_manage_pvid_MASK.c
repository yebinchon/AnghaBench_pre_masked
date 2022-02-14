
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ice_vsi_ctx {int info; } ;
struct ice_vsi {int info; int idx; TYPE_2__* back; } ;
struct TYPE_6__ {int sq_last_status; } ;
struct ice_hw {TYPE_3__ adminq; } ;
struct device {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_5__ {struct ice_hw hw; TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int,int ) ;
 int FUNC_1 (struct device*,struct ice_vsi_ctx*) ;
 struct ice_vsi_ctx* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct ice_hw*,int ,struct ice_vsi_ctx*,int *) ;
 int FUNC_4 (struct ice_vsi_ctx*) ;
 int FUNC_5 (struct ice_vsi_ctx*,int ) ;

__attribute__((used)) static int FUNC_6(struct ice_vsi *VAR_3, u16 VAR_4, bool VAR_5)
{
 struct device *VAR_6 = &VAR_3->back->pdev->dev;
 struct ice_hw *VAR_7 = &VAR_3->back->hw;
 struct ice_vsi_ctx *VAR_8;
 enum ice_status VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_2(VAR_6, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->info = VAR_3->info;
 if (VAR_5)
  FUNC_5(VAR_8, VAR_4);
 else
  FUNC_4(VAR_8);

 VAR_9 = FUNC_3(VAR_7, VAR_3->idx, VAR_8, ((void*)0));
 if (VAR_9) {
  FUNC_0(VAR_6, "update VSI for port VLAN failed, err %d aq_err %d\n",
    VAR_9, VAR_7->adminq.sq_last_status);
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_3->info = VAR_8->info;
out:
 FUNC_1(VAR_6, VAR_8);
 return VAR_10;
}
