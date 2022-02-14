
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; int n; } ;
struct comedi_device {struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {scalar_t__ pcibar2; scalar_t__ pcibar1; int calib_src; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_4 (unsigned int) ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_5 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_8 (scalar_t__) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_10,
      struct comedi_subdevice *VAR_11,
      struct comedi_insn *VAR_12,
      unsigned int *VAR_13)
{
 struct cb_pcidas_private *VAR_14 = VAR_10->private;
 unsigned int VAR_15 = FUNC_1(VAR_12->chanspec);
 unsigned int VAR_16 = FUNC_2(VAR_12->chanspec);
 unsigned int VAR_17 = FUNC_0(VAR_12->chanspec);
 unsigned int VAR_18;
 int VAR_19;
 int VAR_20;


 if (VAR_12->chanspec & VAR_1) {
  FUNC_9(VAR_7 | FUNC_5(VAR_14->calib_src),
       VAR_14->pcibar1 + VAR_8);
  VAR_15 = 0;
 } else {
  FUNC_9(0, VAR_14->pcibar1 + VAR_8);
 }


 VAR_18 = FUNC_3(VAR_15) | FUNC_4(VAR_16);

 if (FUNC_6(VAR_11, VAR_16))
  VAR_18 |= VAR_6;

 if (VAR_17 != VAR_0)
  VAR_18 |= VAR_5;
 FUNC_9(VAR_18, VAR_14->pcibar1 + VAR_4);


 FUNC_9(0, VAR_14->pcibar2 + VAR_3);


 for (VAR_20 = 0; VAR_20 < VAR_12->n; VAR_20++) {

  FUNC_9(0, VAR_14->pcibar2 + VAR_2);


  VAR_19 = FUNC_7(VAR_10, VAR_11, VAR_12, VAR_9, 0);
  if (VAR_19)
   return VAR_19;


  VAR_13[VAR_20] = FUNC_8(VAR_14->pcibar2 + VAR_2);
 }


 return VAR_20;
}
