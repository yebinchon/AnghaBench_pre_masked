
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sas_phy {int maximum_linkrate_hw; int maximum_linkrate; int minimum_linkrate_hw; int minimum_linkrate; int negotiated_linkrate; } ;
struct sas_identify_frame {int target_bits; int initiator_bits; int dev_type; } ;
struct sas_ha_struct {int (* notify_port_event ) (struct asd_sas_phy*,int ) ;int (* notify_phy_event ) (struct asd_sas_phy*,int ) ;} ;
struct TYPE_4__ {int target_port_protocols; int device_type; } ;
struct asd_sas_phy {int frame_rcvd_size; int linkrate; struct sas_phy* phy; } ;
struct mvs_phy {int att_dev_info; int phy_type; int frame_rcvd_size; TYPE_1__ identify; scalar_t__ frame_rcvd; int maximum_linkrate; int minimum_linkrate; int phy_attached; struct asd_sas_phy sas_phy; } ;
struct mvs_info {int id; struct sas_ha_struct* sas; TYPE_2__* chip; struct mvs_phy* phy; } ;
struct TYPE_6__ {int (* write_port_cfg_data ) (struct mvs_info*,int,int) ;int (* write_port_cfg_addr ) (struct mvs_info*,int,int ) ;int (* phy_max_link_rate ) () ;} ;
struct TYPE_5__ {int n_phy; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct asd_sas_phy*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct mvs_info*,int,int ) ;
 int FUNC_4 (struct mvs_info*,int,int) ;
 int FUNC_5 (struct asd_sas_phy*,int ) ;

__attribute__((used)) static void FUNC_6(struct mvs_info *VAR_10, int VAR_11)
{
 struct mvs_phy *VAR_12 = &VAR_10->phy[VAR_11];
 struct asd_sas_phy *VAR_13 = &VAR_12->sas_phy;
 struct sas_ha_struct *VAR_14;
 if (!VAR_12->phy_attached)
  return;

 if (!(VAR_12->att_dev_info & VAR_4)
  && VAR_12->phy_type & VAR_6) {
  return;
 }

 VAR_14 = VAR_10->sas;
 VAR_14->notify_phy_event(VAR_13, VAR_1);

 if (VAR_13->phy) {
  struct sas_phy *VAR_15 = VAR_13->phy;

  VAR_15->negotiated_linkrate = VAR_13->linkrate;
  VAR_15->minimum_linkrate = VAR_12->minimum_linkrate;
  VAR_15->minimum_linkrate_hw = VAR_8;
  VAR_15->maximum_linkrate = VAR_12->maximum_linkrate;
  VAR_15->maximum_linkrate_hw = VAR_0->phy_max_link_rate();
 }

 if (VAR_12->phy_type & VAR_6) {
  struct sas_identify_frame *VAR_16;

  VAR_16 = (struct sas_identify_frame *)VAR_12->frame_rcvd;
  VAR_16->dev_type = VAR_12->identify.device_type;
  VAR_16->initiator_bits = VAR_9;
  VAR_16->target_bits = VAR_12->identify.target_port_protocols;


  if (VAR_12->att_dev_info & VAR_5) {
   VAR_0->write_port_cfg_addr(VAR_10, VAR_11, VAR_2);
   VAR_0->write_port_cfg_data(VAR_10, VAR_11, 0x00);
  }
 } else if (VAR_12->phy_type & VAR_7) {

 }
 FUNC_0("phy %d byte dmaded.\n", VAR_11 + VAR_10->id * VAR_10->chip->n_phy);

 VAR_13->frame_rcvd_size = VAR_12->frame_rcvd_size;

 VAR_10->sas->notify_port_event(VAR_13,
       VAR_3);
}
