
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_2 ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_3 ;
 unsigned int* VAR_4 ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5,
       struct comedi_subdevice *VAR_6,
       struct comedi_insn *VAR_7,
       unsigned int *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_7->chanspec);
 unsigned int VAR_10 = FUNC_1(VAR_7->chanspec);
 unsigned int VAR_11;
 int VAR_12;


 VAR_11 = FUNC_2(VAR_9);
 VAR_11 |= VAR_4[VAR_10];
 FUNC_4(VAR_11, VAR_5->mmio + VAR_1);

 for (VAR_12 = 0; VAR_12 < VAR_7->n; VAR_12++) {
  unsigned int VAR_13 = VAR_8[VAR_12];
  int VAR_14;


  VAR_14 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_3, 0);
  if (VAR_14)
   return VAR_14;

  FUNC_4(VAR_13, VAR_5->mmio + VAR_0);


  FUNC_4(VAR_11 | VAR_2,
         VAR_5->mmio + VAR_1);

  VAR_6->readback[VAR_9] = VAR_13;
 }

 return VAR_7->n;
}
