
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*) ;
 struct resource* FUNC_2 (struct device*,int ,int ,int ) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static struct resource *FUNC_5(struct platform_device *VAR_1,
        int VAR_2)
{
 struct device *VAR_3 = &VAR_1->dev;
 struct resource *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0, VAR_2);
 if (!VAR_4) {
  FUNC_0(VAR_3, "Couldn't find IO resource %d\n", VAR_2);
  return VAR_4;
 }

 return FUNC_2(VAR_3, VAR_4->start, FUNC_4(VAR_4),
       FUNC_1(VAR_3));
}
