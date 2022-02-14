
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned char VAR_0 ;
 unsigned char FUNC_0 (unsigned int) ;
 unsigned char VAR_1 ;
 unsigned char FUNC_1 (unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_4 ;
 unsigned int FUNC_4 (struct comedi_subdevice*,unsigned int) ;
 scalar_t__ FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 unsigned int FUNC_8 (scalar_t__) ;
 int FUNC_9 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6,
          struct comedi_insn *VAR_7,
          unsigned int *VAR_8)
{
 unsigned int VAR_9 = FUNC_2(VAR_7->chanspec);
 unsigned int VAR_10 = FUNC_3(VAR_7->chanspec);
 unsigned int VAR_11;
 unsigned char VAR_12;
 int VAR_13;
 int VAR_14;





 VAR_12 = VAR_1 | VAR_0 |
    FUNC_1(VAR_10) | FUNC_0(VAR_9);


 FUNC_7(VAR_5->iobase + VAR_3);

 for (VAR_14 = 0; VAR_14 < VAR_7->n; VAR_14++) {

  FUNC_9(VAR_12, VAR_5->iobase + VAR_2);


  VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_4, 0);
  if (VAR_13)
   return VAR_13;

  VAR_11 = FUNC_8(VAR_5->iobase + VAR_2) & VAR_6->maxdata;


  if (FUNC_5(VAR_6, VAR_10))
   VAR_11 = FUNC_4(VAR_6, VAR_11);

  VAR_8[VAR_14] = VAR_11;
 }

 return VAR_7->n;
}
