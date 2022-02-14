
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gelic_card {int irq_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct gelic_card*,int ) ;

__attribute__((used)) static void FUNC_1(struct gelic_card *VAR_1)
{
 VAR_1->irq_mask |= VAR_0;
 FUNC_0(VAR_1, VAR_1->irq_mask);
}
