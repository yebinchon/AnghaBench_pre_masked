
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (struct comedi_device*,int ,int,int*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
    struct comedi_subdevice *VAR_3,
    struct comedi_insn *VAR_4,
    unsigned int *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 u8 VAR_8;
 u8 VAR_9;

 VAR_6 = FUNC_0(VAR_3, VAR_5);

 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  if (VAR_6 & (0xFF << VAR_8 * 8)) {
   VAR_9 = (VAR_3->state >> VAR_8 * 8) & 0xFF;
   VAR_7 = FUNC_1(VAR_2, VAR_1,
        VAR_8, &VAR_9);
   if (VAR_7)
    return VAR_7;
  }
 }

 VAR_5[1] = 0;

 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  VAR_7 = FUNC_1(VAR_2, VAR_0, VAR_8, &VAR_9);
  if (VAR_7)
   return VAR_7;
  VAR_5[1] |= VAR_9 << VAR_8 * 8;
 }

 return VAR_4->n;
}
