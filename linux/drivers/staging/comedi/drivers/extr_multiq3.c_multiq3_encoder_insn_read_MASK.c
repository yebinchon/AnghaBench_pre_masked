
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5,
         struct comedi_subdevice *VAR_6,
         struct comedi_insn *VAR_7,
         unsigned int *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_7->chanspec);
 unsigned int VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_7->n; VAR_11++) {

  FUNC_3(VAR_5, VAR_1 |
          FUNC_1(VAR_9));


  FUNC_4(VAR_0, VAR_5->iobase + VAR_2);


  FUNC_4(VAR_4, VAR_5->iobase + VAR_2);


  VAR_10 = FUNC_2(VAR_5->iobase + VAR_3);
  VAR_10 |= (FUNC_2(VAR_5->iobase + VAR_3) << 8);
  VAR_10 |= (FUNC_2(VAR_5->iobase + VAR_3) << 16);
  VAR_8[VAR_11] = (VAR_10 + ((VAR_6->maxdata + 1) >> 1)) & VAR_6->maxdata;
 }

 return VAR_7->n;
}
