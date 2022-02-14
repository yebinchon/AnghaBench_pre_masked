
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int masked; int nirqs; } ;
struct mv88e6xxx_chip {TYPE_1__ g1_irq; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct mv88e6xxx_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int ,int) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct mv88e6xxx_chip *VAR_2 = FUNC_1(VAR_1);
 u16 VAR_3 = FUNC_0(VAR_2->g1_irq.nirqs, 0);
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_0, &VAR_4);
 if (VAR_5)
  goto out;

 VAR_4 &= ~VAR_3;
 VAR_4 |= (~VAR_2->g1_irq.masked & VAR_3);

 VAR_5 = FUNC_3(VAR_2, VAR_0, VAR_4);
 if (VAR_5)
  goto out;

out:
 FUNC_4(VAR_2);
}
