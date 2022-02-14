
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct ice_link_status {int link_speed; int link_info; int an_info; int ext_info; int max_frame_size; int fec_info; int pacing; int lse_ena; void* phy_type_high; void* phy_type_low; int topo_media_conflict; } ;
struct TYPE_4__ {int media_type; int get_link_info; struct ice_link_status link_info; struct ice_link_status link_info_old; } ;
struct ice_fc_info {int current_mode; } ;
struct ice_port_info {TYPE_2__ phy; int lport; struct ice_fc_info fc; struct ice_hw* hw; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_get_link_status_data {int link_info; int an_info; int ext_info; int cfg; int topo_media_conflict; int max_frame_size; int phy_type_high; int phy_type_low; int link_speed; int member_0; } ;
struct ice_aqc_get_link_status {int cmd_flags; int lport_num; } ;
struct TYPE_3__ {struct ice_aqc_get_link_status get_link_status; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef int link_data ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_media_type { ____Placeholder_ice_media_type } ice_media_type ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,struct ice_aqc_get_link_status_data*,int,struct ice_sq_cd*) ;
 int VAR_14 ;
 int FUNC_2 (struct ice_hw*,int ,char*,int) ;
 int FUNC_3 (struct ice_aq_desc*,int ) ;
 int FUNC_4 (struct ice_port_info*) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

enum ice_status
FUNC_7(struct ice_port_info *VAR_15, bool VAR_16,
       struct ice_link_status *VAR_17, struct ice_sq_cd *VAR_18)
{
 struct ice_aqc_get_link_status_data VAR_19 = { 0 };
 struct ice_aqc_get_link_status *VAR_20;
 struct ice_link_status *VAR_21, *VAR_22;
 enum ice_media_type *VAR_23;
 struct ice_fc_info *VAR_24;
 bool VAR_25, VAR_26;
 struct ice_aq_desc VAR_27;
 enum ice_status VAR_28;
 struct ice_hw *VAR_29;
 u16 VAR_30;

 if (!VAR_15)
  return VAR_9;
 VAR_29 = VAR_15->hw;
 VAR_21 = &VAR_15->phy.link_info_old;
 VAR_23 = &VAR_15->phy.media_type;
 VAR_22 = &VAR_15->phy.link_info;
 VAR_24 = &VAR_15->fc;

 FUNC_3(&VAR_27, VAR_14);
 VAR_30 = (VAR_16) ? VAR_6 : VAR_5;
 VAR_20 = &VAR_27.params.get_link_status;
 VAR_20->cmd_flags = FUNC_0(VAR_30);
 VAR_20->lport_num = VAR_15->lport;

 VAR_28 = FUNC_1(VAR_29, &VAR_27, &VAR_19, sizeof(VAR_19), VAR_18);

 if (VAR_28)
  return VAR_28;


 *VAR_21 = *VAR_22;


 VAR_22->link_speed = FUNC_5(VAR_19.link_speed);
 VAR_22->phy_type_low = FUNC_6(VAR_19.phy_type_low);
 VAR_22->phy_type_high = FUNC_6(VAR_19.phy_type_high);
 *VAR_23 = FUNC_4(VAR_15);
 VAR_22->link_info = VAR_19.link_info;
 VAR_22->an_info = VAR_19.an_info;
 VAR_22->ext_info = VAR_19.ext_info;
 VAR_22->max_frame_size = FUNC_5(VAR_19.max_frame_size);
 VAR_22->fec_info = VAR_19.cfg & VAR_2;
 VAR_22->topo_media_conflict = VAR_19.topo_media_conflict;
 VAR_22->pacing = VAR_19.cfg & (VAR_0 |
          VAR_1);


 VAR_25 = !!(VAR_19.an_info & VAR_4);
 VAR_26 = !!(VAR_19.an_info & VAR_3);
 if (VAR_25 && VAR_26)
  VAR_24->current_mode = VAR_10;
 else if (VAR_25)
  VAR_24->current_mode = VAR_13;
 else if (VAR_26)
  VAR_24->current_mode = VAR_12;
 else
  VAR_24->current_mode = VAR_11;

 VAR_22->lse_ena = !!(VAR_20->cmd_flags & FUNC_0(VAR_7));

 FUNC_2(VAR_29, VAR_8, "link_speed = 0x%x\n", VAR_22->link_speed);
 FUNC_2(VAR_29, VAR_8, "phy_type_low = 0x%llx\n",
    (unsigned long long)VAR_22->phy_type_low);
 FUNC_2(VAR_29, VAR_8, "phy_type_high = 0x%llx\n",
    (unsigned long long)VAR_22->phy_type_high);
 FUNC_2(VAR_29, VAR_8, "media_type = 0x%x\n", *VAR_23);
 FUNC_2(VAR_29, VAR_8, "link_info = 0x%x\n", VAR_22->link_info);
 FUNC_2(VAR_29, VAR_8, "an_info = 0x%x\n", VAR_22->an_info);
 FUNC_2(VAR_29, VAR_8, "ext_info = 0x%x\n", VAR_22->ext_info);
 FUNC_2(VAR_29, VAR_8, "lse_ena = 0x%x\n", VAR_22->lse_ena);
 FUNC_2(VAR_29, VAR_8, "max_frame = 0x%x\n", VAR_22->max_frame_size);
 FUNC_2(VAR_29, VAR_8, "pacing = 0x%x\n", VAR_22->pacing);


 if (VAR_17)
  *VAR_17 = *VAR_22;


 VAR_15->phy.get_link_info = 0;

 return 0;
}
