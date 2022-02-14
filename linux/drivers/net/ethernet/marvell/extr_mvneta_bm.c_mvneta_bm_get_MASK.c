
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mvneta_bm {int dummy; } ;
struct device_node {int dummy; } ;


 struct platform_device* FUNC_0 (struct device_node*) ;
 struct mvneta_bm* FUNC_1 (struct platform_device*) ;

struct mvneta_bm *FUNC_2(struct device_node *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? FUNC_1(VAR_1) : ((void*)0);
}
