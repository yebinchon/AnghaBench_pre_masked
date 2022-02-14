
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct dvb_demux {struct cx231xx_dvb* priv; } ;
struct cx231xx_dvb {scalar_t__ nfeeds; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cx231xx_dvb*) ;

__attribute__((used)) static int FUNC_3(struct dvb_demux_feed *VAR_0)
{
 struct dvb_demux *VAR_1 = VAR_0->demux;
 struct cx231xx_dvb *VAR_2 = VAR_1->priv;
 int VAR_3 = 0;

 FUNC_0(&VAR_2->lock);
 VAR_2->nfeeds--;

 if (0 == VAR_2->nfeeds)
  VAR_3 = FUNC_2(VAR_2);

 FUNC_1(&VAR_2->lock);
 return VAR_3;
}
