
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct attribute_container {int dummy; } ;
struct TYPE_6__ {struct attribute_container ac; } ;
struct sas_internal {TYPE_1__ phy_attr_cont; } ;
struct device {int parent; } ;
struct Scsi_Host {TYPE_4__* transportt; } ;
struct TYPE_10__ {int class; } ;
struct TYPE_7__ {int * class; } ;
struct TYPE_8__ {TYPE_2__ ac; } ;
struct TYPE_9__ {TYPE_3__ host_attrs; } ;


 struct Scsi_Host* FUNC_0 (int ) ;
 TYPE_5__ VAR_0 ;
 int FUNC_1 (struct device*) ;
 struct sas_internal* FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct attribute_container *VAR_1, struct device *VAR_2)
{
 struct Scsi_Host *VAR_3;
 struct sas_internal *VAR_4;

 if (!FUNC_1(VAR_2))
  return 0;
 VAR_3 = FUNC_0(VAR_2->parent);

 if (!VAR_3->transportt)
  return 0;
 if (VAR_3->transportt->host_attrs.ac.class !=
   &VAR_0.class)
  return 0;

 VAR_4 = FUNC_2(VAR_3->transportt);
 return &VAR_4->phy_attr_cont.ac == VAR_1;
}
