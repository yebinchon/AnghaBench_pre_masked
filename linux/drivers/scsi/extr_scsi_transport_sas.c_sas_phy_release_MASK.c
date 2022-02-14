
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct sas_phy {TYPE_1__ dev; } ;
struct sas_internal {TYPE_2__* f; } ;
struct device {int parent; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_4__ {int (* phy_release ) (struct sas_phy*) ;} ;


 struct sas_phy* FUNC_0 (struct device*) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int FUNC_2 (struct sas_phy*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sas_phy*) ;
 struct sas_internal* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct sas_phy *VAR_1 = FUNC_0(VAR_0);
 struct Scsi_Host *VAR_2 = FUNC_1(VAR_1->dev.parent);
 struct sas_internal *VAR_3 = FUNC_5(VAR_2->transportt);

 if (VAR_3->f->phy_release)
  VAR_3->f->phy_release(VAR_1);
 FUNC_3(VAR_0->parent);
 FUNC_2(VAR_1);
}
