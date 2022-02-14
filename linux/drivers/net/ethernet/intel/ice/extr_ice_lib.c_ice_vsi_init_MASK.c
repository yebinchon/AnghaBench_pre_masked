
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int valid_sections; int sec_flags; int sw_id; int sw_flags; } ;
struct ice_vsi_ctx {int vsi_num; TYPE_5__ info; int vf_num; int flags; } ;
struct ice_vsi {int type; size_t vf_id; int vsi_num; TYPE_5__ info; int idx; TYPE_3__* port_info; TYPE_2__* vsw; struct ice_pf* back; } ;
struct TYPE_7__ {int vf_base_id; } ;
struct ice_hw {TYPE_1__ func_caps; } ;
struct ice_pf {TYPE_6__* pdev; TYPE_4__* vf; int flags; struct ice_hw hw; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_10__ {scalar_t__ spoofchk; } ;
struct TYPE_9__ {int sw_id; } ;
struct TYPE_8__ {scalar_t__ bridge_mode; } ;


 scalar_t__ VAR_0 ;
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



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct ice_vsi_ctx*) ;
 struct ice_vsi_ctx* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct ice_hw*,int ,struct ice_vsi_ctx*,int *) ;
 int FUNC_5 (struct ice_vsi_ctx*) ;
 int FUNC_6 (struct ice_vsi_ctx*,struct ice_vsi*) ;
 int FUNC_7 (struct ice_vsi*,struct ice_vsi_ctx*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct ice_vsi *VAR_12)
{
 struct ice_pf *VAR_13 = VAR_12->back;
 struct ice_hw *VAR_14 = &VAR_13->hw;
 struct ice_vsi_ctx *VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_3(&VAR_13->pdev->dev, sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_3;

 VAR_15->info = VAR_12->info;
 switch (VAR_12->type) {
 case 130:

 case 129:
  VAR_15->flags = VAR_9;
  break;
 case 128:
  VAR_15->flags = VAR_10;

  VAR_15->vf_num = VAR_12->vf_id + VAR_14->func_caps.vf_base_id;
  break;
 default:
  return -VAR_2;
 }

 FUNC_5(VAR_15);

 if (VAR_12->vsw->bridge_mode == VAR_0)
  VAR_15->info.sw_flags |= VAR_8;


 if (FUNC_8(VAR_11, VAR_13->flags))
  FUNC_6(VAR_15, VAR_12);

 VAR_15->info.sw_id = VAR_12->port_info->sw_id;
 FUNC_7(VAR_12, VAR_15);


 if (VAR_12->type == 128 && VAR_13->vf[VAR_12->vf_id].spoofchk) {
  VAR_15->info.valid_sections |=
   FUNC_0(VAR_5);
  VAR_15->info.sec_flags |=
   VAR_7;
 }


 if (VAR_12->type == 129) {
  VAR_15->info.sec_flags |= VAR_6;
  VAR_15->info.valid_sections |=
   FUNC_0(VAR_5);
 }

 VAR_16 = FUNC_4(VAR_14, VAR_12->idx, VAR_15, ((void*)0));
 if (VAR_16) {
  FUNC_1(&VAR_13->pdev->dev,
   "Add VSI failed, err %d\n", VAR_16);
  return -VAR_1;
 }


 VAR_12->info = VAR_15->info;


 VAR_12->vsi_num = VAR_15->vsi_num;

 FUNC_2(&VAR_13->pdev->dev, VAR_15);
 return VAR_16;
}
