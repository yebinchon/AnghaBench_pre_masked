
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* remove_frontend ) (TYPE_1__*,int *) ;int (* close ) (TYPE_1__*) ;} ;
struct dvb_demux {TYPE_1__ dmx; } ;
struct smi_port {int dvb_adapter; struct dvb_demux demux; int dmxdev; int mem_frontend; int hw_frontend; int dvbnet; } ;


 int FUNC_0 (struct dvb_demux*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_7(struct smi_port *VAR_0)
{
 struct dvb_demux *VAR_1 = &VAR_0->demux;

 FUNC_2(&VAR_0->dvbnet);

 VAR_1->dmx.close(&VAR_1->dmx);
 VAR_1->dmx.remove_frontend(&VAR_1->dmx, &VAR_0->hw_frontend);
 VAR_1->dmx.remove_frontend(&VAR_1->dmx, &VAR_0->mem_frontend);
 FUNC_1(&VAR_0->dmxdev);
 FUNC_0(&VAR_0->demux);

 FUNC_3(&VAR_0->dvb_adapter);
}
