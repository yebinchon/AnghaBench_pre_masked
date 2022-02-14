
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ ai_cmd_running; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; struct pcidas64_private* private; } ;


 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1)
{
 struct pcidas64_private *VAR_2 = VAR_0->private;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->spinlock, VAR_3);
 if (VAR_2->ai_cmd_running == 0) {
  FUNC_3(&VAR_0->spinlock, VAR_3);
  return 0;
 }
 VAR_2->ai_cmd_running = 0;
 FUNC_3(&VAR_0->spinlock, VAR_3);

 FUNC_1(VAR_0);

 FUNC_0(VAR_0, 1);

 return 0;
}
