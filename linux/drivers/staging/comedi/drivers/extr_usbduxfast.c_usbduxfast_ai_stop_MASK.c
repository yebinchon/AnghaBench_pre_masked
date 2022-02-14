
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxfast_private {scalar_t__ urb; scalar_t__ ai_cmd_running; } ;
struct comedi_device {struct usbduxfast_private* private; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0, int VAR_1)
{
 struct usbduxfast_private *VAR_2 = VAR_0->private;


 VAR_2->ai_cmd_running = 0;

 if (VAR_1 && VAR_2->urb) {

  FUNC_0(VAR_2->urb);
 }

 return 0;
}
