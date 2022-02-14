
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waveform_private {int ao_timer; int ai_timer; } ;
struct comedi_device {struct waveform_private* private; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0)
{
 struct waveform_private *VAR_1 = VAR_0->private;

 if (VAR_1) {
  FUNC_0(&VAR_1->ai_timer);
  FUNC_0(&VAR_1->ao_timer);
 }
}
