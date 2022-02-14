
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_frontends; } ;
struct dvb_usb_adapter {TYPE_2__* fe_adap; TYPE_1__ props; } ;
struct TYPE_4__ {int stream; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct dvb_usb_adapter *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->props.num_frontends; VAR_1++)
  FUNC_0(&VAR_0->fe_adap[VAR_1].stream);
 return 0;
}
