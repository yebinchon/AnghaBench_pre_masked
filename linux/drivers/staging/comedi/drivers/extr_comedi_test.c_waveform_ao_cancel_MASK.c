
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct waveform_private {int ao_timer; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct waveform_private* private; } ;
struct TYPE_2__ {int * inttrig; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1)
{
 struct waveform_private *VAR_2 = VAR_0->private;

 VAR_1->async->inttrig = ((void*)0);
 if (FUNC_2()) {

  FUNC_0(&VAR_2->ao_timer);
 } else {
  FUNC_1(&VAR_2->ao_timer);
 }
 return 0;
}
