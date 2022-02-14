
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as102_dev_t {int name; int dvb_adap; int dvb_dmx; int dvb_dmxdev; int dvb_fe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

void FUNC_6(struct as102_dev_t *VAR_0)
{

 FUNC_4(VAR_0->dvb_fe);


 FUNC_2(VAR_0->dvb_fe);


 FUNC_1(&VAR_0->dvb_dmxdev);
 FUNC_0(&VAR_0->dvb_dmx);


 FUNC_3(&VAR_0->dvb_adap);

 FUNC_5("Unregistered device %s", VAR_0->name);
}
