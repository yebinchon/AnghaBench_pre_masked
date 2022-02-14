
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {int dummy; } ;
struct av7110_p2t {struct dvb_demux_feed* feed; scalar_t__ frags; scalar_t__ pos; scalar_t__ counter; int pes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct av7110_p2t *VAR_1, struct dvb_demux_feed *VAR_2)
{
 FUNC_0(VAR_1->pes, 0, VAR_0);
 VAR_1->counter = 0;
 VAR_1->pos = 0;
 VAR_1->frags = 0;
 if (VAR_2)
  VAR_1->feed = VAR_2;
}
