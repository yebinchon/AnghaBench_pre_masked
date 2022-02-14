
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct igbvf_adapter {TYPE_1__* pdev; scalar_t__ msix_entries; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct igbvf_adapter*) ;

__attribute__((used)) static int FUNC_2(struct igbvf_adapter *VAR_0)
{
 int VAR_1 = -1;


 if (VAR_0->msix_entries)
  VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return VAR_1;

 FUNC_0(&VAR_0->pdev->dev,
  "Unable to allocate interrupt, Error: %d\n", VAR_1);

 return VAR_1;
}
