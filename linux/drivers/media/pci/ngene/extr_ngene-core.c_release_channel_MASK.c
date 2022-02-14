
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* remove_frontend ) (TYPE_1__*,int *) ;int (* close ) (TYPE_1__*) ;} ;
struct dvb_demux {TYPE_1__ dmx; } ;
struct ngene_channel {int has_demux; int has_adapter; size_t number; struct dvb_demux demux; int dmxdev; int mem_frontend; int hw_frontend; int dvbnet; int * fe; int ** i2c_client; scalar_t__ i2c_client_fe; int * fe2; int * ci_dev; int demux_tasklet; scalar_t__ running; struct ngene* dev; } ;
struct ngene {int * adapter; } ;


 int FUNC_0 (struct dvb_demux*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ngene_channel*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct ngene_channel *VAR_0)
{
 struct dvb_demux *VAR_1 = &VAR_0->demux;
 struct ngene *VAR_2 = VAR_0->dev;

 if (VAR_0->running)
  FUNC_8(VAR_0, 0);

 FUNC_12(&VAR_0->demux_tasklet);

 if (VAR_0->ci_dev) {
  FUNC_6(VAR_0->ci_dev);
  VAR_0->ci_dev = ((void*)0);
 }

 if (VAR_0->fe2)
  FUNC_7(VAR_0->fe2);

 if (VAR_0->fe) {
  FUNC_7(VAR_0->fe);


  if (VAR_0->i2c_client_fe) {
   FUNC_3(VAR_0->i2c_client[0]);
   VAR_0->i2c_client[0] = ((void*)0);
  }

  FUNC_2(VAR_0->fe);
  VAR_0->fe = ((void*)0);
 }

 if (VAR_0->has_demux) {
  FUNC_4(&VAR_0->dvbnet);
  VAR_1->dmx.close(&VAR_1->dmx);
  VAR_1->dmx.remove_frontend(&VAR_1->dmx,
           &VAR_0->hw_frontend);
  VAR_1->dmx.remove_frontend(&VAR_1->dmx,
           &VAR_0->mem_frontend);
  FUNC_1(&VAR_0->dmxdev);
  FUNC_0(&VAR_0->demux);
  VAR_0->has_demux = 0;
 }

 if (VAR_0->has_adapter) {
  FUNC_5(&VAR_2->adapter[VAR_0->number]);
  VAR_0->has_adapter = 0;
 }
}
