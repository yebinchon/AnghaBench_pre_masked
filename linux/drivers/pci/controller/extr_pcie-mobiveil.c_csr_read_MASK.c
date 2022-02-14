
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mobiveil_pcie {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (struct mobiveil_pcie*,int ) ;
 int FUNC_2 (void*,size_t,int *) ;

__attribute__((used)) static u32 FUNC_3(struct mobiveil_pcie *VAR_0, u32 VAR_1, size_t VAR_2)
{
 void *VAR_3;
 u32 VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_0, VAR_1);

 VAR_5 = FUNC_2(VAR_3, VAR_2, &VAR_4);
 if (VAR_5)
  FUNC_0(&VAR_0->pdev->dev, "read CSR address failed\n");

 return VAR_4;
}
