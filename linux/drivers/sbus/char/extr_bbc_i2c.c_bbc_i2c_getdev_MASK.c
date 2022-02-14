
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct bbc_i2c_bus {TYPE_1__* devs; } ;
struct TYPE_2__ {struct platform_device* device; } ;


 int VAR_0 ;

struct platform_device *FUNC_0(struct bbc_i2c_bus *VAR_1, int VAR_2)
{
 struct platform_device *VAR_3 = ((void*)0);
 int VAR_4 = 0, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!(VAR_3 = VAR_1->devs[VAR_5].device))
   break;
  if (VAR_4 == VAR_2)
   goto out;
  VAR_3 = ((void*)0);
  VAR_4++;
 }

out:
 if (VAR_4 == VAR_2)
  return VAR_3;
 return ((void*)0);
}
