
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
struct ttusb2_state {TYPE_1__ ca; } ;
struct dvb_usb_device {struct ttusb2_state* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dvb_usb_device *VAR_0)
{
 struct ttusb2_state *VAR_1;

 FUNC_0("");

 if (((void*)0) == VAR_0)
  return;

 VAR_1 = VAR_0->priv;
 if (((void*)0) == VAR_1)
  return;

 if (((void*)0) == VAR_1->ca.data)
  return;

 FUNC_1(&VAR_1->ca);

 FUNC_2(&VAR_1->ca, 0, sizeof(VAR_1->ca));
}
