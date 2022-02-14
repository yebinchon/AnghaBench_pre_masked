
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct resource* FUNC_1 (struct platform_device*,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct resource*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct resource *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2, 0);
 if (!VAR_4) {
  FUNC_0(&VAR_3->dev, "can't fetch device resource info\n");
  return -VAR_1;
 }

 if (!FUNC_2(VAR_4->start, FUNC_3(VAR_4), VAR_0)) {
  FUNC_0(&VAR_3->dev, "can't request region\n");
  return -VAR_1;
 }

 return 0;
}
