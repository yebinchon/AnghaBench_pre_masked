
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct comedi_device {int mutex; scalar_t__ use_count; TYPE_1__* driver; scalar_t__ attached; } ;
struct TYPE_2__ {struct module* module; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0)
{
 struct module *VAR_1 = ((void*)0);

 if (!VAR_0)
  return;
 FUNC_2(&VAR_0->mutex);
 if (VAR_0->attached)
  VAR_1 = VAR_0->driver->module;
 FUNC_0(VAR_0);
 if (VAR_1 && VAR_0->use_count)
  FUNC_1(VAR_1);
 FUNC_3(&VAR_0->mutex);
}
