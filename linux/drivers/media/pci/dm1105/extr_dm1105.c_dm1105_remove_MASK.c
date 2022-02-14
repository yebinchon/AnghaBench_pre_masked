
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct dmx_demux {int (* remove_frontend ) (struct dmx_demux*,int *) ;int (* disconnect_frontend ) (struct dmx_demux*) ;int (* close ) (struct dmx_demux*) ;} ;
struct dvb_demux {struct dmx_demux dmx; } ;
struct dvb_adapter {int dummy; } ;
struct dm1105_dev {int io_mem; int i2c_adap; int dmxdev; int hw_frontend; int mem_frontend; scalar_t__ fe; int dvbnet; struct dvb_demux demux; struct dvb_adapter dvb_adapter; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm1105_dev*) ;
 int FUNC_1 (struct dm1105_dev*) ;
 int FUNC_2 (struct dvb_demux*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dvb_adapter*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,struct dm1105_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct dm1105_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 struct dm1105_dev* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct dmx_demux*) ;
 int FUNC_15 (struct dmx_demux*) ;
 int FUNC_16 (struct dmx_demux*,int *) ;
 int FUNC_17 (struct dmx_demux*,int *) ;

__attribute__((used)) static void FUNC_18(struct pci_dev *VAR_1)
{
 struct dm1105_dev *VAR_2 = FUNC_11(VAR_1);
 struct dvb_adapter *VAR_3 = &VAR_2->dvb_adapter;
 struct dvb_demux *VAR_4 = &VAR_2->demux;
 struct dmx_demux *VAR_5 = &VAR_4->dmx;

 FUNC_1(VAR_2);
 VAR_5->close(VAR_5);
 FUNC_4(&VAR_2->dvbnet);
 if (VAR_2->fe)
  FUNC_6(VAR_2->fe);

 VAR_5->disconnect_frontend(VAR_5);
 VAR_5->remove_frontend(VAR_5, &VAR_2->mem_frontend);
 VAR_5->remove_frontend(VAR_5, &VAR_2->hw_frontend);
 FUNC_3(&VAR_2->dmxdev);
 FUNC_2(VAR_4);
 FUNC_5(VAR_3);
 FUNC_8(&VAR_2->i2c_adap);

 FUNC_0(VAR_2);
 FUNC_7(VAR_1->irq, VAR_2);
 FUNC_12(VAR_1, VAR_2->io_mem);
 FUNC_13(VAR_1);
 FUNC_10(VAR_1);
 VAR_0--;
 FUNC_9(VAR_2);
}
