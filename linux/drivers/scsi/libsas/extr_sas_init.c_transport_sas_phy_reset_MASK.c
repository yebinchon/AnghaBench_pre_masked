
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
struct sas_phy {size_t number; TYPE_4__ dev; } ;
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
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct sas_rphy* FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (int ) ;
 int FUNC_3 (struct domain_device*) ;
 int FUNC_4 (struct domain_device*) ;
 struct domain_device* FUNC_5 (struct domain_device*,size_t) ;
 struct domain_device* FUNC_6 (struct sas_rphy*) ;
 int FUNC_7 (struct domain_device*,size_t,int,int *) ;
 scalar_t__ FUNC_8 (struct asd_sas_phy*) ;
 scalar_t__ FUNC_9 (struct sas_phy*) ;
 int FUNC_10 (struct asd_sas_phy*,int,int *) ;
 struct sas_internal* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct sas_phy *VAR_2, int VAR_3)
{
 enum phy_func VAR_4;

 if (VAR_3)
  VAR_4 = VAR_0;
 else
  VAR_4 = VAR_1;

 if (FUNC_9(VAR_2)) {
  struct Scsi_Host *VAR_5 = FUNC_2(VAR_2->dev.parent);
  struct sas_ha_struct *VAR_6 = FUNC_0(VAR_5);
  struct asd_sas_phy *VAR_7 = VAR_6->sas_phy[VAR_2->number];
  struct sas_internal *VAR_8 =
   FUNC_11(VAR_6->core.shost->transportt);

  if (!VAR_3 && FUNC_8(VAR_7) == 0)
   return 0;
  return VAR_8->dft->lldd_control_phy(VAR_7, VAR_4, ((void*)0));
 } else {
  struct sas_rphy *VAR_9 = FUNC_1(VAR_2->dev.parent);
  struct domain_device *VAR_10 = FUNC_6(VAR_9);
  struct domain_device *VAR_11 = FUNC_5(VAR_10, VAR_2->number);

  if (VAR_11 && !VAR_3) {
   FUNC_3(VAR_11);
   FUNC_4(VAR_11);
   return 0;
  } else
   return FUNC_7(VAR_10, VAR_2->number, VAR_4, ((void*)0));
 }
}
