
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {int parent; } ;
struct sas_rphy {TYPE_2__ dev; } ;
struct TYPE_6__ {int parent; } ;
struct sas_phy {TYPE_3__ dev; } ;
struct sas_internal {TYPE_1__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* get_enclosure_identifier ) (struct sas_rphy*,scalar_t__*) ;} ;


 struct sas_phy* FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned long long) ;
 int FUNC_3 (struct sas_rphy*,scalar_t__*) ;
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
 u64 VAR_7;
 int VAR_8;

 VAR_8 = VAR_6->f->get_enclosure_identifier(VAR_3, &VAR_7);
 if (VAR_8)
  return VAR_8;
 return FUNC_2(VAR_2, "0x%llx\n", (unsigned long long)VAR_7);
}
