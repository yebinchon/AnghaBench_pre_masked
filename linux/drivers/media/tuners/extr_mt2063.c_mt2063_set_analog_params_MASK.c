
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int f_LO2_Step; int f_out; int f_out_bw; } ;
struct mt2063_state {int frequency; TYPE_1__ AS_Data; int init; } ;
struct dvb_frontend {struct mt2063_state* tuner_priv; } ;
struct analog_parameters {int mode; int std; int frequency; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mt2063_state*,int) ;
 int FUNC_1 (struct mt2063_state*,int) ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_5,
        struct analog_parameters *VAR_6)
{
 struct mt2063_state *VAR_7 = VAR_5->tuner_priv;
 s32 VAR_8;
 s32 VAR_9;
 s32 VAR_10;
 s32 VAR_11;
 s32 VAR_12;
 int VAR_13;

 FUNC_2(2, "\n");

 if (!VAR_7->init) {
  VAR_13 = FUNC_3(VAR_5);
  if (VAR_13 < 0)
   return VAR_13;
 }

 switch (VAR_6->mode) {
 case 128:
  VAR_8 = 38900000;
  VAR_10 = 8000000;
  VAR_9 = -(VAR_10 / 2);
  VAR_12 = VAR_2;
  break;
 case 129:
  VAR_12 = VAR_1;
  if (VAR_6->std & ~VAR_3) {
   VAR_8 = 38900000;
   VAR_10 = 6000000;
   VAR_9 = -1250000;
  } else if (VAR_6->std & VAR_4) {
   VAR_8 = 38900000;
   VAR_10 = 7000000;
   VAR_9 = -1250000;
  } else {
   VAR_8 = 38900000;
   VAR_10 = 8000000;
   VAR_9 = -1250000;
  }
  break;
 default:
  return -VAR_0;
 }
 VAR_11 = VAR_8 - (VAR_9 + (VAR_10 / 2));

 VAR_7->AS_Data.f_LO2_Step = 125000;
 VAR_7->AS_Data.f_out = VAR_11;
 VAR_7->AS_Data.f_out_bw = VAR_10 + 750000;
 VAR_13 = FUNC_0(VAR_7, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_2(1, "Tuning to frequency: %d, bandwidth %d, foffset %d\n",
  VAR_6->frequency, VAR_10, VAR_9);

 VAR_13 = FUNC_1(VAR_7, (VAR_6->frequency + (VAR_9 + (VAR_10 / 2))));
 if (VAR_13 < 0)
  return VAR_13;

 VAR_7->frequency = VAR_6->frequency;
 return 0;
}
