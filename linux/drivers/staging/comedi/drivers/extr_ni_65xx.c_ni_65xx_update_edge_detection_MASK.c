
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (struct comedi_device*) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_0,
       unsigned int VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_4(VAR_0);
 unsigned int VAR_5;

 if (VAR_1 >= FUNC_2(VAR_4))
  return;

 for (VAR_5 = FUNC_0(VAR_1); VAR_5 < VAR_4; VAR_5++) {
  int VAR_6 = (int)(FUNC_2(VAR_5) - VAR_1);
  unsigned int VAR_7, VAR_8, VAR_9;

  if (VAR_6 >= 32)
   break;

  if (VAR_6 >= 0) {
   VAR_7 = ~0U >> VAR_6;
   VAR_8 = VAR_2 >> VAR_6;
   VAR_9 = VAR_3 >> VAR_6;
  } else {
   VAR_7 = ~0U << -VAR_6;
   VAR_8 = VAR_2 << -VAR_6;
   VAR_9 = VAR_3 << -VAR_6;
  }
  if (VAR_7 & 0xff) {
   if (~VAR_7 & 0xff) {
    VAR_8 |=
        FUNC_5(VAR_0->mmio +
       FUNC_3(VAR_5)) &
        ~VAR_7;
    VAR_9 |=
        FUNC_5(VAR_0->mmio +
       FUNC_1(VAR_5)) &
        ~VAR_7;
   }
   FUNC_6(VAR_8 & 0xff,
          VAR_0->mmio + FUNC_3(VAR_5));
   FUNC_6(VAR_9 & 0xff,
          VAR_0->mmio + FUNC_1(VAR_5));
  }
 }
}
