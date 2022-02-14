
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_i2c_bus {struct em28xx* dev; } ;
struct em28xx {int dummy; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_2__ {struct em28xx_i2c_bus* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct em28xx*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, int VAR_3)
{
 struct em28xx_i2c_bus *VAR_4 = VAR_2->dvb->priv;
 struct em28xx *VAR_5 = VAR_4->dev;

 if (VAR_3)
  return FUNC_0(VAR_5, VAR_0);
 else
  return FUNC_0(VAR_5, VAR_1);
}
