
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt3_board {struct pt3_adapter** adaps; } ;
struct dmx_demux {int (* close ) (struct dmx_demux*) ;} ;
struct TYPE_4__ {struct dmx_demux dmx; } ;
struct pt3_adapter {int dvb_adap; TYPE_2__ demux; int dmxdev; int i2c_demod; int i2c_tuner; TYPE_1__* fe; scalar_t__ thread; } ;
struct TYPE_3__ {scalar_t__ frontend_priv; int * callback; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct pt3_adapter*) ;
 int VAR_0 ;
 int FUNC_6 (struct pt3_adapter*) ;
 int FUNC_7 (struct pt3_adapter*) ;
 int FUNC_8 (struct dmx_demux*) ;

__attribute__((used)) static void FUNC_9(struct pt3_board *VAR_1, int VAR_2)
{
 struct pt3_adapter *VAR_3;
 struct dmx_demux *VAR_4;

 VAR_3 = VAR_1->adaps[VAR_2];
 if (VAR_3 == ((void*)0))
  return;


 if (VAR_3->thread)
  FUNC_7(VAR_3);

 VAR_4 = &VAR_3->demux.dmx;
 VAR_4->close(VAR_4);
 if (VAR_3->fe) {
  VAR_3->fe->callback = ((void*)0);
  if (VAR_3->fe->frontend_priv)
   FUNC_4(VAR_3->fe);
  FUNC_2(VAR_3->i2c_tuner);
  FUNC_2(VAR_3->i2c_demod);
 }
 FUNC_6(VAR_3);
 FUNC_1(&VAR_3->dmxdev);
 FUNC_0(&VAR_3->demux);
 if (VAR_2 == 0 || !VAR_0)
  FUNC_3(&VAR_3->dvb_adap);
 FUNC_5(VAR_3);
 VAR_1->adaps[VAR_2] = ((void*)0);
}
