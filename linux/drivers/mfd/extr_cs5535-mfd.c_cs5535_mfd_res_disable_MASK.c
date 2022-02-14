
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct resource* FUNC_1 (struct platform_device*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct resource*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct resource *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1, 0);
 if (!VAR_3) {
  FUNC_0(&VAR_2->dev, "can't fetch device resource info\n");
  return -VAR_0;
 }

 FUNC_2(VAR_3->start, FUNC_3(VAR_3));
 return 0;
}
