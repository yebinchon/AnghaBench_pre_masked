
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_4__ {int modes_supported; int ngpio_pingroups; int gpio_pingroups; void* nfunctions; void* functions; void* ngroups; void* groups; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (struct platform_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 int VAR_5;

 VAR_3.groups = VAR_2;
 VAR_3.ngroups = FUNC_0(VAR_2);
 VAR_3.functions = VAR_1;
 VAR_3.nfunctions = FUNC_0(VAR_1);

 FUNC_1(&VAR_3, VAR_0);
 FUNC_2(VAR_3.gpio_pingroups,
   VAR_3.ngpio_pingroups, VAR_0);

 VAR_3.modes_supported = 0;

 VAR_5 = FUNC_3(VAR_4, &VAR_3);
 if (VAR_5)
  return VAR_5;

 return 0;
}
