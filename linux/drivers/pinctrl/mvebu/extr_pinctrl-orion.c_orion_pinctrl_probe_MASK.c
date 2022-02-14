
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_3__ {void* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct resource*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct platform_device*) ;
 struct of_device_id* FUNC_4 (int ,TYPE_1__*) ;
 int VAR_3 ;
 struct resource* FUNC_5 (struct platform_device*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 const struct of_device_id *VAR_5 =
  FUNC_4(VAR_3, &VAR_4->dev);
 struct resource *VAR_6;

 VAR_4->dev.platform_data = (void*)VAR_5->data;

 VAR_6 = FUNC_5(VAR_4, VAR_0, 0);
 VAR_2 = FUNC_2(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_6 = FUNC_5(VAR_4, VAR_0, 1);
 VAR_1 = FUNC_2(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 return FUNC_3(VAR_4);
}
