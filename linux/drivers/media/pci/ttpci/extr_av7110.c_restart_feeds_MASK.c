
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sec; } ;
struct dvb_demux_feed {scalar_t__ state; scalar_t__ type; TYPE_2__ feed; } ;
struct dvb_demux {int feednum; int filternum; TYPE_3__* filter; struct dvb_demux_feed* feed; } ;
struct av7110 {int playing; int feeding1; scalar_t__ rec_mode; struct dvb_demux demux; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ state; TYPE_1__ filter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct av7110*,int) ;
 int FUNC_1 (struct dvb_demux_feed*) ;
 int FUNC_2 (int,char*,struct av7110*) ;

__attribute__((used)) static void FUNC_3(struct av7110 *VAR_3)
{
 struct dvb_demux *VAR_4 = &VAR_3->demux;
 struct dvb_demux_feed *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;

 FUNC_2(4, "%p\n", VAR_3);

 VAR_6 = VAR_3->playing;
 VAR_3->playing = 0;
 VAR_3->rec_mode = 0;

 VAR_7 = VAR_3->feeding1;

 for (VAR_8 = 0; VAR_8 < VAR_4->feednum; VAR_8++) {
  VAR_5 = &VAR_4->feed[VAR_8];
  if (VAR_5->state == VAR_0) {
   if (VAR_5->type == VAR_2) {
    for (VAR_9 = 0; VAR_9 < VAR_4->filternum; VAR_9++) {
     if (VAR_4->filter[VAR_9].type != VAR_2)
      continue;
     if (VAR_4->filter[VAR_9].filter.parent != &VAR_5->feed.sec)
      continue;
     if (VAR_4->filter[VAR_9].state == VAR_0)
      VAR_4->filter[VAR_9].state = VAR_1;
    }
   }
   FUNC_1(VAR_5);
  }
 }

 VAR_3->feeding1 = VAR_7;

 if (VAR_6)
  FUNC_0(VAR_3, VAR_6);
}
