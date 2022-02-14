
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {int ai_cfg; } ;
struct comedi_subdevice {int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct pci9118_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_5,
    struct comedi_subdevice *VAR_6,
    struct comedi_insn *VAR_7,
    unsigned int *VAR_8)
{
 struct pci9118_private *VAR_9 = VAR_5->private;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;





 FUNC_5(VAR_5, VAR_6, 1, &VAR_7->chanspec, 0, 0);


 VAR_9->ai_cfg = VAR_0 | VAR_1;
 FUNC_2(VAR_9->ai_cfg, VAR_5->iobase + VAR_2);

 FUNC_3(VAR_5);

 for (VAR_12 = 0; VAR_12 < VAR_7->n; VAR_12++) {
  FUNC_4(VAR_5);

  VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_4, 0);
  if (VAR_11)
   return VAR_11;

  VAR_10 = FUNC_1(VAR_5->iobase + VAR_3);
  if (VAR_6->maxdata == 0xffff)
   VAR_8[VAR_12] = (VAR_10 & 0xffff) ^ 0x8000;
  else
   VAR_8[VAR_12] = (VAR_10 >> 4) & 0xfff;
 }

 return VAR_7->n;
}
