
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_channel {int irq_pending; } ;


 scalar_t__ FUNC_0 (int *,int ,int) ;

__attribute__((used)) static inline bool FUNC_1(struct qeth_channel *VAR_0)
{
 return FUNC_0(&VAR_0->irq_pending, 0, 1) == 0;
}
