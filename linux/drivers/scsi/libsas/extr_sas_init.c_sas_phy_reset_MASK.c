
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sas_rphy {int dummy; } ;
struct TYPE_8__ {int parent; } ;
struct sas_phy {size_t number; TYPE_4__ dev; int enabled; } ;
struct sas_internal {TYPE_3__* dft; } ;
struct TYPE_6__ {TYPE_1__* shost; } ;
struct sas_ha_struct {TYPE_2__ core; struct asd_sas_phy** sas_phy; } ;
struct domain_device {int dummy; } ;
struct asd_sas_phy {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef enum phy_func { ____Placeholder_phy_func } phy_func ;
struct TYPE_7__ {int (* lldd_control_phy ) (struct asd_sas_phy*,int,int *) ;} ;
struct TYPE_5__ {int transportt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct sas_rphy* FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (int ) ;
 struct domain_device* FUNC_3 (struct sas_rphy*) ;
 int FUNC_4 (struct domain_device*,size_t,int,int *) ;
 scalar_t__ FUNC_5 (struct sas_phy*) ;
 int FUNC_6 (struct asd_sas_phy*,int,int *) ;
 struct sas_internal* FUNC_7 (int ) ;

int FUNC_8(struct sas_phy *VAR_3, int VAR_4)
{
 int VAR_5;
 enum phy_func VAR_6;

 if (!VAR_3->enabled)
  return -VAR_0;

 if (VAR_4)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;

 if (FUNC_5(VAR_3)) {
  struct Scsi_Host *VAR_7 = FUNC_2(VAR_3->dev.parent);
  struct sas_ha_struct *VAR_8 = FUNC_0(VAR_7);
  struct asd_sas_phy *VAR_9 = VAR_8->sas_phy[VAR_3->number];
  struct sas_internal *VAR_10 =
   FUNC_7(VAR_8->core.shost->transportt);

  VAR_5 = VAR_10->dft->lldd_control_phy(VAR_9, VAR_6, ((void*)0));
 } else {
  struct sas_rphy *VAR_11 = FUNC_1(VAR_3->dev.parent);
  struct domain_device *VAR_12 = FUNC_3(VAR_11);
  VAR_5 = FUNC_4(VAR_12, VAR_3->number, VAR_6, ((void*)0));
 }
 return VAR_5;
}
