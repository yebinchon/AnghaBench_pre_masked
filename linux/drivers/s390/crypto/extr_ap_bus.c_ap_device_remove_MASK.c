
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct ap_driver {int (* remove ) (struct ap_device*) ;} ;
struct ap_device {struct ap_driver* drv; } ;
struct TYPE_6__ {int list; } ;
struct TYPE_5__ {int list; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ap_device*) ;
 TYPE_2__* FUNC_8 (struct device*) ;
 struct ap_device* FUNC_9 (struct device*) ;
 TYPE_1__* FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_1)
{
 struct ap_device *VAR_2 = FUNC_9(VAR_1);
 struct ap_driver *VAR_3 = VAR_2->drv;


 if (FUNC_3(VAR_1))
  FUNC_0(FUNC_10(VAR_1));


 if (VAR_3->remove)
  VAR_3->remove(VAR_2);


 if (FUNC_3(VAR_1))
  FUNC_1(FUNC_10(VAR_1));


 FUNC_5(&VAR_0);
 if (FUNC_2(VAR_1))
  FUNC_4(&FUNC_8(VAR_1)->list);
 else
  FUNC_4(&FUNC_10(VAR_1)->list);
 FUNC_6(&VAR_0);

 return 0;
}
