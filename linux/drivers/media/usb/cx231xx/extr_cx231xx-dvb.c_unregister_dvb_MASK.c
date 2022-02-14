
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* remove_frontend ) (TYPE_1__*,int *) ;} ;
struct TYPE_5__ {TYPE_1__ dmx; } ;
struct cx231xx_dvb {int ** i2c_client_demod; int * i2c_client_tuner; int adapter; scalar_t__* frontend; TYPE_3__ demux; int dmxdev; int fe_hw; int fe_mem; int net; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_9(struct cx231xx_dvb *VAR_0)
{
 FUNC_4(&VAR_0->net);
 VAR_0->demux.dmx.remove_frontend(&VAR_0->demux.dmx, &VAR_0->fe_mem);
 VAR_0->demux.dmx.remove_frontend(&VAR_0->demux.dmx, &VAR_0->fe_hw);
 FUNC_1(&VAR_0->dmxdev);
 FUNC_0(&VAR_0->demux);
 if (VAR_0->frontend[1])
  FUNC_6(VAR_0->frontend[1]);
 FUNC_6(VAR_0->frontend[0]);
 if (VAR_0->frontend[1])
  FUNC_2(VAR_0->frontend[1]);
 FUNC_2(VAR_0->frontend[0]);
 FUNC_5(&VAR_0->adapter);


 FUNC_3(VAR_0->i2c_client_tuner);
 VAR_0->i2c_client_tuner = ((void*)0);

 FUNC_3(VAR_0->i2c_client_demod[1]);
 VAR_0->i2c_client_demod[1] = ((void*)0);
 FUNC_3(VAR_0->i2c_client_demod[0]);
 VAR_0->i2c_client_demod[0] = ((void*)0);
}
