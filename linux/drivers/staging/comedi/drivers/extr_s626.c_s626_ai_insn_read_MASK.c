
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (struct comedi_device*,int ,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_8,
        struct comedi_subdevice *VAR_9,
        struct comedi_insn *VAR_10,
        unsigned int *VAR_11)
{
 u16 VAR_12 = FUNC_0(VAR_10->chanspec);
 u16 VAR_13 = FUNC_1(VAR_10->chanspec);
 u16 VAR_14 = 0;
 u32 VAR_15;
 u32 VAR_16;
 int VAR_17;
 int VAR_18;





 if (VAR_13 == 0)
  VAR_14 = (VAR_12 << 8) | (VAR_2);
 else
  VAR_14 = (VAR_12 << 8) | (VAR_1);


 FUNC_5(VAR_8, VAR_3, VAR_14);


 FUNC_5(VAR_8, VAR_4, VAR_14);

 for (VAR_18 = 0; VAR_18 < VAR_10->n; VAR_18++) {

  FUNC_7(10, 20);


  VAR_15 = FUNC_3(VAR_8->mmio + VAR_6);

  FUNC_8(VAR_15 & ~VAR_0, VAR_8->mmio + VAR_6);

  FUNC_8(VAR_15 & ~VAR_0, VAR_8->mmio + VAR_6);
  FUNC_8(VAR_15 & ~VAR_0, VAR_8->mmio + VAR_6);

  FUNC_8(VAR_15 | VAR_0, VAR_8->mmio + VAR_6);
  VAR_17 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_7, 0);
  if (VAR_17)
   return VAR_17;


  if (VAR_18 != 0) {
   VAR_16 = FUNC_3(VAR_8->mmio + VAR_5);
   VAR_11[VAR_18 - 1] = FUNC_4(VAR_16);
  }
  FUNC_6(4);
 }





 VAR_15 = FUNC_3(VAR_8->mmio + VAR_6);

 FUNC_8(VAR_15 & ~VAR_0, VAR_8->mmio + VAR_6);

 FUNC_8(VAR_15 & ~VAR_0, VAR_8->mmio + VAR_6);
 FUNC_8(VAR_15 & ~VAR_0, VAR_8->mmio + VAR_6);

 FUNC_8(VAR_15 | VAR_0, VAR_8->mmio + VAR_6);




 VAR_17 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_7, 0);
 if (VAR_17)
  return VAR_17;




 if (VAR_18 != 0) {
  VAR_16 = FUNC_3(VAR_8->mmio + VAR_5);
  VAR_11[VAR_18 - 1] = FUNC_4(VAR_16);
 }

 return VAR_18;
}
