
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_chip {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pwm_chip *VAR_0)
{
 if (VAR_0->dev)
  FUNC_0(VAR_0->dev->of_node);
}
