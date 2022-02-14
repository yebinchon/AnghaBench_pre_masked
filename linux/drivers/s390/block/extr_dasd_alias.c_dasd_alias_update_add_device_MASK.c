
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_eckd_private {TYPE_1__* lcu; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_device*) ;

int FUNC_1(struct dasd_device *VAR_1)
{
 struct dasd_eckd_private *VAR_2 = VAR_1->private;

 VAR_2->lcu->flags |= VAR_0;
 return FUNC_0(VAR_1);
}
