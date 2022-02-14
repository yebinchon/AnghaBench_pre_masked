
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmx_demux {int (* remove_frontend ) (struct dmx_demux*,int *) ;int (* close ) (struct dmx_demux*) ;} ;
struct dvb_demux {struct dmx_demux dmx; } ;
struct dvb_adapter {int dummy; } ;
struct cx18_stream {struct cx18_dvb* dvb; struct cx18* cx; } ;
struct cx18_dvb {int fe; int dmxdev; int hw_frontend; int mem_frontend; int dvbnet; struct dvb_demux demux; struct dvb_adapter dvb_adapter; int enabled; } ;
struct cx18 {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dvb_demux*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dvb_adapter*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct dmx_demux*) ;
 int FUNC_8 (struct dmx_demux*,int *) ;
 int FUNC_9 (struct dmx_demux*,int *) ;

void FUNC_10(struct cx18_stream *VAR_0)
{
 struct cx18 *VAR_1 = VAR_0->cx;
 struct cx18_dvb *VAR_2 = VAR_0->dvb;
 struct dvb_adapter *VAR_3;
 struct dvb_demux *VAR_4;
 struct dmx_demux *VAR_5;

 FUNC_0("unregister DVB\n");

 if (VAR_2 == ((void*)0) || !VAR_2->enabled)
  return;

 VAR_3 = &VAR_2->dvb_adapter;
 VAR_4 = &VAR_2->demux;
 VAR_5 = &VAR_4->dmx;

 VAR_5->close(VAR_5);
 FUNC_4(&VAR_2->dvbnet);
 VAR_5->remove_frontend(VAR_5, &VAR_2->mem_frontend);
 VAR_5->remove_frontend(VAR_5, &VAR_2->hw_frontend);
 FUNC_2(&VAR_2->dmxdev);
 FUNC_1(VAR_4);
 FUNC_6(VAR_2->fe);
 FUNC_3(VAR_2->fe);
 FUNC_5(VAR_3);
}
