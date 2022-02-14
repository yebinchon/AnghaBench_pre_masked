
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pcie {int free_ck; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct mtk_pcie *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;

 FUNC_0(VAR_0->free_ck);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
