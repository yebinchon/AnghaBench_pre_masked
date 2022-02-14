
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct device_node*,char*,int*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4(struct device_node *VAR_1, char *VAR_2, int VAR_3)
{
 const char *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_1, "compatible", &VAR_6);
 if (!VAR_4 || FUNC_3(VAR_4) > VAR_6)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_4, ',');
 FUNC_2(VAR_2, VAR_5 ? VAR_5 + 1 : VAR_4, VAR_3);
 return 0;
}
