
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ice_aqc_vsi_props {int sw_flags; int valid_sections; } ;
struct ice_vsi_ctx {struct ice_aqc_vsi_props info; } ;
struct ice_vsi {int idx; struct ice_aqc_vsi_props info; TYPE_2__* back; } ;
struct TYPE_6__ {int sq_last_status; } ;
struct ice_hw {TYPE_3__ adminq; } ;
struct device {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_5__ {struct ice_hw hw; TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ,int,int ) ;
 int FUNC_2 (struct device*,struct ice_vsi_ctx*) ;
 struct ice_vsi_ctx* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct ice_hw*,int ,struct ice_vsi_ctx*,int *) ;

__attribute__((used)) static int FUNC_5(struct ice_vsi *VAR_6, u16 VAR_7)
{
 struct device *VAR_8 = &VAR_6->back->pdev->dev;
 struct ice_aqc_vsi_props *VAR_9;
 struct ice_hw *VAR_10 = &VAR_6->back->hw;
 struct ice_vsi_ctx *VAR_11;
 enum ice_status VAR_12;
 int VAR_13 = 0;

 VAR_9 = &VAR_6->info;

 VAR_11 = FUNC_3(VAR_8, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->info = VAR_6->info;

 if (VAR_7 == VAR_0)

  VAR_11->info.sw_flags |= VAR_5;
 else

  VAR_11->info.sw_flags &= ~VAR_5;
 VAR_11->info.valid_sections = FUNC_0(VAR_4);

 VAR_12 = FUNC_4(VAR_10, VAR_6->idx, VAR_11, ((void*)0));
 if (VAR_12) {
  FUNC_1(VAR_8, "update VSI for bridge mode failed, bmode = %d err %d aq_err %d\n",
   VAR_7, VAR_12, VAR_10->adminq.sq_last_status);
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_9->sw_flags = VAR_11->info.sw_flags;

out:
 FUNC_2(VAR_8, VAR_11);
 return VAR_13;
}
