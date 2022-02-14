
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fc_vport {int dummy; } ;
struct attribute_container {int dummy; } ;
struct TYPE_6__ {struct attribute_container ac; } ;
struct fc_internal {TYPE_1__ vport_attr_cont; } ;
struct device {int dummy; } ;
struct Scsi_Host {TYPE_4__* transportt; } ;
struct TYPE_10__ {int class; } ;
struct TYPE_7__ {int * class; } ;
struct TYPE_8__ {TYPE_2__ ac; } ;
struct TYPE_9__ {TYPE_3__ host_attrs; } ;


 struct fc_vport* FUNC_0 (struct device*) ;
 TYPE_5__ VAR_0 ;
 int FUNC_1 (struct device*) ;
 struct fc_internal* FUNC_2 (TYPE_4__*) ;
 struct Scsi_Host* FUNC_3 (struct fc_vport*) ;

__attribute__((used)) static int FUNC_4(struct attribute_container *VAR_1,
       struct device *VAR_2)
{
 struct fc_vport *VAR_3;
 struct Scsi_Host *VAR_4;
 struct fc_internal *VAR_5;

 if (!FUNC_1(VAR_2))
  return 0;
 VAR_3 = FUNC_0(VAR_2);

 VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4->transportt || VAR_4->transportt->host_attrs.ac.class
     != &VAR_0.class)
  return 0;

 VAR_5 = FUNC_2(VAR_4->transportt);
 return &VAR_5->vport_attr_cont.ac == VAR_1;
}
