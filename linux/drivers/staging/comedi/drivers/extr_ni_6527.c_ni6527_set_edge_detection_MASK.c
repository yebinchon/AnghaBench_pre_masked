
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 unsigned int VAR_4;

 VAR_2 &= VAR_1;
 VAR_3 &= VAR_1;
 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  if (VAR_1 & 0xff) {
   if (~VAR_1 & 0xff) {

    VAR_2 |= FUNC_2(VAR_0->mmio +
      FUNC_1(VAR_4)) &
       (~VAR_1 & 0xff);

    VAR_3 |= FUNC_2(VAR_0->mmio +
       FUNC_0(VAR_4)) &
        (~VAR_1 & 0xff);
   }

   FUNC_3(VAR_2 & 0xff,
          VAR_0->mmio + FUNC_1(VAR_4));

   FUNC_3(VAR_3 & 0xff,
          VAR_0->mmio + FUNC_0(VAR_4));
  }
  VAR_2 >>= 8;
  VAR_3 >>= 8;
  VAR_1 >>= 8;
 }
}
