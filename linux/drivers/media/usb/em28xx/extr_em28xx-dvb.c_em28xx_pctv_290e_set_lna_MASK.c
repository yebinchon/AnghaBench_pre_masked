
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct em28xx_i2c_bus {struct em28xx* dev; } ;
struct em28xx_dvb {int lna_gpio; } ;
struct em28xx {TYPE_2__* intf; struct em28xx_dvb* dvb; } ;
struct dtv_frontend_properties {int lna; } ;
struct dvb_frontend {TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct em28xx_i2c_bus* priv; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long,int *) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;
 struct em28xx_i2c_bus *VAR_5 = VAR_3->dvb->priv;
 struct em28xx *VAR_6 = VAR_5->dev;
 FUNC_1(&VAR_6->intf->dev, "%s: LNA control is disabled (lna=%u)\n",
   VAR_2, VAR_4->lna);
 return 0;

}
