
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct dvb_demux {struct ddb_input* priv; } ;
struct ddb_input {int nr; TYPE_1__* port; } ;
struct ddb_dvb {int users; } ;
struct TYPE_2__ {struct ddb_dvb* dvb; } ;


 int FUNC_0 (struct ddb_input*) ;

__attribute__((used)) static int FUNC_1(struct dvb_demux_feed *VAR_0)
{
 struct dvb_demux *VAR_1 = VAR_0->demux;
 struct ddb_input *VAR_2 = VAR_1->priv;
 struct ddb_dvb *VAR_3 = &VAR_2->port->dvb[VAR_2->nr & 1];

 if (--VAR_3->users)
  return VAR_3->users;

 FUNC_0(VAR_2);
 return 0;
}
