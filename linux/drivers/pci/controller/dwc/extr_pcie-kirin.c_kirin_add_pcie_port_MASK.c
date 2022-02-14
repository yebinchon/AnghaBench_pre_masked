
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int * ops; } ;
struct dw_pcie {TYPE_1__ pp; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct dw_pcie*,struct platform_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct dw_pcie *VAR_1,
          struct platform_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_1->pp.ops = &VAR_0;

 return FUNC_0(&VAR_1->pp);
}
