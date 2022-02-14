
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vp7045_fe_state {int d; } ;
struct dtv_frontend_properties {int frequency; int bandwidth_hz; } ;
struct dvb_frontend {struct vp7045_fe_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int,int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct vp7045_fe_state *VAR_4 = VAR_2->demodulator_priv;
 u8 VAR_5[5];
 u32 VAR_6 = VAR_3->frequency / 1000;

 VAR_5[0] = (VAR_6 >> 16) & 0xff;
 VAR_5[1] = (VAR_6 >> 8) & 0xff;
 VAR_5[2] = VAR_6 & 0xff;
 VAR_5[3] = 0;

 switch (VAR_3->bandwidth_hz) {
 case 8000000:
  VAR_5[4] = 8;
  break;
 case 7000000:
  VAR_5[4] = 7;
  break;
 case 6000000:
  VAR_5[4] = 6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_4->d,VAR_1,VAR_5,5,((void*)0),0,200);
 return 0;
}
