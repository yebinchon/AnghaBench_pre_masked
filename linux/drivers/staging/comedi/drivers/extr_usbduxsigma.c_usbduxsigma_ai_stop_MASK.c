
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {scalar_t__ ai_cmd_running; int n_ai_urbs; scalar_t__ ai_urbs; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0, int VAR_1)
{
 struct usbduxsigma_private *VAR_2 = VAR_0->private;

 if (VAR_1 && VAR_2->ai_urbs)
  FUNC_0(VAR_2->ai_urbs, VAR_2->n_ai_urbs);

 VAR_2->ai_cmd_running = 0;
}
