
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sec; } ;
struct dvb_demux_feed {int pid; scalar_t__ type; int ts_type; scalar_t__ pes_type; TYPE_2__ feed; TYPE_5__* filter; struct dvb_demux* demux; } ;
struct TYPE_9__ {TYPE_3__* frontend; } ;
struct dvb_demux {int* pids; int playing; int filternum; TYPE_5__* filter; TYPE_4__ dmx; struct av7110* priv; } ;
struct av7110 {scalar_t__ full_ts; int aout; int avout; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_10__ {scalar_t__ state; scalar_t__ type; TYPE_1__ filter; } ;
struct TYPE_8__ {int source; } ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct av7110*,int ) ;
 int FUNC_2 (struct dvb_demux_feed*) ;
 int FUNC_3 (int,char*,struct av7110*) ;
 int FUNC_4 (struct dvb_demux_feed*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dvb_demux_feed *VAR_9)
{
 struct dvb_demux *VAR_10 = VAR_9->demux;
 struct av7110 *VAR_11 = VAR_10->priv;
 int VAR_12 = 0;

 FUNC_3(4, "%p\n", VAR_11);

 if (!VAR_10->dmx.frontend)
  return -VAR_5;

 if (!VAR_11->full_ts && VAR_9->pid > 0x1fff)
  return -VAR_5;

 if (VAR_9->type == VAR_4) {
  if ((VAR_9->ts_type & VAR_7) &&
      (VAR_9->pes_type <= VAR_0)) {
   switch (VAR_10->dmx.frontend->source) {
   case 128:
    if (VAR_9->ts_type & VAR_7)
           if (VAR_9->pes_type < 2 &&
        !(VAR_10->pids[0] & 0x8000) &&
        !(VAR_10->pids[1] & 0x8000)) {
            FUNC_5(&VAR_11->avout);
            FUNC_5(&VAR_11->aout);
            VAR_12 = FUNC_1(VAR_11,VAR_6);
            if (!VAR_12)
             VAR_10->playing = 1;
     }
    break;
   default:
    VAR_12 = FUNC_4(VAR_9);
    break;
   }
  } else if ((VAR_9->ts_type & VAR_8) &&
      (VAR_10->dmx.frontend->source != 128)) {
   VAR_12 = FUNC_0(VAR_9->filter);
  }
 }

 if (VAR_11->full_ts) {
  FUNC_2(VAR_9);
  return VAR_12;
 }

 if (VAR_9->type == VAR_3) {
  int VAR_13;

  for (VAR_13 = 0; VAR_13 < VAR_10->filternum; VAR_13++) {
   if (VAR_10->filter[VAR_13].state != VAR_2)
    continue;
   if (VAR_10->filter[VAR_13].type != VAR_3)
    continue;
   if (VAR_10->filter[VAR_13].filter.parent != &VAR_9->feed.sec)
    continue;
   VAR_10->filter[VAR_13].state = VAR_1;
   if (VAR_10->dmx.frontend->source != 128) {
    VAR_12 = FUNC_0(&VAR_10->filter[VAR_13]);
    if (VAR_12)
     break;
   }
  }
 }

 return VAR_12;
}
