
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {int * parent; } ;
struct TYPE_17__ {TYPE_2__* algo_data; TYPE_1__ dev; int owner; int name; } ;
struct TYPE_13__ {struct dmx_demux* demux; int filternum; } ;
struct TYPE_16__ {int source; } ;
struct dmx_demux {int capabilities; int (* add_frontend ) (struct dmx_demux*,TYPE_3__*) ;int (* connect_frontend ) (struct dmx_demux*,TYPE_3__*) ;int (* remove_frontend ) (struct dmx_demux*,TYPE_3__*) ;int (* disconnect_frontend ) (struct dmx_demux*) ;} ;
struct dvb_demux {int filternum; int feednum; struct dmx_demux dmx; int stop_feed; int start_feed; } ;
struct dvb_adapter {int proposed_mac; } ;
struct TYPE_15__ {int udelay; int timeout; int getscl; int getsda; int (* setscl ) (struct pluto*,int) ;int (* setsda ) (struct pluto*,int) ;struct pluto* data; } ;
struct pluto {int io_mem; TYPE_8__ i2c_adap; TYPE_11__ dmxdev; TYPE_3__ hw_frontend; TYPE_3__ mem_frontend; int dvbnet; struct dvb_demux demux; struct dvb_adapter dvb_adapter; TYPE_2__ i2c_bit; struct pci_dev* pdev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct dvb_demux*) ;
 int FUNC_2 (struct dvb_demux*) ;
 int FUNC_3 (TYPE_11__*,struct dvb_adapter*) ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (struct dvb_adapter*,int *,struct dmx_demux*) ;
 int FUNC_6 (struct dvb_adapter*,int ,int ,int *,int ) ;
 int FUNC_7 (struct dvb_adapter*) ;
 int FUNC_8 (int ,struct pluto*) ;
 int FUNC_9 (struct pluto*) ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (TYPE_8__*,struct pluto*) ;
 int FUNC_13 (struct pluto*) ;
 struct pluto* FUNC_14 (int,int ) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*,int ,int) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 int FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (struct pci_dev*,struct pluto*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_25 (struct pluto*) ;
 int FUNC_26 (struct pluto*) ;
 int VAR_15 ;
 int FUNC_27 (struct pluto*,int ) ;
 int FUNC_28 (struct pluto*) ;
 int FUNC_29 (struct pluto*) ;
 int FUNC_30 (struct pluto*,int) ;
 int FUNC_31 (struct pluto*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_32 (int ,int ,int ,int ,struct pluto*) ;
 int FUNC_33 (int ,int ,int) ;
 int FUNC_34 (struct dmx_demux*,TYPE_3__*) ;
 int FUNC_35 (struct dmx_demux*,TYPE_3__*) ;
 int FUNC_36 (struct dmx_demux*,TYPE_3__*) ;
 int FUNC_37 (struct dmx_demux*) ;
 int FUNC_38 (struct dmx_demux*,TYPE_3__*) ;
 int FUNC_39 (struct dmx_demux*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_40(struct pci_dev *VAR_18, const struct pci_device_id *VAR_19)
{
 struct pluto *VAR_20;
 struct dvb_adapter *VAR_21;
 struct dvb_demux *VAR_22;
 struct dmx_demux *VAR_23;
 int VAR_24 = -VAR_7;

 VAR_20 = FUNC_14(sizeof(struct pluto), VAR_8);
 if (!VAR_20)
  goto out;

 VAR_20->pdev = VAR_18;

 VAR_24 = FUNC_16(VAR_18);
 if (VAR_24 < 0)
  goto err_kfree;


 FUNC_24(VAR_18, 0x6c, 0x8000);

 VAR_24 = FUNC_21(VAR_18, FUNC_0(32));
 if (VAR_24 < 0)
  goto err_pci_disable_device;

 FUNC_23(VAR_18);

 VAR_24 = FUNC_20(VAR_18, VAR_5);
 if (VAR_24 < 0)
  goto err_pci_disable_device;

 VAR_20->io_mem = FUNC_17(VAR_18, 0, 0x40);
 if (!VAR_20->io_mem) {
  VAR_24 = -VAR_6;
  goto err_pci_release_regions;
 }

 FUNC_22(VAR_18, VAR_20);

 VAR_24 = FUNC_32(VAR_18->irq, VAR_15, VAR_9, VAR_5, VAR_20);
 if (VAR_24 < 0)
  goto err_pci_iounmap;

 VAR_24 = FUNC_26(VAR_20);
 if (VAR_24 < 0)
  goto err_free_irq;


 FUNC_12(&VAR_20->i2c_adap, VAR_20);
 FUNC_33(VAR_20->i2c_adap.name, VAR_5, sizeof(VAR_20->i2c_adap.name));
 VAR_20->i2c_adap.owner = VAR_11;
 VAR_20->i2c_adap.dev.parent = &VAR_18->dev;
 VAR_20->i2c_adap.algo_data = &VAR_20->i2c_bit;
 VAR_20->i2c_bit.data = VAR_20;
 VAR_20->i2c_bit.setsda = FUNC_31;
 VAR_20->i2c_bit.setscl = FUNC_30;
 VAR_20->i2c_bit.getsda = VAR_14;
 VAR_20->i2c_bit.getscl = VAR_13;
 VAR_20->i2c_bit.udelay = 10;
 VAR_20->i2c_bit.timeout = 10;


 FUNC_31(VAR_20, 1);
 FUNC_30(VAR_20, 1);

 VAR_24 = FUNC_10(&VAR_20->i2c_adap);
 if (VAR_24 < 0)
  goto err_pluto_hw_exit;


 VAR_24 = FUNC_6(&VAR_20->dvb_adapter, VAR_5,
       VAR_11, &VAR_18->dev, VAR_12);
 if (VAR_24 < 0)
  goto err_i2c_del_adapter;

 VAR_21 = &VAR_20->dvb_adapter;

 FUNC_28(VAR_20);
 FUNC_29(VAR_20);
 FUNC_27(VAR_20, VAR_21->proposed_mac);

 VAR_22 = &VAR_20->demux;
 VAR_22->filternum = 256;
 VAR_22->feednum = 256;
 VAR_22->start_feed = VAR_16;
 VAR_22->stop_feed = VAR_17;
 VAR_22->dmx.capabilities = (VAR_4 |
   VAR_3 | VAR_1);
 VAR_24 = FUNC_1(VAR_22);
 if (VAR_24 < 0)
  goto err_dvb_unregister_adapter;

 VAR_23 = &VAR_22->dmx;

 VAR_20->hw_frontend.source = VAR_0;
 VAR_20->mem_frontend.source = VAR_2;
 VAR_20->dmxdev.filternum = VAR_10;
 VAR_20->dmxdev.demux = VAR_23;

 VAR_24 = FUNC_3(&VAR_20->dmxdev, VAR_21);
 if (VAR_24 < 0)
  goto err_dvb_dmx_release;

 VAR_24 = VAR_23->add_frontend(VAR_23, &VAR_20->hw_frontend);
 if (VAR_24 < 0)
  goto err_dvb_dmxdev_release;

 VAR_24 = VAR_23->add_frontend(VAR_23, &VAR_20->mem_frontend);
 if (VAR_24 < 0)
  goto err_remove_hw_frontend;

 VAR_24 = VAR_23->connect_frontend(VAR_23, &VAR_20->hw_frontend);
 if (VAR_24 < 0)
  goto err_remove_mem_frontend;

 VAR_24 = FUNC_9(VAR_20);
 if (VAR_24 < 0)
  goto err_disconnect_frontend;

 FUNC_5(VAR_21, &VAR_20->dvbnet, VAR_23);
out:
 return VAR_24;

err_disconnect_frontend:
 VAR_23->disconnect_frontend(VAR_23);
err_remove_mem_frontend:
 VAR_23->remove_frontend(VAR_23, &VAR_20->mem_frontend);
err_remove_hw_frontend:
 VAR_23->remove_frontend(VAR_23, &VAR_20->hw_frontend);
err_dvb_dmxdev_release:
 FUNC_4(&VAR_20->dmxdev);
err_dvb_dmx_release:
 FUNC_2(VAR_22);
err_dvb_unregister_adapter:
 FUNC_7(VAR_21);
err_i2c_del_adapter:
 FUNC_11(&VAR_20->i2c_adap);
err_pluto_hw_exit:
 FUNC_25(VAR_20);
err_free_irq:
 FUNC_8(VAR_18->irq, VAR_20);
err_pci_iounmap:
 FUNC_18(VAR_18, VAR_20->io_mem);
err_pci_release_regions:
 FUNC_19(VAR_18);
err_pci_disable_device:
 FUNC_15(VAR_18);
err_kfree:
 FUNC_13(VAR_20);
 goto out;
}
