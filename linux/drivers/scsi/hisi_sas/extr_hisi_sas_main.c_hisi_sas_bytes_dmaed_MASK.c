
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_phy {scalar_t__ minimum_linkrate; scalar_t__ maximum_linkrate; int maximum_linkrate_hw; int minimum_linkrate_hw; int negotiated_linkrate; } ;
struct sas_identify_frame {int target_bits; int initiator_bits; int dev_type; } ;
struct sas_ha_struct {int (* notify_port_event ) (struct asd_sas_phy*,int ) ;int (* notify_phy_event ) (struct asd_sas_phy*,int ) ;} ;
struct TYPE_4__ {int target_port_protocols; int device_type; } ;
struct asd_sas_phy {int frame_rcvd_size; int linkrate; struct sas_phy* phy; } ;
struct hisi_sas_phy {scalar_t__ minimum_linkrate; scalar_t__ maximum_linkrate; int phy_type; int frame_rcvd_size; TYPE_2__ identify; scalar_t__ frame_rcvd; int phy_attached; struct asd_sas_phy sas_phy; } ;
struct hisi_hba {TYPE_1__* hw; struct sas_ha_struct sha; struct hisi_sas_phy* phy; } ;
struct TYPE_3__ {int (* phy_get_max_linkrate ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct asd_sas_phy*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct asd_sas_phy*,int ) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_7, int VAR_8)
{
 struct hisi_sas_phy *VAR_9 = &VAR_7->phy[VAR_8];
 struct asd_sas_phy *VAR_10 = &VAR_9->sas_phy;
 struct sas_ha_struct *VAR_11;

 if (!VAR_9->phy_attached)
  return;

 VAR_11 = &VAR_7->sha;
 VAR_11->notify_phy_event(VAR_10, VAR_0);

 if (VAR_10->phy) {
  struct sas_phy *VAR_12 = VAR_10->phy;

  VAR_12->negotiated_linkrate = VAR_10->linkrate;
  VAR_12->minimum_linkrate_hw = VAR_4;
  VAR_12->maximum_linkrate_hw =
   VAR_7->hw->phy_get_max_linkrate();
  if (VAR_12->minimum_linkrate == VAR_5)
   VAR_12->minimum_linkrate = VAR_9->minimum_linkrate;

  if (VAR_12->maximum_linkrate == VAR_5)
   VAR_12->maximum_linkrate = VAR_9->maximum_linkrate;
 }

 if (VAR_9->phy_type & VAR_2) {
  struct sas_identify_frame *VAR_13;

  VAR_13 = (struct sas_identify_frame *)VAR_9->frame_rcvd;
  VAR_13->dev_type = VAR_9->identify.device_type;
  VAR_13->initiator_bits = VAR_6;
  VAR_13->target_bits = VAR_9->identify.target_port_protocols;
 } else if (VAR_9->phy_type & VAR_3) {

 }

 VAR_10->frame_rcvd_size = VAR_9->frame_rcvd_size;
 VAR_11->notify_port_event(VAR_10, VAR_1);
}
