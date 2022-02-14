
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* pid_filter_ctrl ) (int ,int) ;} ;
struct state {TYPE_1__ ops; } ;
struct dvb_usb_adapter {int * fe; } ;


 struct state* FUNC_0 (struct dvb_usb_adapter*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_0, int VAR_1)
{
 struct state *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->ops.pid_filter_ctrl(VAR_0->fe[0], VAR_1);
}
