
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* discipline; int flags; } ;
struct ccw_device {int dummy; } ;
struct TYPE_2__ {int (* freeze ) (struct dasd_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 struct dasd_device* FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct dasd_device*,int ) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct dasd_device*) ;

int FUNC_7(struct ccw_device *VAR_2)
{
 struct dasd_device *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);


 FUNC_5(VAR_0, &VAR_3->flags);

 if (VAR_3->discipline->freeze)
  VAR_3->discipline->freeze(VAR_3);


 FUNC_3(VAR_3, VAR_1);

 return FUNC_4(VAR_3);
}
