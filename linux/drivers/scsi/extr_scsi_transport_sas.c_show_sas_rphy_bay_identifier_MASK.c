
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct sas_rphy {TYPE_1__ dev; } ;
struct TYPE_5__ {int parent; } ;
struct sas_phy {TYPE_2__ dev; } ;
struct sas_internal {TYPE_3__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_6__ {int (* get_bay_identifier ) (struct sas_rphy*) ;} ;


 struct sas_phy* FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct sas_rphy*) ;
 struct sas_internal* FUNC_4 (int ) ;
 struct sas_rphy* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct sas_rphy *VAR_3 = FUNC_5(VAR_0);
 struct sas_phy *VAR_4 = FUNC_0(VAR_3->dev.parent);
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_4->dev.parent);
 struct sas_internal *VAR_6 = FUNC_4(VAR_5->transportt);
 int VAR_7;

 VAR_7 = VAR_6->f->get_bay_identifier(VAR_3);
 if (VAR_7 < 0)
  return VAR_7;
 return FUNC_2(VAR_2, "%d\n", VAR_7);
}
