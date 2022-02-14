
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct TYPE_2__ {int frontend; } ;
struct dvb_demux {TYPE_1__ dmx; struct cx231xx_dvb* priv; } ;
struct cx231xx_dvb {int nfeeds; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cx231xx_dvb*) ;

__attribute__((used)) static int FUNC_3(struct dvb_demux_feed *VAR_1)
{
 struct dvb_demux *VAR_2 = VAR_1->demux;
 struct cx231xx_dvb *VAR_3 = VAR_2->priv;
 int VAR_4, VAR_5;

 if (!VAR_2->dmx.frontend)
  return -VAR_0;

 FUNC_0(&VAR_3->lock);
 VAR_3->nfeeds++;
 VAR_4 = VAR_3->nfeeds;

 if (VAR_3->nfeeds == 1) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 < 0)
   VAR_4 = VAR_5;
 }

 FUNC_1(&VAR_3->lock);
 return VAR_4;
}
