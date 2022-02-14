
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl816_private {int ai_cmd_canceled; scalar_t__ ai_cmd_running; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; scalar_t__ iobase; struct pcl816_private* private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2)
{
 struct pcl816_private *VAR_3 = VAR_1->private;

 if (!VAR_3->ai_cmd_running)
  return 0;

 FUNC_1(0, VAR_1->iobase + VAR_0);
 FUNC_2(VAR_1);

 FUNC_0(VAR_1->pacer, 1, 2, 0);

 VAR_3->ai_cmd_running = 0;
 VAR_3->ai_cmd_canceled = 1;

 return 0;
}
