
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_2__* fe_adap; struct dibusb_state* priv; } ;
struct TYPE_3__ {scalar_t__ (* pid_parse ) (int ,int) ;} ;
struct dibusb_state {TYPE_1__ ops; } ;
struct TYPE_4__ {int fe; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int) ;

int FUNC_2(struct dvb_usb_adapter *VAR_0, int VAR_1)
{
 if (VAR_0->priv != ((void*)0)) {
  struct dibusb_state *VAR_2 = VAR_0->priv;
  if (VAR_2->ops.pid_parse != ((void*)0))
   if (VAR_2->ops.pid_parse(VAR_0->fe_adap[0].fe, VAR_1) < 0)
    FUNC_0("could not handle pid_parser");
 }
 return 0;
}
