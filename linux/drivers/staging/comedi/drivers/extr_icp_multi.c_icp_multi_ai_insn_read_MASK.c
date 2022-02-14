
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_5 ;
 unsigned int* VAR_6 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_7,
      struct comedi_subdevice *VAR_8,
      struct comedi_insn *VAR_9,
      unsigned int *VAR_10)
{
 unsigned int VAR_11 = FUNC_1(VAR_9->chanspec);
 unsigned int VAR_12 = FUNC_2(VAR_9->chanspec);
 unsigned int VAR_13 = FUNC_0(VAR_9->chanspec);
 unsigned int VAR_14;
 int VAR_15 = 0;
 int VAR_16;


 if (VAR_13 == VAR_0) {
  VAR_14 = FUNC_3(VAR_11) |
     VAR_2;
 } else {
  VAR_14 = FUNC_4(VAR_11);
 }
 VAR_14 |= VAR_6[VAR_12];
 FUNC_8(VAR_14, VAR_7->mmio + VAR_1);

 for (VAR_16 = 0; VAR_16 < VAR_9->n; VAR_16++) {

  FUNC_8(VAR_14 | VAR_3,
         VAR_7->mmio + VAR_1);

  FUNC_7(1);


  VAR_15 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_5, 0);
  if (VAR_15)
   break;

  VAR_10[VAR_16] = (FUNC_6(VAR_7->mmio + VAR_4) >> 4) & 0x0fff;
 }

 return VAR_15 ? VAR_15 : VAR_16;
}
