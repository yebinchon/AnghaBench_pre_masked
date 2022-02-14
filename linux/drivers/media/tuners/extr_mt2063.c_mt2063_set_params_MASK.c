
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int f_LO2_Step; int f_out; int f_out_bw; } ;
struct mt2063_state {int frequency; TYPE_1__ AS_Data; int init; } ;
struct dtv_frontend_properties {int bandwidth_hz; int delivery_system; int frequency; } ;
struct dvb_frontend {struct mt2063_state* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mt2063_state*,int) ;
 int FUNC_1 (struct mt2063_state*,int) ;



 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;
 struct mt2063_state *VAR_5 = VAR_3->tuner_priv;
 int VAR_6;
 s32 VAR_7;
 s32 VAR_8;
 s32 VAR_9;
 s32 VAR_10;
 s32 VAR_11;

 if (!VAR_5->init) {
  VAR_6 = FUNC_3(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
 }

 FUNC_2(2, "\n");

 if (VAR_4->bandwidth_hz == 0)
  return -VAR_0;
 if (VAR_4->bandwidth_hz <= 6000000)
  VAR_9 = 6000000;
 else if (VAR_4->bandwidth_hz <= 7000000)
  VAR_9 = 7000000;
 else
  VAR_9 = 8000000;

 switch (VAR_4->delivery_system) {
 case 128:
  VAR_11 = VAR_2;
  VAR_7 = 36125000;
  VAR_8 = -(VAR_9 / 2);
  break;
 case 130:
 case 129:
  VAR_11 = VAR_1;
  VAR_7 = 36125000;
  VAR_8 = -(VAR_9 / 2);
  break;
 default:
  return -VAR_0;
 }
 VAR_10 = VAR_7 - (VAR_8 + (VAR_9 / 2));

 VAR_5->AS_Data.f_LO2_Step = 125000;
 VAR_5->AS_Data.f_out = VAR_10;
 VAR_5->AS_Data.f_out_bw = VAR_9 + 750000;
 VAR_6 = FUNC_0(VAR_5, VAR_11);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_2(1, "Tuning to frequency: %d, bandwidth %d, foffset %d\n",
  VAR_4->frequency, VAR_9, VAR_8);

 VAR_6 = FUNC_1(VAR_5, (VAR_4->frequency + (VAR_8 + (VAR_9 / 2))));

 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->frequency = VAR_4->frequency;
 return 0;
}
