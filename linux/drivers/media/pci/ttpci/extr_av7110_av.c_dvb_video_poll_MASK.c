
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {struct av7110* priv; } ;
struct TYPE_4__ {scalar_t__ eventw; scalar_t__ eventr; int wait_queue; } ;
struct TYPE_3__ {int queue; } ;
struct av7110 {scalar_t__ playing; TYPE_2__ video_events; TYPE_1__ avout; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,struct av7110*) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_6, poll_table *VAR_7)
{
 struct dvb_device *VAR_8 = VAR_6->private_data;
 struct av7110 *VAR_9 = VAR_8->priv;
 __poll_t VAR_10 = 0;

 FUNC_0(2, "av7110:%p, \n", VAR_9);

 if ((VAR_6->f_flags & VAR_4) != VAR_5)
  FUNC_1(VAR_6, &VAR_9->avout.queue, VAR_7);

 FUNC_1(VAR_6, &VAR_9->video_events.wait_queue, VAR_7);

 if (VAR_9->video_events.eventw != VAR_9->video_events.eventr)
  VAR_10 = VAR_1;

 if ((VAR_6->f_flags & VAR_4) != VAR_5) {
  if (VAR_9->playing) {
   if (VAR_3)
    VAR_10 |= (VAR_0 | VAR_2);
  } else {

   VAR_10 |= (VAR_0 | VAR_2);
  }
 }

 return VAR_10;
}
