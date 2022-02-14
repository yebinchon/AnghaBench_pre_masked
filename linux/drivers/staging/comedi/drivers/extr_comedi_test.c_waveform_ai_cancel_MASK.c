
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waveform_private {int ai_timer; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct waveform_private* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1)
{
 struct waveform_private *VAR_2 = VAR_0->private;

 if (FUNC_2()) {

  FUNC_0(&VAR_2->ai_timer);
 } else {
  FUNC_1(&VAR_2->ai_timer);
 }
 return 0;
}
