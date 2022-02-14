
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {int num_frontends_initialized; TYPE_1__* fe_adap; } ;
struct TYPE_2__ {int * fe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct dvb_usb_adapter *VAR_0)
{
 int VAR_1 = VAR_0->num_frontends_initialized - 1;


 for (; VAR_1 >= 0; VAR_1--) {
  if (VAR_0->fe_adap[VAR_1].fe != ((void*)0)) {
   FUNC_1(VAR_0->fe_adap[VAR_1].fe);
   FUNC_0(VAR_0->fe_adap[VAR_1].fe);
  }
 }
 VAR_0->num_frontends_initialized = 0;

 return 0;
}
