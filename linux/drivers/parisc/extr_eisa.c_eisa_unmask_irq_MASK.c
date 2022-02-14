
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_3)
{
 unsigned int VAR_4 = VAR_3->irq;
 unsigned long VAR_5;
 FUNC_0("enable irq %d\n", VAR_4);

 FUNC_3(&VAR_0, VAR_5);
        if (VAR_4 & 8) {
  VAR_2 &= ~(1 << (VAR_4&7));
  FUNC_2(VAR_2, 0xa1);
 } else {
  VAR_1 &= ~(1 << (VAR_4&7));
  FUNC_2(VAR_1, 0x21);
 }
 FUNC_4(&VAR_0, VAR_5);
 FUNC_0("pic0 mask %02x\n", FUNC_1(0x21));
 FUNC_0("pic1 mask %02x\n", FUNC_1(0xa1));
}
