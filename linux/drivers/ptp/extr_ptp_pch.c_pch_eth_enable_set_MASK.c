
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_dev {TYPE_1__* regs; } ;
struct TYPE_2__ {int ts_sel; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static inline void FUNC_2(struct pch_dev *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(&VAR_1->regs->ts_sel) | (VAR_0);
 FUNC_1(VAR_2, (&VAR_1->regs->ts_sel));
}
