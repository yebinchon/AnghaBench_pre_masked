
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
struct dvb_demux_feed {scalar_t__ type; int ts_type; size_t pes_type; TYPE_2__ feed; TYPE_5__* filter; struct dvb_demux* demux; } ;
struct TYPE_9__ {TYPE_3__* frontend; } ;
struct dvb_demux {int* pids; int filternum; TYPE_5__* filter; TYPE_4__ dmx; int ** pesfilter; struct av7110* priv; } ;
struct av7110 {scalar_t__ full_ts; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_10__ {scalar_t__ state; TYPE_1__ filter; } ;
struct TYPE_8__ {scalar_t__ source; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct dvb_demux_feed*) ;
 int FUNC_2 (int,char*,struct av7110*) ;
 int FUNC_3 (struct dvb_demux_feed*) ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_9)
{
 struct dvb_demux *VAR_10 = VAR_9->demux;
 struct av7110 *VAR_11 = VAR_10->priv;
 int VAR_12, VAR_13, VAR_14 = 0;
 FUNC_2(4, "%p\n", VAR_11);

 if (VAR_9->type == VAR_5) {
  if (VAR_9->ts_type & VAR_7) {
   if (VAR_9->pes_type >= VAR_1 ||
       !VAR_10->pesfilter[VAR_9->pes_type])
    return -VAR_6;
   VAR_10->pids[VAR_9->pes_type] |= 0x8000;
   VAR_10->pesfilter[VAR_9->pes_type] = ((void*)0);
  }
  if (VAR_9->ts_type & VAR_7 &&
      VAR_9->pes_type < VAR_1) {
   VAR_14 = FUNC_3(VAR_9);
  } else
   if ((VAR_9->ts_type & VAR_8) &&
       (VAR_10->dmx.frontend->source != VAR_0))
    VAR_14 = FUNC_0(VAR_9->filter);
 }

 if (VAR_11->full_ts) {
  FUNC_1(VAR_9);
  return VAR_14;
 }

 if (VAR_9->type == VAR_4) {
  for (VAR_12 = 0; VAR_12<VAR_10->filternum; VAR_12++) {
   if (VAR_10->filter[VAR_12].state == VAR_2 &&
       VAR_10->filter[VAR_12].filter.parent == &VAR_9->feed.sec) {
    VAR_10->filter[VAR_12].state = VAR_3;
    if (VAR_10->dmx.frontend->source != VAR_0) {
     VAR_13 = FUNC_0(&VAR_10->filter[VAR_12]);
     if (!VAR_14)
      VAR_14 = VAR_13;

    }
   }
  }
 }

 return VAR_14;
}
