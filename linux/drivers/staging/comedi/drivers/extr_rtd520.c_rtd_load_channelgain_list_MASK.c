
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_device*,unsigned int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_4,
          unsigned int VAR_5, unsigned int *VAR_6)
{
 if (VAR_5 > 1) {
  int VAR_7;

  FUNC_1(0, VAR_4->mmio + VAR_1);
  FUNC_1(1, VAR_4->mmio + VAR_2);
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   FUNC_1(FUNC_0(VAR_4, VAR_6[VAR_7], VAR_7),
          VAR_4->mmio + VAR_3);
  }
 } else {
  FUNC_1(0, VAR_4->mmio + VAR_2);
  FUNC_1(FUNC_0(VAR_4, VAR_6[0], 0),
         VAR_4->mmio + VAR_0);
 }
}
