
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcl812_private {int mode_reg_int; TYPE_1__* dma; scalar_t__ ai_dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; scalar_t__ iobase; struct pcl812_private* private; } ;
struct TYPE_2__ {int chan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3)
{
 struct pcl812_private *VAR_4 = VAR_2->private;

 if (VAR_4->ai_dma)
  FUNC_1(VAR_4->dma->chan);

 FUNC_2(VAR_4->mode_reg_int | VAR_0,
      VAR_2->iobase + VAR_1);
 FUNC_0(VAR_2->pacer, 1, 2, 0);
 FUNC_3(VAR_2);
 return 0;
}
