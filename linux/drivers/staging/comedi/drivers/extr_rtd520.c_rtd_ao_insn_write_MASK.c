
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtd_private {scalar_t__ las1; } ;
struct comedi_subdevice {int maxdata; unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; struct rtd_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 scalar_t__ FUNC_6 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_0 ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2,
        struct comedi_insn *VAR_3,
        unsigned int *VAR_4)
{
 struct rtd_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);
 unsigned int VAR_7 = FUNC_1(VAR_3->chanspec);
 int VAR_8;
 int VAR_9;


 FUNC_8(VAR_7 & 7, VAR_1->mmio + FUNC_2(VAR_6));

 for (VAR_9 = 0; VAR_9 < VAR_3->n; ++VAR_9) {
  unsigned int VAR_10 = VAR_4[VAR_9];


  if (FUNC_6(VAR_2, VAR_7)) {
   VAR_10 = FUNC_5(VAR_2, VAR_10);
   VAR_10 |= (VAR_10 & ((VAR_2->maxdata + 1) >> 1)) << 1;
  }


  VAR_10 <<= 3;

  FUNC_8(VAR_10, VAR_5->las1 + FUNC_4(VAR_6));
  FUNC_8(0, VAR_1->mmio + FUNC_3(VAR_6));

  VAR_8 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_0, 0);
  if (VAR_8)
   return VAR_8;

  VAR_2->readback[VAR_6] = VAR_4[VAR_9];
 }

 return VAR_3->n;
}
