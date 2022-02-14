
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {TYPE_1__* transport; } ;
struct se_cmd {scalar_t__ sam_task_attr; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_2__ {int transport_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static sense_reason_t
FUNC_1(struct se_cmd *VAR_3)
{
 struct se_device *VAR_4 = VAR_3->se_dev;





 if (VAR_4->transport->transport_flags & VAR_2)
  return 0;

 if (VAR_3->sam_task_attr == VAR_0) {
  FUNC_0("SAM Task Attribute ACA"
   " emulation is not supported\n");
  return VAR_1;
 }

 return 0;
}
