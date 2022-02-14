
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct of_device_id {int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,int ) ;
 struct of_device_id* FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 const struct of_device_id *VAR_2 =
  FUNC_1(VAR_0, &VAR_1->dev);

 return FUNC_0(VAR_1, VAR_2->data);
}
