
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_i2c_bus {struct em28xx* dev; } ;
struct TYPE_2__ {struct em28xx_i2c_bus* priv; } ;
struct em28xx_dvb {TYPE_1__ adapter; } ;
struct em28xx {int dummy; } ;


 int FUNC_0 (struct em28xx*) ;

__attribute__((used)) static int FUNC_1(struct em28xx_dvb *VAR_0)
{
 struct em28xx_i2c_bus *VAR_1 = VAR_0->adapter.priv;
 struct em28xx *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2);

 return 0;
}
