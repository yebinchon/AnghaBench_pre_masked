
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_port {int users; int DMA_MANAGEMENT; int tasklet; struct smi_dev* dev; } ;
struct smi_dev {int dummy; } ;
struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct dvb_demux {struct smi_port* priv; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct smi_port*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_demux_feed *VAR_0)
{
 struct dvb_demux *VAR_1 = VAR_0->demux;
 struct smi_port *VAR_2 = VAR_1->priv;
 struct smi_dev *VAR_3 = VAR_2->dev;

 if (--VAR_2->users)
  return VAR_2->users;

 FUNC_2(&VAR_2->tasklet);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2->DMA_MANAGEMENT, 0x30003);
 return 0;
}
