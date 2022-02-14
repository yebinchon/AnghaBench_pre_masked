
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct me_private_data {int ctrl2; unsigned int ctrl1; } ;
struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; struct me_private_data* private; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 scalar_t__ FUNC_6 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_12 ;
 unsigned int FUNC_8 (scalar_t__) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_13,
      struct comedi_subdevice *VAR_14,
      struct comedi_insn *VAR_15,
      unsigned int *VAR_16)
{
 struct me_private_data *VAR_17 = VAR_13->private;
 unsigned int VAR_18 = FUNC_1(VAR_15->chanspec);
 unsigned int VAR_19 = FUNC_2(VAR_15->chanspec);
 unsigned int VAR_20 = FUNC_0(VAR_15->chanspec);
 unsigned int VAR_21;
 int VAR_22 = 0;
 int VAR_23;





 if (VAR_20 & VAR_0) {
  if (VAR_18 > 7 || FUNC_6(VAR_14, VAR_19))
   return -VAR_1;
 }


 VAR_17->ctrl2 &= ~(VAR_8 | VAR_9);
 FUNC_9(VAR_17->ctrl2, VAR_13->mmio + VAR_10);

 FUNC_9(0x00, VAR_13->mmio + VAR_11);


 VAR_17->ctrl2 |= (VAR_8 | VAR_9);
 FUNC_9(VAR_17->ctrl2, VAR_13->mmio + VAR_10);


 VAR_21 = FUNC_3(VAR_18) | FUNC_4(VAR_19);
 if (FUNC_6(VAR_14, VAR_19))
  VAR_21 |= VAR_3;
 if (VAR_20 & VAR_0)
  VAR_21 |= VAR_2;
 FUNC_9(VAR_21, VAR_13->mmio + VAR_4);


 VAR_17->ctrl1 |= VAR_6;
 FUNC_9(VAR_17->ctrl1, VAR_13->mmio + VAR_7);

 for (VAR_23 = 0; VAR_23 < VAR_15->n; VAR_23++) {

  FUNC_8(VAR_13->mmio + VAR_7);


  VAR_22 = FUNC_7(VAR_13, VAR_14, VAR_15, VAR_12, 0);
  if (VAR_22)
   break;


  VAR_21 = FUNC_8(VAR_13->mmio + VAR_4) & VAR_14->maxdata;


  VAR_16[VAR_23] = FUNC_5(VAR_14, VAR_21);
 }


 VAR_17->ctrl1 &= ~VAR_5;
 FUNC_9(VAR_17->ctrl1, VAR_13->mmio + VAR_7);

 return VAR_22 ? VAR_22 : VAR_15->n;
}
