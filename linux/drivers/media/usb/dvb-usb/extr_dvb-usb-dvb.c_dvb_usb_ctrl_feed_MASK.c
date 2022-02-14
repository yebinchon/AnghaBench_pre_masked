
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* fe; } ;
struct dvb_usb_adapter {size_t active_fe; size_t num_frontends_initialized; int feedcount; TYPE_4__* fe_adap; TYPE_3__ props; } ;
struct dvb_demux_feed {int pid; int index; TYPE_1__* demux; } ;
struct TYPE_8__ {int stream; scalar_t__ pid_filtering; } ;
struct TYPE_6__ {int (* streaming_ctrl ) (struct dvb_usb_adapter*,int) ;int caps; int (* pid_filter_ctrl ) (struct dvb_usb_adapter*,scalar_t__) ;int (* pid_filter ) (struct dvb_usb_adapter*,int ,int ,int) ;} ;
struct TYPE_5__ {struct dvb_usb_adapter* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dvb_usb_adapter*,int) ;
 int FUNC_3 (struct dvb_usb_adapter*,int ,int ,int) ;
 int FUNC_4 (struct dvb_usb_adapter*,scalar_t__) ;
 int FUNC_5 (struct dvb_usb_adapter*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dvb_demux_feed *VAR_4, int VAR_5)
{
 struct dvb_usb_adapter *VAR_6 = VAR_4->demux->priv;
 int VAR_7, VAR_8;

 if (VAR_6 == ((void*)0))
  return -VAR_3;

 if ((VAR_6->active_fe < 0) ||
     (VAR_6->active_fe >= VAR_6->num_frontends_initialized)) {
  return -VAR_2;
 }

 VAR_7 = VAR_6->feedcount + (VAR_5 ? 1 : -1);


 if (VAR_7 == 0) {
  FUNC_0("stop feeding\n");
  FUNC_6(&VAR_6->fe_adap[VAR_6->active_fe].stream);

  if (VAR_6->props.fe[VAR_6->active_fe].streaming_ctrl != ((void*)0)) {
   VAR_8 = VAR_6->props.fe[VAR_6->active_fe].streaming_ctrl(VAR_6, 0);
   if (VAR_8 < 0) {
    FUNC_1("error while stopping stream.");
    return VAR_8;
   }
  }
 }

 VAR_6->feedcount = VAR_7;


 FUNC_0("setting pid (%s): %5d %04x at index %d '%s'\n",
  VAR_6->fe_adap[VAR_6->active_fe].pid_filtering ?
  "yes" : "no", VAR_4->pid, VAR_4->pid,
  VAR_4->index, VAR_5 ? "on" : "off");
 if (VAR_6->props.fe[VAR_6->active_fe].caps & VAR_0 &&
  VAR_6->fe_adap[VAR_6->active_fe].pid_filtering &&
  VAR_6->props.fe[VAR_6->active_fe].pid_filter != ((void*)0))
  VAR_6->props.fe[VAR_6->active_fe].pid_filter(VAR_6, VAR_4->index, VAR_4->pid, VAR_5);




 if (VAR_6->feedcount == VAR_5 && VAR_6->feedcount > 0) {
  FUNC_0("controlling pid parser\n");
  if (VAR_6->props.fe[VAR_6->active_fe].caps & VAR_0 &&
   VAR_6->props.fe[VAR_6->active_fe].caps &
   VAR_1 &&
   VAR_6->props.fe[VAR_6->active_fe].pid_filter_ctrl != ((void*)0)) {
   VAR_8 = VAR_6->props.fe[VAR_6->active_fe].pid_filter_ctrl(VAR_6,
    VAR_6->fe_adap[VAR_6->active_fe].pid_filtering);
   if (VAR_8 < 0) {
    FUNC_1("could not handle pid_parser");
    return VAR_8;
   }
  }
  FUNC_0("start feeding\n");
  if (VAR_6->props.fe[VAR_6->active_fe].streaming_ctrl != ((void*)0)) {
   VAR_8 = VAR_6->props.fe[VAR_6->active_fe].streaming_ctrl(VAR_6, 1);
   if (VAR_8 < 0) {
    FUNC_1("error while enabling fifo.");
    return VAR_8;
   }
  }

  FUNC_0("submitting all URBs\n");
  FUNC_7(&VAR_6->fe_adap[VAR_6->active_fe].stream);
 }
 return 0;
}
