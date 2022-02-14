
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, "lantiq,groups");
 if (VAR_1 < 0)
  VAR_1 = FUNC_0(VAR_0, "lantiq,pins");
 return VAR_1;
}
