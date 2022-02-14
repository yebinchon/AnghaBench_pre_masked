
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device_id {int dummy; } ;
struct of_device_id {struct platform_device_id const* data; } ;
struct device {int dummy; } ;


 struct of_device_id* FUNC_0 (int ,struct device*) ;
 int VAR_0 ;

__attribute__((used)) static const struct platform_device_id *FUNC_1(struct device *VAR_1)
{
 const struct of_device_id *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2 ? VAR_2->data : ((void*)0);
}
