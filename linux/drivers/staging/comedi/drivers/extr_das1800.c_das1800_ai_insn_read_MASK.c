
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned short FUNC_1 (struct comedi_subdevice*,unsigned short) ;
 int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_4 (struct comedi_subdevice*,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct comedi_device*,int *,int) ;
 unsigned short FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_9,
    struct comedi_subdevice *VAR_10,
    struct comedi_insn *VAR_11,
    unsigned int *VAR_12)
{
 unsigned int VAR_13 = FUNC_0(VAR_11->chanspec);
 bool VAR_14 = FUNC_2(VAR_10, VAR_13);
 int VAR_15 = 0;
 int VAR_16;
 unsigned short VAR_17;
 unsigned long VAR_18;

 FUNC_7(FUNC_4(VAR_10, VAR_11->chanspec),
      VAR_9->iobase + VAR_3);
 FUNC_7(VAR_1, VAR_9->iobase + VAR_6);
 FUNC_7(0x0, VAR_9->iobase + VAR_2);
 FUNC_7(VAR_7, VAR_9->iobase + VAR_2);

 FUNC_5(VAR_9, &VAR_11->chanspec, 1);


 FUNC_8(&VAR_9->spinlock, VAR_18);


 FUNC_7(VAR_0, VAR_9->iobase + VAR_5);

 for (VAR_16 = 0; VAR_16 < VAR_11->n; VAR_16++) {

  FUNC_7(0, VAR_9->iobase + VAR_4);

  VAR_15 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_8, 0);
  if (VAR_15)
   break;

  VAR_17 = FUNC_6(VAR_9->iobase + VAR_4);
  if (!VAR_14)
   VAR_17 = FUNC_1(VAR_10, VAR_17);
  VAR_12[VAR_16] = VAR_17;
 }
 FUNC_9(&VAR_9->spinlock, VAR_18);

 return VAR_15 ? VAR_15 : VAR_11->n;
}
