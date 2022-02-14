
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ramaddr; scalar_t__ ioaddr; } ;
struct sym_device {TYPE_1__ s; int pdev; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sym_device *VAR_0)
{
 if (VAR_0->s.ioaddr)
  FUNC_0(VAR_0->pdev, VAR_0->s.ioaddr);
 if (VAR_0->s.ramaddr)
  FUNC_0(VAR_0->pdev, VAR_0->s.ramaddr);
}
