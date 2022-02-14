
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc2580_dev {int f_bandwidth; int f_frequency; } ;
struct dtv_frontend_properties {int bandwidth_hz; int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct fc2580_dev* tuner_priv; } ;


 int FUNC_0 (struct fc2580_dev*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct fc2580_dev *VAR_1 = VAR_0->tuner_priv;
 struct dtv_frontend_properties *VAR_2 = &VAR_0->dtv_property_cache;

 VAR_1->f_frequency = VAR_2->frequency;
 VAR_1->f_bandwidth = VAR_2->bandwidth_hz;
 return FUNC_0(VAR_1);
}
