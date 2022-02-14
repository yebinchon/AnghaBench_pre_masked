
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node*,char const*) ;
 int FUNC_1 (struct device_node*) ;
 char* FUNC_2 (char const*,char) ;
 char* FUNC_3 (char const*,char) ;

struct device_node *FUNC_4(struct device_node *VAR_0,
      const char *VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_1, ':');

 while (VAR_0 && *VAR_1 == '/') {
  struct device_node *VAR_3 = VAR_0;

  VAR_1++;
  VAR_0 = FUNC_0(VAR_0, VAR_1);
  FUNC_1(VAR_3);
  VAR_1 = FUNC_3(VAR_1, '/');
  if (VAR_2 && VAR_2 < VAR_1)
   break;
 }
 return VAR_0;
}
