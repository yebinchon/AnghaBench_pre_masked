
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtd_private {scalar_t__ las1; } ;
struct comedi_subdevice {unsigned short maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; struct rtd_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned short FUNC_1 (struct comedi_subdevice*,unsigned short) ;
 scalar_t__ FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned short FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (struct comedi_device*,int,int *) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_5,
   struct comedi_subdevice *VAR_6, struct comedi_insn *VAR_7,
   unsigned int *VAR_8)
{
 struct rtd_private *VAR_9 = VAR_5->private;
 unsigned int VAR_10 = FUNC_0(VAR_7->chanspec);
 int VAR_11;
 int VAR_12;


 FUNC_6(0, VAR_5->mmio + VAR_2);


 FUNC_5(VAR_5, 1, &VAR_7->chanspec);


 FUNC_6(0, VAR_5->mmio + VAR_1);


 for (VAR_12 = 0; VAR_12 < VAR_7->n; VAR_12++) {
  unsigned short VAR_13;

  FUNC_7(0, VAR_5->mmio + VAR_0);

  VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_4, 0);
  if (VAR_11)
   return VAR_11;


  VAR_13 = FUNC_4(VAR_9->las1 + VAR_3);
  VAR_13 >>= 3;


  if (FUNC_2(VAR_6, VAR_10))
   VAR_13 = FUNC_1(VAR_6, VAR_13);

  VAR_8[VAR_12] = VAR_13 & VAR_6->maxdata;
 }


 return VAR_12;
}
