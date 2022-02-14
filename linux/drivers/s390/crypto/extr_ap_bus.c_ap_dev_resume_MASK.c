
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ap_device {TYPE_1__* drv; } ;
struct TYPE_2__ {int (* resume ) (struct ap_device*) ;} ;


 int FUNC_0 (struct ap_device*) ;
 struct ap_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct ap_device *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->drv && VAR_1->drv->resume)
  VAR_1->drv->resume(VAR_1);
 return 0;
}
