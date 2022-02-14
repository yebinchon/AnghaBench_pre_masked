
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_rport {int dummy; } ;
struct srp_internal {TYPE_1__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* rport_delete ) (struct srp_rport*) ;} ;


 size_t VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct srp_rport*) ;
 struct srp_internal* FUNC_2 (int ) ;
 struct srp_rport* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct srp_rport *VAR_5 = FUNC_3(VAR_1);
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_1);
 struct srp_internal *VAR_7 = FUNC_2(VAR_6->transportt);

 if (VAR_7->f->rport_delete) {
  VAR_7->f->rport_delete(VAR_5);
  return VAR_4;
 } else {
  return -VAR_0;
 }
}
