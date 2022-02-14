
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {TYPE_1__* af9033_config; } ;
struct dvb_usb_device {int dummy; } ;
struct TYPE_2__ {int tuner; } ;




 int FUNC_0 (struct dvb_usb_device*,int,int) ;
 int FUNC_1 (struct dvb_usb_device*,int,int) ;
 struct state* FUNC_2 (struct dvb_usb_device*) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_0, int VAR_1, int VAR_2)
{
 struct state *VAR_3 = FUNC_2(VAR_0);

 switch (VAR_3->af9033_config[0].tuner) {
 case 129:
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 case 128:
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 default:
  break;
 }

 return 0;
}
