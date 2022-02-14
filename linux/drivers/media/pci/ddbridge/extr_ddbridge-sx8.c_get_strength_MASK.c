
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int channel_power; } ;
struct TYPE_6__ {TYPE_1__ dvbs2_signal_info; } ;
struct sx8 {TYPE_2__ signal_info; } ;
struct TYPE_8__ {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {TYPE_4__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct sx8* demodulator_priv; } ;
typedef int s32 ;
struct TYPE_7__ {int svalue; int scale; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_1)
{
 struct sx8 *VAR_2 = VAR_1->demodulator_priv;
 struct dtv_frontend_properties *VAR_3 = &VAR_1->dtv_property_cache;
 s32 VAR_4;

 VAR_4 = 100000 -
       (VAR_2->signal_info.dvbs2_signal_info.channel_power
        * 10 + 108750);
 VAR_3->strength.len = 1;
 VAR_3->strength.stat[0].scale = VAR_0;
 VAR_3->strength.stat[0].svalue = VAR_4;
 return 0;
}
