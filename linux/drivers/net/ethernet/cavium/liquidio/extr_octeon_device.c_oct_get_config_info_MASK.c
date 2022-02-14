
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 void* FUNC_0 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_1 (struct octeon_device*,void*) ;
 int FUNC_2 (int *,char*) ;

void *FUNC_3(struct octeon_device *VAR_0, u16 VAR_1)
{
 void *VAR_2 = ((void*)0);

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 if (FUNC_1(VAR_0, VAR_2)) {
  FUNC_2(&VAR_0->pci_dev->dev, "Configuration verification failed\n");
  return ((void*)0);
 }

 return VAR_2;
}
