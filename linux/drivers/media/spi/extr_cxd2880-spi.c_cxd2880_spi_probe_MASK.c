
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_11__ {int (* add_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* connect_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* remove_frontend ) (TYPE_1__*,TYPE_2__*) ;int capabilities; } ;
struct TYPE_14__ {TYPE_1__ dmx; int stop_feed; int start_feed; void* feednum; void* filternum; struct cxd2880_dvb_spi* priv; } ;
struct TYPE_13__ {scalar_t__ capabilities; TYPE_1__* demux; void* filternum; } ;
struct TYPE_12__ {int source; } ;
struct cxd2880_dvb_spi {int adapter; int dvb_fe; TYPE_9__ demux; TYPE_7__ dmxdev; TYPE_2__ dmx_fe; int spi_mutex; struct spi_device* spi; int * vcc_supply; } ;
struct cxd2880_config {int * spi_mutex; struct spi_device* spi; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *,struct cxd2880_dvb_spi*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int *,struct cxd2880_config*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_7__*,int *) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int ,int *,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct cxd2880_dvb_spi*) ;
 struct cxd2880_dvb_spi* FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_21 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_22 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_23(struct spi_device *VAR_13)
{
 int VAR_14;
 struct cxd2880_dvb_spi *VAR_15 = ((void*)0);
 struct cxd2880_config VAR_16;

 if (!VAR_13) {
  FUNC_17("invalid arg.\n");
  return -VAR_3;
 }

 VAR_15 = FUNC_15(sizeof(struct cxd2880_dvb_spi), VAR_7);
 if (!VAR_15)
  return -VAR_5;

 VAR_15->vcc_supply = FUNC_3(&VAR_13->dev, "vcc");
 if (FUNC_0(VAR_15->vcc_supply)) {
  if (FUNC_1(VAR_15->vcc_supply) == -VAR_6) {
   VAR_14 = -VAR_6;
   goto fail_adapter;
  }
  VAR_15->vcc_supply = ((void*)0);
 } else {
  VAR_14 = FUNC_19(VAR_15->vcc_supply);
  if (VAR_14)
   goto fail_adapter;
 }

 VAR_15->spi = VAR_13;
 FUNC_16(&VAR_15->spi_mutex);
 FUNC_2(&VAR_13->dev, VAR_15);
 VAR_16.spi = VAR_13;
 VAR_16.spi_mutex = &VAR_15->spi_mutex;

 VAR_14 = FUNC_10(&VAR_15->adapter,
       "CXD2880",
       VAR_8,
       &VAR_13->dev,
       VAR_9);
 if (VAR_14 < 0) {
  FUNC_17("dvb_register_adapter() failed\n");
  goto fail_adapter;
 }

 if (!FUNC_4(VAR_10, &VAR_15->dvb_fe, &VAR_16)) {
  FUNC_17("cxd2880_attach failed\n");
  VAR_14 = -VAR_4;
  goto fail_attach;
 }

 VAR_14 = FUNC_11(&VAR_15->adapter,
        &VAR_15->dvb_fe);
 if (VAR_14 < 0) {
  FUNC_17("dvb_register_frontend() failed\n");
  goto fail_frontend;
 }

 VAR_15->demux.dmx.capabilities = VAR_2;
 VAR_15->demux.priv = VAR_15;
 VAR_15->demux.filternum = VAR_0;
 VAR_15->demux.feednum = VAR_0;
 VAR_15->demux.start_feed = VAR_11;
 VAR_15->demux.stop_feed = VAR_12;

 VAR_14 = FUNC_5(&VAR_15->demux);
 if (VAR_14 < 0) {
  FUNC_17("dvb_dmx_init() failed\n");
  goto fail_dmx;
 }

 VAR_15->dmxdev.filternum = VAR_0;
 VAR_15->dmxdev.demux = &VAR_15->demux.dmx;
 VAR_15->dmxdev.capabilities = 0;
 VAR_14 = FUNC_7(&VAR_15->dmxdev,
         &VAR_15->adapter);
 if (VAR_14 < 0) {
  FUNC_17("dvb_dmxdev_init() failed\n");
  goto fail_dmxdev;
 }

 VAR_15->dmx_fe.source = VAR_1;
 VAR_14 = VAR_15->demux.dmx.add_frontend(&VAR_15->demux.dmx,
           &VAR_15->dmx_fe);
 if (VAR_14 < 0) {
  FUNC_17("add_frontend() failed\n");
  goto fail_dmx_fe;
 }

 VAR_14 = VAR_15->demux.dmx.connect_frontend(&VAR_15->demux.dmx,
        &VAR_15->dmx_fe);
 if (VAR_14 < 0) {
  FUNC_17("dvb_register_frontend() failed\n");
  goto fail_fe_conn;
 }

 FUNC_18("Sony CXD2880 has successfully attached.\n");

 return 0;

fail_fe_conn:
 VAR_15->demux.dmx.remove_frontend(&VAR_15->demux.dmx,
        &VAR_15->dmx_fe);
fail_dmx_fe:
 FUNC_8(&VAR_15->dmxdev);
fail_dmxdev:
 FUNC_6(&VAR_15->demux);
fail_dmx:
 FUNC_13(&VAR_15->dvb_fe);
fail_frontend:
 FUNC_9(&VAR_15->dvb_fe);
fail_attach:
 FUNC_12(&VAR_15->adapter);
fail_adapter:
 FUNC_14(VAR_15);
 return VAR_14;
}
