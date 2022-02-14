
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int domain; } ;
struct mv88e6xxx_chip {scalar_t__ vtu_prob_irq; TYPE_1__ g1_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int,int *,int ,int ,char*,struct mv88e6xxx_chip*) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_3)
{
 int VAR_4;

 VAR_3->vtu_prob_irq = FUNC_1(VAR_3->g1_irq.domain,
           VAR_1);
 if (VAR_3->vtu_prob_irq < 0)
  return VAR_3->vtu_prob_irq;

 VAR_4 = FUNC_2(VAR_3->vtu_prob_irq, ((void*)0),
       VAR_2,
       VAR_0, "mv88e6xxx-g1-vtu-prob",
       VAR_3);
 if (VAR_4)
  FUNC_0(VAR_3->vtu_prob_irq);

 return VAR_4;
}
