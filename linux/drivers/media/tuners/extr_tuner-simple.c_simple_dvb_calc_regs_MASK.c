
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int addr; } ;
struct tuner_simple_priv {scalar_t__ bandwidth; scalar_t__ frequency; TYPE_1__ i2c_props; } ;
struct dtv_frontend_properties {scalar_t__ delivery_system; scalar_t__ bandwidth_hz; int frequency; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*,int *,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1,
    u8 *VAR_2, int VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_1->dtv_property_cache;
 u32 VAR_5 = VAR_4->delivery_system;
 u32 VAR_6 = VAR_4->bandwidth_hz;
 struct tuner_simple_priv *VAR_7 = VAR_1->tuner_priv;
 u32 VAR_8;

 if (VAR_3 < 5)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_1, VAR_2+1, VAR_5, VAR_4->frequency, VAR_6);
 if (VAR_8 == 0)
  return -VAR_0;

 VAR_2[0] = VAR_7->i2c_props.addr;

 VAR_7->frequency = VAR_8;
 VAR_7->bandwidth = VAR_4->bandwidth_hz;

 return 5;
}
