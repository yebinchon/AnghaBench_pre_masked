
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_dev {size_t type; int irq; int name; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,int ,int ,char*,int ,int ) ;
 int * VAR_0 ;

void FUNC_2(struct z8530_dev *VAR_1, char *VAR_2, unsigned long VAR_3)
{
 FUNC_1("%s: %s found at %s 0x%lX, IRQ %d\n",
  VAR_1->name,
  VAR_0[VAR_1->type],
  VAR_2,
  FUNC_0(VAR_3),
  VAR_1->irq);
}
