
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* remove_frontend ) (TYPE_1__*,int *) ;int (* close ) (TYPE_1__*) ;} ;
struct dvb_demux {TYPE_1__ dmx; } ;
struct av7110 {int osd_dev; int * fe; struct dvb_demux demux; int dmxdev; int mem_frontend; int hw_frontend; int dvb_net; struct dvb_demux demux1; int dmxdev1; int dvb_net1; int registered; } ;


 int FUNC_0 (struct av7110*) ;
 int FUNC_1 (struct av7110*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*,struct av7110*) ;
 int FUNC_3 (struct dvb_demux*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_13(struct av7110 *VAR_1)
{
 struct dvb_demux *VAR_2 = &VAR_1->demux;
 struct dvb_demux *VAR_3 = &VAR_1->demux1;

 FUNC_2(4, "%p\n", VAR_1);

 if (!VAR_1->registered)
  return;

 if (VAR_0) {
  FUNC_6(&VAR_1->dvb_net1);
  VAR_2->dmx.close(&VAR_3->dmx);
  FUNC_4(&VAR_1->dmxdev1);
  FUNC_3(&VAR_1->demux1);
 }

 FUNC_6(&VAR_1->dvb_net);

 VAR_2->dmx.close(&VAR_2->dmx);
 VAR_2->dmx.remove_frontend(&VAR_2->dmx, &VAR_1->hw_frontend);
 VAR_2->dmx.remove_frontend(&VAR_2->dmx, &VAR_1->mem_frontend);

 FUNC_4(&VAR_1->dmxdev);
 FUNC_3(&VAR_1->demux);

 if (VAR_1->fe != ((void*)0)) {
  FUNC_8(VAR_1->fe);
  FUNC_5(VAR_1->fe);
 }
 FUNC_7(VAR_1->osd_dev);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
