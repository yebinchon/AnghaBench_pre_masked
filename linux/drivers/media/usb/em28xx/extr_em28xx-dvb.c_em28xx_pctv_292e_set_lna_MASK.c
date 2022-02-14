
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct em28xx_i2c_bus {struct em28xx* dev; } ;
struct em28xx {int dummy; } ;
struct dtv_frontend_properties {int lna; } ;
struct dvb_frontend {TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_2__ {struct em28xx_i2c_bus* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 struct em28xx_i2c_bus *VAR_3 = VAR_1->dvb->priv;
 struct em28xx *VAR_4 = VAR_3->dev;
 u8 VAR_5;

 if (VAR_2->lna == 1)
  VAR_5 = 0x01;
 else
  VAR_5 = 0x00;

 return FUNC_0(VAR_4, VAR_0, VAR_5, 0x01);
}
