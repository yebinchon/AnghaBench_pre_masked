
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slic_shmem_data {int dummy; } ;
struct slic_shmem {int isr_paddr; struct slic_shmem_data* shmem_data; } ;
struct slic_device {TYPE_1__* pdev; struct slic_shmem shmem; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int,struct slic_shmem_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct slic_device *VAR_0)
{
 struct slic_shmem *VAR_1 = &VAR_0->shmem;
 struct slic_shmem_data *VAR_2 = VAR_1->shmem_data;

 FUNC_0(&VAR_0->pdev->dev, sizeof(*VAR_2), VAR_2,
     VAR_1->isr_paddr);
}
