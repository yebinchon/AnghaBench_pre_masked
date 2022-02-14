
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {TYPE_2__* base_discipline; TYPE_1__* discipline; } ;
struct TYPE_4__ {int owner; } ;
struct TYPE_3__ {int owner; int (* uncheck_device ) (struct dasd_device*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dasd_device*) ;

void FUNC_2(struct dasd_device *VAR_0)
{

 if (VAR_0->discipline) {
  if (VAR_0->discipline->uncheck_device)
   VAR_0->discipline->uncheck_device(VAR_0);
  FUNC_0(VAR_0->discipline->owner);
  VAR_0->discipline = ((void*)0);
 }
 if (VAR_0->base_discipline) {
  FUNC_0(VAR_0->base_discipline->owner);
  VAR_0->base_discipline = ((void*)0);
 }
}
