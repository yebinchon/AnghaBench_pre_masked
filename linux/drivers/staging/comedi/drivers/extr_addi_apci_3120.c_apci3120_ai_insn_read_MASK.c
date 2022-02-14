
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct apci3120_private* private; } ;
struct apci3120_private {int mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct comedi_device*,int ,int,int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int,int *) ;
 int FUNC_2 (struct comedi_device*,int ,int) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;
 int FUNC_4 (struct comedi_device*,int ,unsigned int) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_7,
     struct comedi_subdevice *VAR_8,
     struct comedi_insn *VAR_9,
     unsigned int *VAR_10)
{
 struct apci3120_private *VAR_11 = VAR_7->private;
 unsigned int VAR_12;
 int VAR_13;
 int VAR_14;


 VAR_11->mode = VAR_3 |
   VAR_2;
 FUNC_7(VAR_11->mode, VAR_7->iobase + VAR_1);


 FUNC_1(VAR_7, VAR_8, 1, &VAR_9->chanspec);







 FUNC_3(VAR_7, 0, VAR_4);
 FUNC_2(VAR_7, 0, 1);


 VAR_12 = FUNC_0(VAR_7, 0, 10000, VAR_5);

 for (VAR_14 = 0; VAR_14 < VAR_9->n; VAR_14++) {

  FUNC_4(VAR_7, 0, VAR_12);

  VAR_13 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_6, 0);
  if (VAR_13)
   return VAR_13;

  VAR_10[VAR_14] = FUNC_6(VAR_7->iobase + VAR_0);
 }

 return VAR_9->n;
}
