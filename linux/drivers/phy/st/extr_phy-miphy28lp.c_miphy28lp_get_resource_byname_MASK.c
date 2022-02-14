
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,int,struct resource*) ;
 int FUNC_1 (struct device_node*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_1,
       char *VAR_2, struct resource *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, "reg-names", VAR_2);
 if (VAR_4 < 0)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_4, VAR_3);
}
