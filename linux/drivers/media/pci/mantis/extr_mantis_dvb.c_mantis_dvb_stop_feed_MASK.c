
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mantis_pci {scalar_t__ feeds; int tasklet; } ;
struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct TYPE_2__ {int frontend; } ;
struct dvb_demux {TYPE_1__ dmx; struct mantis_pci* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (struct mantis_pci*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_demux_feed *VAR_2)
{
 struct dvb_demux *VAR_3 = VAR_2->demux;
 struct mantis_pci *VAR_4 = VAR_3->priv;

 FUNC_0(VAR_1, 1, "Mantis DVB Stop feed");
 if (!VAR_3->dmx.frontend) {
  FUNC_0(VAR_1, 1, "no frontend ?");
  return -VAR_0;
 }

 VAR_4->feeds--;
 if (VAR_4->feeds == 0) {
  FUNC_0(VAR_1, 1, "mantis stop feed and dma");
  FUNC_2(&VAR_4->tasklet);
  FUNC_1(VAR_4);
 }

 return 0;
}
