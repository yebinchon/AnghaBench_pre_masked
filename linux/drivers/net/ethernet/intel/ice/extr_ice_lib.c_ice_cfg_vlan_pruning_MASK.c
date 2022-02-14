
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sec_flags; int sw_flags2; int valid_sections; } ;
struct ice_vsi_ctx {TYPE_3__ info; } ;
struct ice_vsi {TYPE_3__ info; int vsi_num; int idx; int netdev; struct ice_pf* back; } ;
struct TYPE_6__ {int sq_last_status; } ;
struct TYPE_8__ {TYPE_2__ adminq; } ;
struct ice_pf {TYPE_4__ hw; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,struct ice_vsi_ctx*) ;
 struct ice_vsi_ctx* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (TYPE_4__*,int ,struct ice_vsi_ctx*,int *) ;
 int FUNC_4 (int ,char*,char*,int ,int ,int,int ) ;

int FUNC_5(struct ice_vsi *VAR_9, bool VAR_10, bool VAR_11)
{
 struct ice_vsi_ctx *VAR_12;
 struct device *VAR_13;
 struct ice_pf *VAR_14;
 int VAR_15;

 if (!VAR_9)
  return -VAR_0;

 VAR_14 = VAR_9->back;
 VAR_13 = &VAR_14->pdev->dev;
 VAR_12 = FUNC_2(VAR_13, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->info = VAR_9->info;

 if (VAR_10) {
  VAR_12->info.sec_flags |=
   VAR_7 <<
   VAR_6;
  VAR_12->info.sw_flags2 |= VAR_8;
 } else {
  VAR_12->info.sec_flags &=
   ~(VAR_7 <<
     VAR_6);
  VAR_12->info.sw_flags2 &= ~VAR_8;
 }

 if (!VAR_11)
  VAR_12->info.valid_sections =
   FUNC_0(VAR_4 |
        VAR_5);

 VAR_15 = FUNC_3(&VAR_14->hw, VAR_9->idx, VAR_12, ((void*)0));
 if (VAR_15) {
  FUNC_4(VAR_9->netdev, "%sabling VLAN pruning on VSI handle: %d, VSI HW ID: %d failed, err = %d, aq_err = %d\n",
      VAR_10 ? "En" : "Dis", VAR_9->idx, VAR_9->vsi_num, VAR_15,
      VAR_14->hw.adminq.sq_last_status);
  goto err_out;
 }

 VAR_9->info.sec_flags = VAR_12->info.sec_flags;
 VAR_9->info.sw_flags2 = VAR_12->info.sw_flags2;

 FUNC_1(VAR_13, VAR_12);
 return 0;

err_out:
 FUNC_1(VAR_13, VAR_12);
 return -VAR_1;
}
