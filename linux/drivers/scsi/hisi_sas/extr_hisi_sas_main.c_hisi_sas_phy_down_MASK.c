
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {int (* notify_phy_event ) (struct asd_sas_phy*,int ) ;} ;
struct hisi_sas_port {int id; scalar_t__ port_attached; } ;
struct asd_sas_phy {int dummy; } ;
struct hisi_sas_phy {int phy_type; scalar_t__ in_reset; struct hisi_sas_port* port; struct asd_sas_phy sas_phy; } ;
struct hisi_hba {TYPE_1__* hw; int flags; struct device* dev; struct sas_ha_struct sha; struct hisi_sas_phy* phy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* get_wideport_bitmap ) (struct hisi_hba*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hisi_hba*,int) ;
 int FUNC_2 (struct hisi_sas_phy*) ;
 int FUNC_3 (struct asd_sas_phy*) ;
 int FUNC_4 (struct asd_sas_phy*) ;
 int FUNC_5 (struct asd_sas_phy*,int ) ;
 int FUNC_6 (struct hisi_hba*,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct hisi_hba *VAR_4, int VAR_5, int VAR_6)
{
 struct hisi_sas_phy *VAR_7 = &VAR_4->phy[VAR_5];
 struct asd_sas_phy *VAR_8 = &VAR_7->sas_phy;
 struct sas_ha_struct *VAR_9 = &VAR_4->sha;
 struct device *VAR_10 = VAR_4->dev;

 if (VAR_6) {

  FUNC_1(VAR_4, VAR_5);
  FUNC_3(VAR_8);
 } else {
  struct hisi_sas_port *VAR_11 = VAR_7->port;

  if (FUNC_7(VAR_0, &VAR_4->flags) ||
      VAR_7->in_reset) {
   FUNC_0(VAR_10, "ignore flutter phy%d down\n", VAR_5);
   return;
  }

  VAR_9->notify_phy_event(VAR_8, VAR_1);
  FUNC_4(VAR_8);

  if (VAR_11) {
   if (VAR_7->phy_type & VAR_2) {
    int VAR_12 = VAR_11->id;

    if (!VAR_4->hw->get_wideport_bitmap(VAR_4,
               VAR_12))
     VAR_11->port_attached = 0;
   } else if (VAR_7->phy_type & VAR_3)
    VAR_11->port_attached = 0;
  }
  FUNC_2(VAR_7);
 }
}
