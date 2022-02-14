
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmx_demux {int (* remove_frontend ) (struct dmx_demux*,int *) ;int (* disconnect_frontend ) (struct dmx_demux*) ;int (* close ) (struct dmx_demux*) ;} ;
struct dvb_demux {struct dmx_demux dmx; } ;
struct dvb_adapter {int dummy; } ;
struct pluto {int io_mem; int i2c_adap; int dmxdev; int hw_frontend; int mem_frontend; scalar_t__ fe; int dvbnet; struct dvb_demux demux; struct dvb_adapter dvb_adapter; } ;
struct pci_dev {int irq; } ;


 int FUNC_0 (struct dvb_demux*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dvb_adapter*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,struct pluto*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pluto*) ;
 int FUNC_8 (struct pci_dev*) ;
 struct pluto* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pluto*) ;
 int FUNC_13 (struct dmx_demux*) ;
 int FUNC_14 (struct dmx_demux*) ;
 int FUNC_15 (struct dmx_demux*,int *) ;
 int FUNC_16 (struct dmx_demux*,int *) ;

__attribute__((used)) static void FUNC_17(struct pci_dev *VAR_0)
{
 struct pluto *VAR_1 = FUNC_9(VAR_0);
 struct dvb_adapter *VAR_2 = &VAR_1->dvb_adapter;
 struct dvb_demux *VAR_3 = &VAR_1->demux;
 struct dmx_demux *VAR_4 = &VAR_3->dmx;

 VAR_4->close(VAR_4);
 FUNC_2(&VAR_1->dvbnet);
 if (VAR_1->fe)
  FUNC_4(VAR_1->fe);

 VAR_4->disconnect_frontend(VAR_4);
 VAR_4->remove_frontend(VAR_4, &VAR_1->mem_frontend);
 VAR_4->remove_frontend(VAR_4, &VAR_1->hw_frontend);
 FUNC_1(&VAR_1->dmxdev);
 FUNC_0(VAR_3);
 FUNC_3(VAR_2);
 FUNC_6(&VAR_1->i2c_adap);
 FUNC_12(VAR_1);
 FUNC_5(VAR_0->irq, VAR_1);
 FUNC_10(VAR_0, VAR_1->io_mem);
 FUNC_11(VAR_0);
 FUNC_8(VAR_0);
 FUNC_7(VAR_1);
}
