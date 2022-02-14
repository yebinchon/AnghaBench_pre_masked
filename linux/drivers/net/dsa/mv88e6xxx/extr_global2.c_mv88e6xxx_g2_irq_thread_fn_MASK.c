
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int domain; } ;
struct mv88e6xxx_chip {TYPE_1__ g2_irq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int*) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct mv88e6xxx_chip *VAR_4 = VAR_3;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 u16 VAR_9;

 FUNC_3(VAR_4);
 VAR_8 = FUNC_2(VAR_4, &VAR_9);
 FUNC_4(VAR_4);
 if (VAR_8)
  goto out;

 for (VAR_7 = 0; VAR_7 < 16; ++VAR_7) {
  if (VAR_9 & (1 << VAR_7)) {
   VAR_6 = FUNC_1(VAR_4->g2_irq.domain, VAR_7);
   FUNC_0(VAR_6);
   ++VAR_5;
  }
 }
out:
 return (VAR_5 > 0 ? VAR_0 : VAR_1);
}
