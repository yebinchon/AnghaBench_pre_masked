
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int num_frontends; TYPE_3__* fe; } ;
struct dvb_usb_adapter {TYPE_4__ props; TYPE_2__* fe_adap; TYPE_1__* dev; } ;
struct TYPE_10__ {struct dvb_usb_adapter* user_priv; int complete; int udev; } ;
struct TYPE_8__ {int caps; int stream; } ;
struct TYPE_7__ {TYPE_5__ stream; } ;
struct TYPE_6__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int *) ;

int FUNC_1(struct dvb_usb_adapter *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5->props.num_frontends; VAR_6++) {

  VAR_5->fe_adap[VAR_6].stream.udev = VAR_5->dev->udev;
  if (VAR_5->props.fe[VAR_6].caps & VAR_0)
   VAR_5->fe_adap[VAR_6].stream.complete =
    VAR_3;
  else
  if (VAR_5->props.fe[VAR_6].caps & VAR_1)
   VAR_5->fe_adap[VAR_6].stream.complete =
    VAR_4;
  else
  VAR_5->fe_adap[VAR_6].stream.complete = VAR_2;
  VAR_5->fe_adap[VAR_6].stream.user_priv = VAR_5;
  VAR_7 = FUNC_0(&VAR_5->fe_adap[VAR_6].stream,
       &VAR_5->props.fe[VAR_6].stream);
  if (VAR_7 < 0)
   break;
 }
 return VAR_7;
}
