
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_usb_device {int num_adapters_initialized; int state; TYPE_1__* adapter; } ;
struct TYPE_4__ {int priv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_adapters_initialized; VAR_2++) {
  FUNC_1(&VAR_1->adapter[VAR_2]);
  FUNC_0(&VAR_1->adapter[VAR_2]);
  FUNC_2(&VAR_1->adapter[VAR_2]);
  FUNC_3(VAR_1->adapter[VAR_2].priv);
 }
 VAR_1->num_adapters_initialized = 0;
 VAR_1->state &= ~VAR_0;
 return 0;
}
