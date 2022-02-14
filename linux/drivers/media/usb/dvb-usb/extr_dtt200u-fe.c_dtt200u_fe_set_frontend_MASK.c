
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dtv_frontend_properties {int frequency; int bandwidth_hz; } ;
struct dvb_frontend {struct dtt200u_fe_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct dtt200u_fe_state {int* data; int data_mutex; int d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;
 struct dtt200u_fe_state *VAR_5 = VAR_3->demodulator_priv;
 int VAR_6;
 u16 VAR_7 = VAR_4->frequency / 250000;

 FUNC_1(&VAR_5->data_mutex);
 VAR_5->data[0] = VAR_1;
 switch (VAR_4->bandwidth_hz) {
 case 8000000:
  VAR_5->data[1] = 8;
  break;
 case 7000000:
  VAR_5->data[1] = 7;
  break;
 case 6000000:
  VAR_5->data[1] = 6;
  break;
 default:
  VAR_6 = -VAR_0;
  goto ret;
 }

 VAR_6 = FUNC_0(VAR_5->d, VAR_5->data, 2);
 if (VAR_6 < 0)
  goto ret;

 VAR_5->data[0] = VAR_2;
 VAR_5->data[1] = VAR_7 & 0xff;
 VAR_5->data[2] = (VAR_7 >> 8) & 0xff;
 VAR_6 = FUNC_0(VAR_5->d, VAR_5->data, 3);
 if (VAR_6 < 0)
  goto ret;

ret:
 FUNC_2(&VAR_5->data_mutex);
 return VAR_6;
}
