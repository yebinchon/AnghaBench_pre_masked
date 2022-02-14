
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int paddr; int * vaddr; int size; } ;
struct fimc_is {TYPE_2__ memory; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (struct device*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct fimc_is *VAR_0)
{
 struct device *VAR_1 = &VAR_0->pdev->dev;

 if (VAR_0->memory.vaddr == ((void*)0))
  return;

 FUNC_0(VAR_1, VAR_0->memory.size, VAR_0->memory.vaddr,
     VAR_0->memory.paddr);
}
