
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smi_port {int users; int tasklet; int DMA_MANAGEMENT; struct smi_dev* dev; } ;
struct smi_dev {int dummy; } ;
struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct dvb_demux {struct smi_port* priv; } ;


 int FUNC_0 (struct smi_port*) ;
 int FUNC_1 (struct smi_port*) ;
 int FUNC_2 (struct smi_port*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_demux_feed *VAR_0)
{
 struct dvb_demux *VAR_1 = VAR_0->demux;
 struct smi_port *VAR_2 = VAR_1->priv;
 struct smi_dev *VAR_3 = VAR_2->dev;
 u32 VAR_4;

 if (VAR_2->users++ == 0) {
  VAR_4 = FUNC_0(VAR_2);
  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
  FUNC_3(VAR_2->DMA_MANAGEMENT, VAR_4);
  FUNC_4(&VAR_2->tasklet);
 }
 return VAR_2->users;
}
