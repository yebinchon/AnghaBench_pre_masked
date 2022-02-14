
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct dvb_demux_feed {int index; int pid; struct dvb_demux* demux; } ;
struct TYPE_5__ {int frontend; } ;
struct dvb_demux {TYPE_2__ dmx; scalar_t__ priv; } ;
struct cx18_stream {TYPE_3__* dvb; int s_flags; struct cx18* cx; } ;
struct cx18 {int serialize_lock; TYPE_1__* card; } ;
struct TYPE_6__ {scalar_t__ feeding; int feedlock; } ;
struct TYPE_4__ {int type; } ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*,int ) ;
 int FUNC_5 (struct cx18_stream*) ;
 int FUNC_6 (struct cx18*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct dvb_demux_feed *VAR_3)
{
 struct dvb_demux *VAR_4 = VAR_3->demux;
 struct cx18_stream *VAR_5 = (struct cx18_stream *) VAR_4->priv;
 struct cx18 *VAR_6;
 int VAR_7;
 u32 VAR_8;

 if (!VAR_5)
  return -VAR_2;

 VAR_6 = VAR_5->cx;
 FUNC_0("Start feed: pid = 0x%x index = %d\n",
   VAR_3->pid, VAR_3->index);

 FUNC_7(&VAR_6->serialize_lock);
 VAR_7 = FUNC_3(VAR_6);
 FUNC_8(&VAR_6->serialize_lock);
 if (VAR_7) {
  FUNC_1("Failed to initialize firmware starting DVB feed\n");
  return VAR_7;
 }
 VAR_7 = -VAR_2;

 switch (VAR_6->card->type) {
 case 132:
 case 130:
 case 131:
  VAR_8 = FUNC_4(VAR_6, VAR_1);
  VAR_8 |= 0x00400000;
  VAR_8 |= 0x00002000;
  VAR_8 |= 0x00010000;
  VAR_8 |= 0x00020000;
  VAR_8 |= 0x000c0000;
  FUNC_6(VAR_6, VAR_8, VAR_1);
  break;

 case 129:
 case 128:
 case 133:
 default:



  break;
 }

 if (!VAR_4->dmx.frontend)
  return -VAR_2;

 FUNC_7(&VAR_5->dvb->feedlock);
 if (VAR_5->dvb->feeding++ == 0) {
  FUNC_0("Starting Transport DMA\n");
  FUNC_7(&VAR_6->serialize_lock);
  FUNC_9(VAR_0, &VAR_5->s_flags);
  VAR_7 = FUNC_5(VAR_5);
  if (VAR_7 < 0) {
   FUNC_0("Failed to start Transport DMA\n");
   VAR_5->dvb->feeding--;
   if (VAR_5->dvb->feeding == 0)
    FUNC_2(VAR_0, &VAR_5->s_flags);
  }
  FUNC_8(&VAR_6->serialize_lock);
 } else
  VAR_7 = 0;
 FUNC_8(&VAR_5->dvb->feedlock);

 return VAR_7;
}
