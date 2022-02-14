
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s526_private {unsigned int* gpct_config; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct s526_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;



 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_16,
     struct comedi_subdevice *VAR_17,
     struct comedi_insn *VAR_18,
     unsigned int *VAR_19)
{
 struct s526_private *VAR_20 = VAR_16->private;
 unsigned int VAR_21 = FUNC_0(VAR_18->chanspec);
 unsigned int VAR_22;





 switch (VAR_19[0]) {
 case 129:






  VAR_20->gpct_config[VAR_21] = VAR_19[0];



  VAR_22 = VAR_19[1] & 0xffff;
  FUNC_3(VAR_22, VAR_16->iobase + FUNC_2(VAR_21));


  if ((VAR_22 & VAR_7) ==
      VAR_8) {

   FUNC_3(VAR_5,
        VAR_16->iobase + FUNC_1(VAR_21));





  }
  break;

 case 128:







  VAR_20->gpct_config[VAR_21] = VAR_19[0];


  VAR_22 = VAR_19[1] & 0xffff;

  VAR_22 &= ~VAR_13;
  VAR_22 |= VAR_14;
  FUNC_3(VAR_22, VAR_16->iobase + FUNC_2(VAR_21));


  FUNC_4(VAR_16, VAR_21, VAR_19[2]);


  VAR_22 = VAR_19[1] & 0xffff;

  VAR_22 &= ~VAR_13;
  VAR_22 |= VAR_15;
  FUNC_3(VAR_22, VAR_16->iobase + FUNC_2(VAR_21));


  FUNC_4(VAR_16, VAR_21, VAR_19[3]);


  if (VAR_19[4]) {
   VAR_22 = VAR_19[4] & 0xffff;
   FUNC_3(VAR_22, VAR_16->iobase + FUNC_1(VAR_21));
  }
  break;

 case 130:







  VAR_20->gpct_config[VAR_21] = VAR_19[0];


  VAR_22 = VAR_19[1] & 0xffff;

  VAR_22 &= ~VAR_13;
  VAR_22 |= VAR_14;
  FUNC_3(VAR_22, VAR_16->iobase + FUNC_2(VAR_21));


  FUNC_4(VAR_16, VAR_21, VAR_19[2]);


  VAR_22 = VAR_19[1] & 0xffff;

  VAR_22 &= ~VAR_13;
  VAR_22 |= VAR_15;
  FUNC_3(VAR_22, VAR_16->iobase + FUNC_2(VAR_21));


  FUNC_4(VAR_16, VAR_21, VAR_19[3]);


  if (VAR_19[4]) {
   VAR_22 = VAR_19[4] & 0xffff;
   FUNC_3(VAR_22, VAR_16->iobase + FUNC_1(VAR_21));
  }
  break;

 default:
  return -VAR_0;
 }

 return VAR_18->n;
}
