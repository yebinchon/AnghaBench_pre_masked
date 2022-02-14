
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int capabilities; int (* add_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* connect_frontend ) (TYPE_1__*,TYPE_2__*) ;} ;
struct dvb_demux {int filternum; int feednum; TYPE_1__ dmx; int * write_to_decoder; int stop_feed; int start_feed; void* priv; } ;
struct TYPE_10__ {int source; } ;
struct TYPE_11__ {int filternum; scalar_t__ capabilities; TYPE_1__* demux; } ;
struct budget {int dvb_net; int dvb_adapter; TYPE_2__ hw_frontend; TYPE_2__ mem_frontend; TYPE_8__ dmxdev; struct dvb_demux demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,struct budget*) ;
 int FUNC_1 (struct dvb_demux*) ;
 int FUNC_2 (TYPE_8__*,int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct budget *VAR_7)
{
 struct dvb_demux *VAR_8 = &VAR_7->demux;
 int VAR_9;

 FUNC_0(2, "budget: %p\n", VAR_7);

 VAR_8->priv = (void *) VAR_7;

 VAR_8->filternum = 256;
 VAR_8->feednum = 256;
 VAR_8->start_feed = VAR_5;
 VAR_8->stop_feed = VAR_6;
 VAR_8->write_to_decoder = ((void*)0);

 VAR_8->dmx.capabilities = (VAR_4 | VAR_3 |
          VAR_1);

 FUNC_1(&VAR_7->demux);

 VAR_7->dmxdev.filternum = 256;
 VAR_7->dmxdev.demux = &VAR_8->dmx;
 VAR_7->dmxdev.capabilities = 0;

 FUNC_2(&VAR_7->dmxdev, &VAR_7->dvb_adapter);

 VAR_7->hw_frontend.source = VAR_0;

 VAR_9 = VAR_8->dmx.add_frontend(&VAR_8->dmx, &VAR_7->hw_frontend);

 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->mem_frontend.source = VAR_2;
 VAR_9 = VAR_8->dmx.add_frontend(&VAR_8->dmx, &VAR_7->mem_frontend);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = VAR_8->dmx.connect_frontend(&VAR_8->dmx, &VAR_7->hw_frontend);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_3(&VAR_7->dvb_adapter, &VAR_7->dvb_net, &VAR_8->dmx);

 return 0;
}
