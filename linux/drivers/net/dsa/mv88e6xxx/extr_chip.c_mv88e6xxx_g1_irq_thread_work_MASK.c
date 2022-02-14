
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {unsigned int nirqs; int domain; } ;
struct mv88e6xxx_chip {TYPE_1__ g1_irq; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static irqreturn_t FUNC_6(struct mv88e6xxx_chip *VAR_4)
{
 unsigned int VAR_5 = 0;
 unsigned int VAR_6;
 unsigned int VAR_7;
 u16 VAR_8;
 u16 VAR_9;
 int VAR_10;

 FUNC_4(VAR_4);
 VAR_10 = FUNC_3(VAR_4, VAR_3, &VAR_8);
 FUNC_5(VAR_4);

 if (VAR_10)
  goto out;

 do {
  for (VAR_7 = 0; VAR_7 < VAR_4->g1_irq.nirqs; ++VAR_7) {
   if (VAR_8 & (1 << VAR_7)) {
    VAR_6 = FUNC_2(VAR_4->g1_irq.domain,
          VAR_7);
    FUNC_1(VAR_6);
    ++VAR_5;
   }
  }

  FUNC_4(VAR_4);
  VAR_10 = FUNC_3(VAR_4, VAR_2, &VAR_9);
  if (VAR_10)
   goto unlock;
  VAR_10 = FUNC_3(VAR_4, VAR_3, &VAR_8);
unlock:
  FUNC_5(VAR_4);
  if (VAR_10)
   goto out;
  VAR_9 &= FUNC_0(VAR_4->g1_irq.nirqs, 0);
 } while (VAR_8 & VAR_9);

out:
 return (VAR_5 > 0 ? VAR_0 : VAR_1);
}
