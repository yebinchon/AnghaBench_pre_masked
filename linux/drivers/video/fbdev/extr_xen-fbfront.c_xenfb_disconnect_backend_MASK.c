
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenfb_info {int irq; scalar_t__ update_wanted; } ;


 int FUNC_0 (int,struct xenfb_info*) ;

__attribute__((used)) static void FUNC_1(struct xenfb_info *VAR_0)
{

 VAR_0->update_wanted = 0;
 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, VAR_0);
 VAR_0->irq = -1;
}
