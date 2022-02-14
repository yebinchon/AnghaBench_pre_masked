
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct cb_pcimdas_private* private; } ;
struct cb_pcimdas_private {scalar_t__ daqio; scalar_t__ BADR3; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_4 (scalar_t__) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_10,
       struct comedi_subdevice *VAR_11,
       struct comedi_insn *VAR_12,
       unsigned int *VAR_13)
{
 struct cb_pcimdas_private *VAR_14 = VAR_10->private;
 unsigned int VAR_15 = FUNC_0(VAR_12->chanspec);
 unsigned int VAR_16 = FUNC_1(VAR_12->chanspec);
 int VAR_17;
 unsigned int VAR_18;
 int VAR_19;




 VAR_18 = FUNC_4(VAR_14->BADR3 + VAR_6);
 if ((VAR_18 & VAR_7) != VAR_8) {
  VAR_18 &= ~VAR_7;
  VAR_18 |= VAR_8;
  FUNC_6(VAR_18, VAR_14->BADR3 + VAR_6);
 }


 FUNC_6(VAR_2, VAR_14->BADR3 + VAR_3);


 FUNC_6(VAR_16, VAR_14->BADR3 + VAR_4);


 FUNC_6(FUNC_2(VAR_15, VAR_15), VAR_14->BADR3 + VAR_5);


 for (VAR_17 = 0; VAR_17 < VAR_12->n; VAR_17++) {

  FUNC_7(0, VAR_14->daqio + VAR_1);


  VAR_19 = FUNC_3(VAR_10, VAR_11, VAR_12, VAR_9, 0);
  if (VAR_19)
   return VAR_19;


  VAR_13[VAR_17] = FUNC_5(VAR_14->daqio + VAR_0);
 }


 return VAR_17;
}
