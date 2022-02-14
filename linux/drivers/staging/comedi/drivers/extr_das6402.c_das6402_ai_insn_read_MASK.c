
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_5 (struct comedi_device*) ;
 int VAR_6 ;
 unsigned int FUNC_6 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;
 int FUNC_8 (struct comedi_device*) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_7,
    struct comedi_subdevice *VAR_8,
    struct comedi_insn *VAR_9,
    unsigned int *VAR_10)
{
 unsigned int VAR_11 = FUNC_1(VAR_9->chanspec);
 unsigned int VAR_12 = FUNC_0(VAR_9->chanspec);
 int VAR_13;
 int VAR_14;

 if (VAR_12 == VAR_0 && VAR_11 > (VAR_8->n_chan / 2))
  return -VAR_5;


 FUNC_9(VAR_3, VAR_7->iobase + VAR_2);

 FUNC_7(VAR_7, VAR_8, VAR_9->chanspec, VAR_4);


 FUNC_10(FUNC_2(VAR_11) | FUNC_3(VAR_11),
      VAR_7->iobase + VAR_1);

 for (VAR_14 = 0; VAR_14 < VAR_9->n; VAR_14++) {
  FUNC_5(VAR_7);
  FUNC_8(VAR_7);

  VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_9, VAR_6, 0);
  if (VAR_13)
   break;

  VAR_10[VAR_14] = FUNC_6(VAR_7, VAR_8);
 }

 FUNC_5(VAR_7);

 return VAR_9->n;
}
