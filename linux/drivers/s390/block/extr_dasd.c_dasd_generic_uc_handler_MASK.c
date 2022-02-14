
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irb {int dummy; } ;
struct dasd_device {scalar_t__ state; scalar_t__ target; TYPE_1__* discipline; int flags; } ;
struct ccw_device {int dummy; } ;
typedef enum uc_todo { ____Placeholder_uc_todo } uc_todo ;
struct TYPE_2__ {int (* check_for_device_change ) (struct dasd_device*,int *,struct irb*) ;int (* dump_sense_dbf ) (struct dasd_device*,struct irb*,char*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int VAR_1 ;
 struct dasd_device* FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*,struct irb*,char*) ;
 int FUNC_4 (struct dasd_device*,int *,struct irb*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

enum uc_todo FUNC_6(struct ccw_device *VAR_2, struct irb *VAR_3)
{
 struct dasd_device *VAR_4;

 VAR_4 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_4))
  goto out;
 if (FUNC_5(VAR_0, &VAR_4->flags) ||
    VAR_4->state != VAR_4->target ||
    !VAR_4->discipline->check_for_device_change){
  FUNC_2(VAR_4);
  goto out;
 }
 if (VAR_4->discipline->dump_sense_dbf)
  VAR_4->discipline->dump_sense_dbf(VAR_4, VAR_3, "uc");
 VAR_4->discipline->check_for_device_change(VAR_4, ((void*)0), VAR_3);
 FUNC_2(VAR_4);
out:
 return VAR_1;
}
