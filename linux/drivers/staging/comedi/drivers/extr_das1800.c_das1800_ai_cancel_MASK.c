
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_private {struct comedi_isadma* dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_isadma_desc {scalar_t__ chan; } ;
struct comedi_isadma {struct comedi_isadma_desc* desc; } ;
struct comedi_device {scalar_t__ iobase; struct das1800_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4)
{
 struct das1800_private *VAR_5 = VAR_3->private;
 struct comedi_isadma *VAR_6 = VAR_5->dma;
 struct comedi_isadma_desc *VAR_7;
 int VAR_8;


 FUNC_1(0x0, VAR_3->iobase + VAR_2);
 FUNC_1(0x0, VAR_3->iobase + VAR_1);
 FUNC_1(0x0, VAR_3->iobase + VAR_0);

 if (VAR_6) {
  for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
   VAR_7 = &VAR_6->desc[VAR_8];
   if (VAR_7->chan)
    FUNC_0(VAR_7->chan);
  }
 }

 return 0;
}
