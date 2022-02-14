
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_14 ;
 int FUNC_3 (struct comedi_device*,int,int) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_15,
        struct comedi_subdevice *VAR_16,
        struct comedi_insn *VAR_17, unsigned int *VAR_18)
{
 int VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;

 FUNC_6(VAR_4 |
        VAR_3 |
        VAR_2,
        VAR_15->mmio + VAR_10);






 FUNC_5(1000000, VAR_15->mmio + VAR_12);
 FUNC_6(0, VAR_15->mmio + VAR_11);

 VAR_19 = FUNC_1(VAR_17->chanspec);
 VAR_20 = FUNC_0(VAR_17->chanspec);







 for (VAR_22 = 0; VAR_22 < VAR_17->n; VAR_22++) {
  FUNC_3(VAR_15, VAR_20, VAR_19);

  FUNC_6(VAR_5,
         VAR_15->mmio + VAR_10);

  VAR_21 = FUNC_2(VAR_15, VAR_16, VAR_17, VAR_14,
         VAR_7);
  if (VAR_21)
   return VAR_21;

  FUNC_6(VAR_1,
         VAR_15->mmio + VAR_10);

  VAR_21 = FUNC_2(VAR_15, VAR_16, VAR_17, VAR_14,
         VAR_8);
  if (VAR_21)
   return VAR_21;

  VAR_21 =
  FUNC_2(VAR_15, VAR_16, VAR_17, VAR_14,
          VAR_9);
  if (VAR_21)
   return VAR_21;

  VAR_18[VAR_22] = FUNC_4(VAR_15->mmio + VAR_13);
  FUNC_6(VAR_0,
         VAR_15->mmio + VAR_10);
  FUNC_6(VAR_6,
         VAR_15->mmio + VAR_10);
 }

 return VAR_22;
}
