
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl812_private {int dma; } ;
struct comedi_device {struct pcl812_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,int,unsigned int,unsigned int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2, unsigned int VAR_3)
{
 struct pcl812_private *VAR_4 = VAR_2->private;


 if (!(VAR_3 == 3 || VAR_3 == 1))
  return;


 VAR_4->dma = FUNC_0(VAR_2, 2, VAR_3, VAR_3,
        VAR_1 * 2, VAR_0);
}
