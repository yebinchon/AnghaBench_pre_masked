
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int is_irq_enabled; int irq; } ;


 int FUNC_0 (int ,struct ufs_hba*) ;

__attribute__((used)) static inline void FUNC_1(struct ufs_hba *VAR_0)
{
 if (VAR_0->is_irq_enabled) {
  FUNC_0(VAR_0->irq, VAR_0);
  VAR_0->is_irq_enabled = 0;
 }
}
