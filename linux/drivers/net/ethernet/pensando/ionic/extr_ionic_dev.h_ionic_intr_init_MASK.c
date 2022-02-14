
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_intr_info {unsigned long index; } ;
struct ionic_dev {int intr_ctrl; } ;


 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct ionic_dev *VAR_0,
       struct ionic_intr_info *VAR_1,
       unsigned long VAR_2)
{
 FUNC_0(VAR_0->intr_ctrl, VAR_2);
 VAR_1->index = VAR_2;
}
