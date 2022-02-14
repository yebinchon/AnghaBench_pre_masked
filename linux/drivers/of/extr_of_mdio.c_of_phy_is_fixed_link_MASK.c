
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int __be32 ;


 struct device_node* FUNC_0 (struct device_node*,char*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

bool FUNC_5(struct device_node *VAR_0)
{
 struct device_node *VAR_1;
 int VAR_2, VAR_3;
 const char *VAR_4;


 VAR_1 = FUNC_0(VAR_0, "fixed-link");
 if (VAR_1) {
  FUNC_2(VAR_1);
  return 1;
 }

 VAR_3 = FUNC_3(VAR_0, "managed", &VAR_4);
 if (VAR_3 == 0 && FUNC_4(VAR_4, "auto") != 0)
  return 1;


 if (FUNC_1(VAR_0, "fixed-link", &VAR_2) &&
     VAR_2 == (5 * sizeof(__be32)))
  return 1;

 return 0;
}
