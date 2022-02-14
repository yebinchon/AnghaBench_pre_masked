
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct bbc_i2c_bus {TYPE_1__* devs; } ;
struct TYPE_2__ {int client_claimed; struct platform_device* device; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bbc_i2c_bus *VAR_1, struct platform_device *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1->devs[VAR_4].device == VAR_2) {
   VAR_1->devs[VAR_4].client_claimed = VAR_3;
   return;
  }
 }
}
