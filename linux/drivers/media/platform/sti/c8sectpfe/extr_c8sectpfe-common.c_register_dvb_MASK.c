
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_17__ {int capabilities; int (* add_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* connect_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* remove_frontend ) (TYPE_1__*,TYPE_2__*) ;} ;
struct TYPE_16__ {TYPE_1__ dmx; void* filternum; int * write_to_decoder; void* stop_feed; void* start_feed; void* feednum; struct stdemux* priv; } ;
struct TYPE_15__ {scalar_t__ capabilities; TYPE_1__* demux; void* filternum; } ;
struct TYPE_18__ {scalar_t__ source; } ;
struct stdemux {TYPE_13__ dvb_demux; TYPE_11__ dmxdev; TYPE_2__ hw_frontend; TYPE_2__ mem_frontend; scalar_t__ tsin_index; } ;
struct dvb_adapter {int dummy; } ;
struct c8sectpfei {int dev; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (TYPE_13__*) ;
 int FUNC_3 (TYPE_11__*,struct dvb_adapter*) ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(struct stdemux *VAR_6, struct dvb_adapter *VAR_7,
    void *VAR_8, void *VAR_9,
    struct c8sectpfei *VAR_10)
{
 int VAR_11;

 VAR_6->dvb_demux.dmx.capabilities = VAR_5 |
     VAR_4 |
     VAR_2;

 VAR_6->dvb_demux.priv = VAR_6;
 VAR_6->dvb_demux.filternum = VAR_0;
 VAR_6->dvb_demux.feednum = VAR_0;

 VAR_6->dvb_demux.start_feed = VAR_8;
 VAR_6->dvb_demux.stop_feed = VAR_9;
 VAR_6->dvb_demux.write_to_decoder = ((void*)0);

 VAR_11 = FUNC_1(&VAR_6->dvb_demux);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->dev, "dvb_dmx_init failed (errno = %d)\n",
   VAR_11);
  goto err_dmx;
 }

 VAR_6->dmxdev.filternum = VAR_6->dvb_demux.filternum;
 VAR_6->dmxdev.demux = &VAR_6->dvb_demux.dmx;
 VAR_6->dmxdev.capabilities = 0;

 VAR_11 = FUNC_3(&VAR_6->dmxdev, VAR_7);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->dev, "dvb_dmxdev_init failed (errno = %d)\n",
   VAR_11);

  goto err_dmxdev;
 }

 VAR_6->hw_frontend.source = VAR_1 + VAR_6->tsin_index;

 VAR_11 = VAR_6->dvb_demux.dmx.add_frontend(&VAR_6->dvb_demux.dmx,
      &VAR_6->hw_frontend);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->dev, "add_frontend failed (errno = %d)\n", VAR_11);
  goto err_fe_hw;
 }

 VAR_6->mem_frontend.source = VAR_3;
 VAR_11 = VAR_6->dvb_demux.dmx.add_frontend(&VAR_6->dvb_demux.dmx,
      &VAR_6->mem_frontend);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->dev, "add_frontend failed (%d)\n", VAR_11);
  goto err_fe_mem;
 }

 VAR_11 = VAR_6->dvb_demux.dmx.connect_frontend(&VAR_6->dvb_demux.dmx,
       &VAR_6->hw_frontend);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->dev, "connect_frontend (%d)\n", VAR_11);
  goto err_fe_con;
 }

 return 0;

err_fe_con:
 VAR_6->dvb_demux.dmx.remove_frontend(&VAR_6->dvb_demux.dmx,
           &VAR_6->mem_frontend);
err_fe_mem:
 VAR_6->dvb_demux.dmx.remove_frontend(&VAR_6->dvb_demux.dmx,
           &VAR_6->hw_frontend);
err_fe_hw:
 FUNC_4(&VAR_6->dmxdev);
err_dmxdev:
 FUNC_2(&VAR_6->dvb_demux);
err_dmx:
 return VAR_11;

}
