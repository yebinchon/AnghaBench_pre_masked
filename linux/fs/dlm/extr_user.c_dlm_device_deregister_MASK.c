
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct dlm_ls {TYPE_1__ ls_device; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(struct dlm_ls *VAR_0)
{



 if (!VAR_0->ls_device.name)
  return 0;

 FUNC_1(&VAR_0->ls_device);
 FUNC_0(VAR_0->ls_device.name);
 return 0;
}
