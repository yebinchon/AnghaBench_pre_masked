
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int clock_ns; } ;
struct comedi_device {struct ni_private* private; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct comedi_device *VAR_0, int VAR_1)
{
 struct ni_private *VAR_2 = VAR_0->private;

 return VAR_2->clock_ns * (VAR_1 + 1);
}
