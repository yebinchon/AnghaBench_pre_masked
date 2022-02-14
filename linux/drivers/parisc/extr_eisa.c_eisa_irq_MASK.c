
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int FUNC_0 (char*,int,int ,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 int VAR_6 = FUNC_4(0xfc01f000);
 unsigned long VAR_7;

 FUNC_5(&VAR_1, VAR_7);

 FUNC_2(0x0a, 0x20);
 FUNC_2(0x0a, 0xa0);

 FUNC_0("irq IAR %02x 8259-1 irr %02x 8259-2 irr %02x\n",
     VAR_6, FUNC_1(0x20), FUNC_1(0xa0));


 FUNC_2(0x0a, 0x20);
 FUNC_2(0x0a, 0xa0);
 FUNC_0("irq 8259-1 isr %02x imr %02x 8259-2 isr %02x imr %02x\n",
   FUNC_1(0x20), FUNC_1(0x21), FUNC_1(0xa0), FUNC_1(0xa1));

 VAR_6 &= 0xf;


 if (VAR_6 & 8) {
  VAR_3 |= (1 << (VAR_6&7));
  FUNC_2(VAR_3, 0xa1);
  FUNC_2(0x60 | (VAR_6&7),0xa0);
  FUNC_2(0x62, 0x20);

 } else {
  VAR_2 |= (1 << (VAR_6&7));
  FUNC_2(VAR_2, 0x21);
  FUNC_2(0x60|VAR_6, 0x20);
 }
 FUNC_6(&VAR_1, VAR_7);

 FUNC_3(VAR_6);

 FUNC_5(&VAR_1, VAR_7);

        if (VAR_6 & 8) {
  VAR_3 &= ~(1 << (VAR_6&7));
  FUNC_2(VAR_3, 0xa1);
 } else {
  VAR_2 &= ~(1 << (VAR_6&7));
  FUNC_2(VAR_2, 0x21);
 }
 FUNC_6(&VAR_1, VAR_7);
 return VAR_0;
}
