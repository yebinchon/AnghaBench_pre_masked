
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
typedef int tmp ;
struct i40e_link_status {int phy_type; int link_speed; int an_info; int fec_info; int loopback; int pacing; int crc_enable; int lse_enable; int max_frame_size; int ext_info; int link_info; } ;
struct TYPE_10__ {int phy_types; int get_link_info; int media_type; struct i40e_link_status link_info_old; struct i40e_link_status link_info; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {int fw_maj_ver; int fw_min_ver; } ;
struct TYPE_7__ {int current_mode; } ;
struct i40e_hw {int flags; TYPE_5__ phy; TYPE_4__ mac; TYPE_3__ aq; TYPE_2__ fc; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_get_link_status {int command_flags; int an_info; int config; int loopback; scalar_t__ link_type_ext; int link_type; int max_frame_size; int ext_info; int link_info; scalar_t__ link_speed; scalar_t__ phy_type; } ;
struct TYPE_6__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef scalar_t__ i40e_status ;
typedef enum i40e_aq_phy_type { ____Placeholder_i40e_aq_phy_type } i40e_aq_phy_type ;
typedef enum i40e_aq_link_speed { ____Placeholder_i40e_aq_link_speed } i40e_aq_link_speed ;
typedef int __le32 ;


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
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int) ;

i40e_status FUNC_7(struct i40e_hw *VAR_19,
    bool VAR_20, struct i40e_link_status *VAR_21,
    struct i40e_asq_cmd_details *VAR_22)
{
 struct i40e_aq_desc VAR_23;
 struct i40e_aqc_get_link_status *VAR_24 =
  (struct i40e_aqc_get_link_status *)&VAR_23.params.raw;
 struct i40e_link_status *VAR_25 = &VAR_19->phy.link_info;
 i40e_status VAR_26;
 bool VAR_27, VAR_28;
 u16 VAR_29;

 FUNC_2(&VAR_23, VAR_18);

 if (VAR_20)
  VAR_29 = VAR_8;
 else
  VAR_29 = VAR_7;
 VAR_24->command_flags = FUNC_0(VAR_29);

 VAR_26 = FUNC_1(VAR_19, &VAR_23, ((void*)0), 0, VAR_22);

 if (VAR_26)
  goto aq_get_link_info_exit;


 VAR_19->phy.link_info_old = *VAR_25;


 VAR_25->phy_type = (enum i40e_aq_phy_type)VAR_24->phy_type;
 VAR_19->phy.media_type = FUNC_3(VAR_19);
 VAR_25->link_speed = (enum i40e_aq_link_speed)VAR_24->link_speed;
 VAR_25->link_info = VAR_24->link_info;
 VAR_25->an_info = VAR_24->an_info;
 VAR_25->fec_info = VAR_24->config & (VAR_1 |
       VAR_2);
 VAR_25->ext_info = VAR_24->ext_info;
 VAR_25->loopback = VAR_24->loopback & VAR_6;
 VAR_25->max_frame_size = FUNC_4(VAR_24->max_frame_size);
 VAR_25->pacing = VAR_24->config & VAR_3;


 VAR_27 = !!(VAR_24->an_info & VAR_5);
 VAR_28 = !!(VAR_24->an_info & VAR_4);
 if (VAR_27 & VAR_28)
  VAR_19->fc.current_mode = VAR_10;
 else if (VAR_27)
  VAR_19->fc.current_mode = VAR_13;
 else if (VAR_28)
  VAR_19->fc.current_mode = VAR_12;
 else
  VAR_19->fc.current_mode = VAR_11;

 if (VAR_24->config & VAR_0)
  VAR_25->crc_enable = 1;
 else
  VAR_25->crc_enable = 0;

 if (VAR_24->command_flags & FUNC_0(VAR_9))
  VAR_25->lse_enable = 1;
 else
  VAR_25->lse_enable = 0;

 if ((VAR_19->mac.type == VAR_16) &&
     (VAR_19->aq.fw_maj_ver < 4 || (VAR_19->aq.fw_maj_ver == 4 &&
      VAR_19->aq.fw_min_ver < 40)) && VAR_25->phy_type == 0xE)
  VAR_25->phy_type = VAR_17;

 if (VAR_19->flags & VAR_14 &&
     VAR_19->mac.type != VAR_15) {
  __le32 VAR_30;

  FUNC_6(&VAR_30, VAR_24->link_type, sizeof(VAR_30));
  VAR_19->phy.phy_types = FUNC_5(VAR_30);
  VAR_19->phy.phy_types |= ((u64)VAR_24->link_type_ext << 32);
 }


 if (VAR_21)
  *VAR_21 = *VAR_25;


 VAR_19->phy.get_link_info = 0;

aq_get_link_info_exit:
 return VAR_26;
}
