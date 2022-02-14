
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx214 {TYPE_1__* supplies; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int supply; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct device*,unsigned int,TYPE_1__*) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, struct imx214 *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->supplies[VAR_4].supply = VAR_1[VAR_4];

 return FUNC_0(VAR_2, VAR_0,
           VAR_3->supplies);
}
