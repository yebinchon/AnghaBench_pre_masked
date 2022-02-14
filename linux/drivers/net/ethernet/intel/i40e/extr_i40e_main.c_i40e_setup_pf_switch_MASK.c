
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef void* u16 ;
struct i40e_vsi {int dummy; } ;
struct TYPE_18__ {int an_info; } ;
struct TYPE_19__ {TYPE_5__ link_info; } ;
struct TYPE_14__ {scalar_t__ asq_last_status; } ;
struct TYPE_13__ {scalar_t__ pf_id; TYPE_6__ phy; TYPE_1__ aq; } ;
struct i40e_pf {int flags; size_t lan_vsi; size_t lan_veb; int fc_autoneg_status; TYPE_10__ hw; TYPE_4__* pdev; TYPE_7__** vsi; int main_vsi_seid; void* mac_seid; TYPE_2__** veb; void* last_sw_conf_valid_flags; void* last_sw_conf_flags; } ;
struct TYPE_16__ {scalar_t__ enabled_tc; } ;
struct TYPE_20__ {int seid; TYPE_3__ tc_config; } ;
struct TYPE_17__ {int dev; } ;
struct TYPE_15__ {void* seid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_10__*,void*,void*,int ,int *) ;
 int FUNC_2 (TYPE_10__*,scalar_t__) ;
 int FUNC_3 (struct i40e_pf*) ;
 int FUNC_4 (struct i40e_pf*) ;
 int FUNC_5 (struct i40e_pf*) ;
 int FUNC_6 (struct i40e_pf*,int) ;
 int FUNC_7 (struct i40e_pf*) ;
 int FUNC_8 (struct i40e_pf*) ;
 int FUNC_9 (struct i40e_pf*) ;
 int FUNC_10 (struct i40e_pf*) ;
 int FUNC_11 (struct i40e_pf*) ;
 int FUNC_12 (TYPE_10__*,int) ;
 int FUNC_13 (struct i40e_pf*) ;
 int FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (TYPE_7__*,scalar_t__) ;
 struct i40e_vsi* FUNC_16 (TYPE_7__*) ;
 struct i40e_vsi* FUNC_17 (struct i40e_pf*,int ,void*,int ) ;

__attribute__((used)) static int FUNC_18(struct i40e_pf *VAR_9, bool VAR_10)
{
 u16 VAR_11 = 0;
 int VAR_12;


 VAR_12 = FUNC_6(VAR_9, 0);
 if (VAR_12) {
  FUNC_0(&VAR_9->pdev->dev,
    "couldn't fetch switch config, err %s aq_err %s\n",
    FUNC_12(&VAR_9->hw, VAR_12),
    FUNC_2(&VAR_9->hw, VAR_9->hw.aq.asq_last_status));
  return VAR_12;
 }
 FUNC_9(VAR_9);







 if ((VAR_9->hw.pf_id == 0) &&
     !(VAR_9->flags & VAR_5)) {
  VAR_11 = VAR_3;
  VAR_9->last_sw_conf_flags = VAR_11;
 }

 if (VAR_9->hw.pf_id == 0) {
  u16 VAR_13;

  VAR_13 = VAR_3;
  VAR_12 = FUNC_1(&VAR_9->hw, VAR_11, VAR_13, 0,
      ((void*)0));
  if (VAR_12 && VAR_9->hw.aq.asq_last_status != VAR_2) {
   FUNC_0(&VAR_9->pdev->dev,
     "couldn't set switch config bits, err %s aq_err %s\n",
     FUNC_12(&VAR_9->hw, VAR_12),
     FUNC_2(&VAR_9->hw,
          VAR_9->hw.aq.asq_last_status));

  }
  VAR_9->last_sw_conf_valid_flags = VAR_13;
 }


 if (VAR_9->lan_vsi == VAR_7 || VAR_10) {
  struct i40e_vsi *VAR_14 = ((void*)0);
  u16 VAR_15;




  if (VAR_9->lan_veb < VAR_6 && VAR_9->veb[VAR_9->lan_veb])
   VAR_15 = VAR_9->veb[VAR_9->lan_veb]->seid;
  else
   VAR_15 = VAR_9->mac_seid;
  if (VAR_9->lan_vsi == VAR_7)
   VAR_14 = FUNC_17(VAR_9, VAR_8, VAR_15, 0);
  else if (VAR_10)
   VAR_14 = FUNC_16(VAR_9->vsi[VAR_9->lan_vsi]);
  if (!VAR_14) {
   FUNC_0(&VAR_9->pdev->dev, "setup of MAIN VSI failed\n");
   FUNC_3(VAR_9);
   FUNC_5(VAR_9);
   return -VAR_0;
  }
 } else {

  u8 VAR_16 = VAR_9->vsi[VAR_9->lan_vsi]->tc_config.enabled_tc;

  VAR_9->vsi[VAR_9->lan_vsi]->tc_config.enabled_tc = 0;
  VAR_9->vsi[VAR_9->lan_vsi]->seid = VAR_9->main_vsi_seid;
  FUNC_15(VAR_9->vsi[VAR_9->lan_vsi], VAR_16);
 }
 FUNC_14(VAR_9->vsi[VAR_9->lan_vsi]);

 FUNC_4(VAR_9);


 VAR_12 = FUNC_11(VAR_9);
 if (VAR_12) {
  FUNC_0(&VAR_9->pdev->dev, "setup_pf_filter_control failed: %d\n",
    VAR_12);

 }




 if ((VAR_9->flags & VAR_4))
  FUNC_8(VAR_9);


 FUNC_7(VAR_9);


 VAR_9->fc_autoneg_status = ((VAR_9->hw.phy.link_info.an_info &
      VAR_1) ? 1 : 0);

 FUNC_10(VAR_9);


 FUNC_13(VAR_9);

 return VAR_12;
}
