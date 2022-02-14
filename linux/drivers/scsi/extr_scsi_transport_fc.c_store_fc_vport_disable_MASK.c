
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_vport {int flags; scalar_t__ vport_state; } ;
struct fc_internal {TYPE_1__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* vport_disable ) (struct fc_vport*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct fc_vport*,int) ;
 struct fc_internal* FUNC_1 (int ) ;
 struct fc_vport* FUNC_2 (struct device*) ;
 struct Scsi_Host* FUNC_3 (struct fc_vport*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_6, struct device_attribute *VAR_7,
         const char *VAR_8,
      size_t VAR_9)
{
 struct fc_vport *VAR_10 = FUNC_2(VAR_6);
 struct Scsi_Host *VAR_11 = FUNC_3(VAR_10);
 struct fc_internal *VAR_12 = FUNC_1(VAR_11->transportt);
 int VAR_13;

 if (VAR_10->flags & (VAR_4 | VAR_3))
  return -VAR_1;

 if (*VAR_8 == '0') {
  if (VAR_10->vport_state != VAR_5)
   return -VAR_0;
 } else if (*VAR_8 == '1') {
  if (VAR_10->vport_state == VAR_5)
   return -VAR_0;
 } else
  return -VAR_2;

 VAR_13 = VAR_12->f->vport_disable(VAR_10, ((*VAR_8 == '0') ? 0 : 1));
 return VAR_13 ? VAR_13 : VAR_9;
}
