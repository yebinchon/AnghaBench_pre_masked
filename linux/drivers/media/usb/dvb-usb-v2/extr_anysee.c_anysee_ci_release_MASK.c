
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct anysee_state {int ci; scalar_t__ ci_attached; } ;


 struct anysee_state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dvb_usb_device *VAR_0)
{
 struct anysee_state *VAR_1 = FUNC_0(VAR_0);


 if (VAR_1->ci_attached)
  FUNC_1(&VAR_1->ci);

 return;
}
