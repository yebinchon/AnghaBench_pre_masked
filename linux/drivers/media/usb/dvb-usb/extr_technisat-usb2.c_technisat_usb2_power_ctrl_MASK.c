
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct technisat_usb2_state {int power_state; } ;
struct dvb_usb_device {struct technisat_usb2_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_3, int VAR_4)
{
 struct technisat_usb2_state *VAR_5 = VAR_3->priv;

 VAR_5->power_state = VAR_4;

 if (VAR_2)
  return 0;


 FUNC_0(VAR_3, 0, VAR_0);

 FUNC_0(VAR_3, 1, VAR_1);
 return 0;
}
