
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct controller {TYPE_1__* pcie; int poll_thread; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,struct controller*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct controller *VAR_1)
{
 if (VAR_0)
  FUNC_1(VAR_1->poll_thread);
 else
  FUNC_0(VAR_1->pcie->irq, VAR_1);
}
