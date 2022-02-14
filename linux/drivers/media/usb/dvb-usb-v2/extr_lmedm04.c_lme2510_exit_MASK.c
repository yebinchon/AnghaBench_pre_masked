
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lme2510_state {scalar_t__ lme_urb; } ;
struct dvb_usb_device {struct dvb_usb_adapter* adapter; struct lme2510_state* priv; } ;
struct dvb_usb_adapter {int stream; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct dvb_usb_device *VAR_0)
{
 struct lme2510_state *VAR_1 = VAR_0->priv;
 struct dvb_usb_adapter *VAR_2 = &VAR_0->adapter[0];

 if (VAR_2 != ((void*)0)) {
  FUNC_1(&VAR_2->stream);
 }

 if (VAR_1->lme_urb) {
  FUNC_3(VAR_1->lme_urb);
  FUNC_2(VAR_1->lme_urb);
  FUNC_0("Interrupt Service Stopped");
 }
}
