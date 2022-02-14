
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct advk_pcie {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct advk_pcie*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct advk_pcie *VAR_4)
{
 struct device *VAR_5 = &VAR_4->pdev->dev;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_0(VAR_4)) {
   FUNC_2(VAR_5, "link up\n");
   return 0;
  }

  FUNC_3(VAR_3, VAR_2);
 }

 FUNC_1(VAR_5, "link never came up\n");
 return -VAR_0;
}
