
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ device_type; } ;
struct sas_rphy {TYPE_4__ identify; } ;
struct attribute_container {int dummy; } ;
struct TYPE_10__ {struct attribute_container ac; } ;
struct sas_internal {TYPE_3__ expander_attr_cont; } ;
struct device {TYPE_5__* parent; } ;
struct Scsi_Host {TYPE_6__* transportt; } ;
struct TYPE_14__ {int class; } ;
struct TYPE_8__ {int * class; } ;
struct TYPE_9__ {TYPE_1__ ac; } ;
struct TYPE_13__ {TYPE_2__ host_attrs; } ;
struct TYPE_12__ {int parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sas_rphy* FUNC_0 (struct device*) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 TYPE_7__ VAR_2 ;
 int FUNC_2 (struct device*) ;
 struct sas_internal* FUNC_3 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_4(struct attribute_container *VAR_3,
         struct device *VAR_4)
{
 struct Scsi_Host *VAR_5;
 struct sas_internal *VAR_6;
 struct sas_rphy *VAR_7;

 if (!FUNC_2(VAR_4))
  return 0;
 VAR_5 = FUNC_1(VAR_4->parent->parent);
 VAR_7 = FUNC_0(VAR_4);

 if (!VAR_5->transportt)
  return 0;
 if (VAR_5->transportt->host_attrs.ac.class !=
   &VAR_2.class)
  return 0;

 VAR_6 = FUNC_3(VAR_5->transportt);
 return &VAR_6->expander_attr_cont.ac == VAR_3 &&
  (VAR_7->identify.device_type == VAR_0 ||
   VAR_7->identify.device_type == VAR_1);
}
