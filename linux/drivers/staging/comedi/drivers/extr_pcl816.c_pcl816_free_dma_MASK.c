
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl816_private {int dma; } ;
struct comedi_device {struct pcl816_private* private; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0)
{
 struct pcl816_private *VAR_1 = VAR_0->private;

 if (VAR_1)
  FUNC_0(VAR_1->dma);
}
