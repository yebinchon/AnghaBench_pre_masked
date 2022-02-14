
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5k6a3 {int dev; int clock; TYPE_1__* supplies; int gpio_reset; } ;
struct TYPE_2__ {int consumer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct s5k6a3 *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1->gpio_reset, 0);

 for (VAR_2 = VAR_0 - 1; VAR_2 >= 0; VAR_2--)
  FUNC_3(VAR_1->supplies[VAR_2].consumer);

 FUNC_0(VAR_1->clock);
 FUNC_2(VAR_1->dev);
 return 0;
}
