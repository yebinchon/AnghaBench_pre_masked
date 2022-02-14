
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sas_ha_struct {int (* notify_port_event ) (struct asd_sas_phy*,int ) ;} ;
struct asd_sas_phy {TYPE_1__* phy; struct asd_sas_port* port; } ;
struct hisi_sas_phy {struct asd_sas_phy sas_phy; } ;
struct hisi_hba {int n_phy; struct hisi_sas_phy* phy; struct sas_ha_struct sha; } ;
struct domain_device {int dev_type; } ;
struct asd_sas_port {struct domain_device* port_dev; } ;
struct TYPE_2__ {int enabled; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hisi_hba*,int,int ) ;
 int FUNC_3 (struct asd_sas_phy*,int ) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_1, u32 VAR_2)
{
 struct sas_ha_struct *VAR_3 = &VAR_1->sha;
 struct asd_sas_port *VAR_4 = ((void*)0);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->n_phy; VAR_5++) {
  struct hisi_sas_phy *VAR_6 = &VAR_1->phy[VAR_5];
  struct asd_sas_phy *VAR_7 = &VAR_6->sas_phy;
  struct asd_sas_port *VAR_8 = VAR_7->port;
  bool VAR_9 = !!(VAR_4 != VAR_8);

  if (!VAR_7->phy->enabled)
   continue;


  if (VAR_2 & FUNC_0(VAR_5)) {
   if (VAR_9 && VAR_8 && VAR_8->port_dev) {
    struct domain_device *VAR_10 = VAR_8->port_dev;

    VAR_4 = VAR_8;

    if (FUNC_1(VAR_10->dev_type))
     VAR_3->notify_port_event(VAR_7,
       VAR_0);
   }
  } else {
   FUNC_2(VAR_1, VAR_5, 0);
  }

 }
}
