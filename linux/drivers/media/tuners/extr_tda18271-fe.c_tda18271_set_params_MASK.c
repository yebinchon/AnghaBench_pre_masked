
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tda18271_std_map_item {int if_freq; } ;
struct tda18271_std_map {struct tda18271_std_map_item qam_8; struct tda18271_std_map_item qam_7; struct tda18271_std_map_item qam_6; struct tda18271_std_map_item dvbt_8; struct tda18271_std_map_item dvbt_7; struct tda18271_std_map_item dvbt_6; struct tda18271_std_map_item atsc_6; } ;
struct tda18271_priv {int frequency; int bandwidth; int if_freq; int mode; struct tda18271_std_map std; } ;
struct TYPE_3__ {int (* standby ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {TYPE_1__ analog_ops; } ;
struct dtv_frontend_properties {int delivery_system; int bandwidth_hz; int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; struct tda18271_priv* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*,struct tda18271_std_map_item*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 u32 VAR_4 = VAR_3->delivery_system;
 u32 VAR_5 = VAR_3->bandwidth_hz;
 u32 VAR_6 = VAR_3->frequency;
 struct tda18271_priv *VAR_7 = VAR_2->tuner_priv;
 struct tda18271_std_map *VAR_8 = &VAR_7->std;
 struct tda18271_std_map_item *VAR_9;
 int VAR_10;

 VAR_7->mode = VAR_1;

 switch (VAR_4) {
 case 134:
  VAR_9 = &VAR_8->atsc_6;
  VAR_5 = 6000000;
  break;
 case 128:
 case 130:
 case 129:
  if (VAR_5 <= 6000000) {
   VAR_9 = &VAR_8->dvbt_6;
  } else if (VAR_5 <= 7000000) {
   VAR_9 = &VAR_8->dvbt_7;
  } else {
   VAR_9 = &VAR_8->dvbt_8;
  }
  break;
 case 132:
  VAR_5 = 6000000;

 case 133:
 case 131:
  if (VAR_5 <= 6000000) {
   VAR_9 = &VAR_8->qam_6;
  } else if (VAR_5 <= 7000000) {
   VAR_9 = &VAR_8->qam_7;
  } else {
   VAR_9 = &VAR_8->qam_8;
  }
  break;
 default:
  FUNC_3("modulation type not supported!\n");
  return -VAR_0;
 }


 if (VAR_2->ops.analog_ops.standby)
  VAR_2->ops.analog_ops.standby(VAR_2);

 VAR_10 = FUNC_1(VAR_2, VAR_9, VAR_6, VAR_5);

 if (FUNC_2(VAR_10))
  goto fail;

 VAR_7->if_freq = VAR_9->if_freq;
 VAR_7->frequency = VAR_6;
 VAR_7->bandwidth = VAR_5;
fail:
 return VAR_10;
}
