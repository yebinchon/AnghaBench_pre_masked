
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int class_dev; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned int,...) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         unsigned int *VAR_2,
         unsigned int VAR_3)
{
 unsigned int VAR_4[16];
 unsigned int VAR_5, VAR_6, VAR_7;


 if (VAR_3 < 1) {
  FUNC_4(VAR_0->class_dev, "range/channel list is empty!\n");
  return 0;
 }

 if (VAR_3 > 1) {

  VAR_4[0] = VAR_2[0];
  for (VAR_5 = 1, VAR_7 = 1; VAR_5 < VAR_3; VAR_5++, VAR_7++) {

   if (VAR_2[0] == VAR_2[VAR_5])
    break;
   VAR_6 =
       (FUNC_1(VAR_4[VAR_5 - 1]) + 1) % VAR_3;
   if (VAR_6 != FUNC_1(VAR_2[VAR_5])) {

    FUNC_3(VAR_0->class_dev,
     "channel list must be continuous! chanlist[%i]=%d but must be %d or %d!\n",
     VAR_5, FUNC_1(VAR_2[VAR_5]), VAR_6,
     FUNC_1(VAR_2[0]));
    return 0;
   }

   VAR_4[VAR_5] = VAR_2[VAR_5];
  }


  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
   if (VAR_2[VAR_5] != VAR_4[VAR_5 % VAR_7]) {
    FUNC_3(VAR_0->class_dev,
     "bad channel or range number! chanlist[%i]=%d,%d,%d and not %d,%d,%d!\n",
     VAR_5, FUNC_1(VAR_4[VAR_5]),
     FUNC_2(VAR_4[VAR_5]),
     FUNC_0(VAR_4[VAR_5]),
     FUNC_1(VAR_2[VAR_5 % VAR_7]),
     FUNC_2(VAR_2[VAR_5 % VAR_7]),
     FUNC_0(VAR_4[VAR_5 % VAR_7]));
    return 0;
   }
  }
 } else {
  VAR_7 = 1;
 }

 return VAR_7;
}
