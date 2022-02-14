
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {struct av7110* priv; } ;
struct TYPE_6__ {scalar_t__ eventw; scalar_t__ eventr; } ;
struct TYPE_5__ {int stream_source; } ;
struct TYPE_4__ {int AV_sync_state; } ;
struct av7110 {int video_blank; TYPE_3__ video_events; TYPE_2__ videostate; TYPE_1__ audiostate; int avout; int aout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,struct av7110*) ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 struct dvb_device *VAR_5 = VAR_4->private_data;
 struct av7110 *VAR_6 = VAR_5->priv;
 int VAR_7;

 FUNC_0(2, "av7110:%p, \n", VAR_6);

 if ((VAR_7 = FUNC_1(VAR_3, VAR_4)) < 0)
  return VAR_7;

 if ((VAR_4->f_flags & VAR_0) != VAR_1) {
  FUNC_2(&VAR_6->aout);
  FUNC_2(&VAR_6->avout);
  VAR_6->video_blank = 1;
  VAR_6->audiostate.AV_sync_state = 1;
  VAR_6->videostate.stream_source = VAR_2;


  VAR_6->video_events.eventr = VAR_6->video_events.eventw = 0;
 }

 return 0;
}
