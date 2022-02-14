
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pt3_board {struct pt3_adapter** adaps; TYPE_2__* pdev; } ;
struct TYPE_7__ {int capabilities; } ;
struct TYPE_10__ {int feednum; int filternum; TYPE_1__ dmx; int stop_feed; int start_feed; struct pt3_adapter* priv; } ;
struct TYPE_9__ {int filternum; TYPE_1__* demux; } ;
struct dvb_adapter {struct pt3_board* priv; } ;
struct pt3_adapter {int adap_idx; TYPE_5__ demux; TYPE_3__ dmxdev; struct dvb_adapter dvb_adap; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,struct dvb_adapter*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct dvb_adapter*,char*,int ,int *,int ) ;
 int FUNC_6 (struct dvb_adapter*) ;
 int FUNC_7 (struct pt3_adapter*) ;
 struct pt3_adapter* FUNC_8 (int,int ) ;
 int VAR_6 ;
 int FUNC_9 (struct pt3_adapter*) ;
 int FUNC_10 (struct pt3_adapter*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(struct pt3_board *VAR_9, int VAR_10)
{
 int VAR_11;
 struct pt3_adapter *VAR_12;
 struct dvb_adapter *VAR_13;

 VAR_12 = FUNC_8(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_9->adaps[VAR_10] = VAR_12;
 VAR_12->adap_idx = VAR_10;

 if (VAR_10 == 0 || !VAR_6) {
  VAR_11 = FUNC_5(&VAR_12->dvb_adap, "PT3 DVB",
    VAR_4, &VAR_9->pdev->dev, VAR_5);
  if (VAR_11 < 0) {
   FUNC_0(&VAR_9->pdev->dev,
    "failed to register adapter dev\n");
   goto err_mem;
  }
  VAR_13 = &VAR_12->dvb_adap;
 } else
  VAR_13 = &VAR_9->adaps[0]->dvb_adap;

 VAR_12->dvb_adap.priv = VAR_9;
 VAR_12->demux.dmx.capabilities = VAR_1 | VAR_0;
 VAR_12->demux.priv = VAR_12;
 VAR_12->demux.feednum = 256;
 VAR_12->demux.filternum = 256;
 VAR_12->demux.start_feed = VAR_7;
 VAR_12->demux.stop_feed = VAR_8;
 VAR_11 = FUNC_1(&VAR_12->demux);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_9->pdev->dev, "failed to init dmx dev\n");
  goto err_adap;
 }

 VAR_12->dmxdev.filternum = 256;
 VAR_12->dmxdev.demux = &VAR_12->demux.dmx;
 VAR_11 = FUNC_3(&VAR_12->dmxdev, VAR_13);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_9->pdev->dev, "failed to init dmxdev\n");
  goto err_demux;
 }

 VAR_11 = FUNC_9(VAR_12);
 if (VAR_11) {
  FUNC_0(&VAR_9->pdev->dev, "failed to alloc DMA buffers\n");
  goto err_dmabuf;
 }

 return 0;

err_dmabuf:
 FUNC_10(VAR_12);
 FUNC_4(&VAR_12->dmxdev);
err_demux:
 FUNC_2(&VAR_12->demux);
err_adap:
 if (VAR_10 == 0 || !VAR_6)
  FUNC_6(VAR_13);
err_mem:
 FUNC_7(VAR_12);
 VAR_9->adaps[VAR_10] = ((void*)0);
 return VAR_11;
}
