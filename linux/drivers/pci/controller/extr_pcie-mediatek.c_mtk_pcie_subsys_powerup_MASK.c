
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct mtk_pcie {int * free_ck; int * base; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*) ;
 int * FUNC_4 (struct device*,char*) ;
 int * FUNC_5 (struct device*,struct resource*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,char*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 struct platform_device* FUNC_11 (struct device*) ;

__attribute__((used)) static int FUNC_12(struct mtk_pcie *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct platform_device *VAR_4 = FUNC_11(VAR_3);
 struct resource *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_6(VAR_4, VAR_1, "subsys");
 if (VAR_5) {
  VAR_2->base = FUNC_5(VAR_3, VAR_5);
  if (FUNC_0(VAR_2->base)) {
   FUNC_3(VAR_3, "failed to map shared register\n");
   return FUNC_1(VAR_2->base);
  }
 }

 VAR_2->free_ck = FUNC_4(VAR_3, "free_ck");
 if (FUNC_0(VAR_2->free_ck)) {
  if (FUNC_1(VAR_2->free_ck) == -VAR_0)
   return -VAR_0;

  VAR_2->free_ck = ((void*)0);
 }

 FUNC_8(VAR_3);
 FUNC_9(VAR_3);


 VAR_6 = FUNC_2(VAR_2->free_ck);
 if (VAR_6) {
  FUNC_3(VAR_3, "failed to enable free_ck\n");
  goto err_free_ck;
 }

 return 0;

err_free_ck:
 FUNC_10(VAR_3);
 FUNC_7(VAR_3);

 return VAR_6;
}
