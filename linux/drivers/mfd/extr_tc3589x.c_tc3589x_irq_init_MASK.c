
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc3589x {int dev; int domain; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct device_node*,int ,int ,int *,struct tc3589x*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct tc3589x *VAR_3, struct device_node *VAR_4)
{
 VAR_3->domain = FUNC_1(
  VAR_4, VAR_1, 0,
  &VAR_2, VAR_3);

 if (!VAR_3->domain) {
  FUNC_0(VAR_3->dev, "Failed to create irqdomain\n");
  return -VAR_0;
 }

 return 0;
}
