
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct sas_phy {int enabled; TYPE_1__ dev; } ;
struct sas_internal {TYPE_2__* f; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* phy_enable ) (struct sas_phy*,int) ;} ;


 struct Scsi_Host* FUNC_0 (int ) ;
 int FUNC_1 (struct sas_phy*,int) ;
 struct sas_internal* FUNC_2 (int ) ;
 struct sas_phy* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  size_t VAR_1, int VAR_2)
{
 struct sas_phy *VAR_3 = FUNC_3(VAR_0);
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_3->dev.parent);
 struct sas_internal *VAR_5 = FUNC_2(VAR_4->transportt);
 int VAR_6;

 VAR_6 = VAR_5->f->phy_enable(VAR_3, VAR_2);
 if (VAR_6)
  return VAR_6;
 VAR_3->enabled = VAR_2;
 return VAR_1;
}
