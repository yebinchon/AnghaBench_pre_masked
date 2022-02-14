
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef enum su_type { ____Placeholder_su_type } su_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device_node* FUNC_0 (char const*) ;
 char* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static enum su_type FUNC_3(struct device_node *VAR_3)
{
 struct device_node *VAR_4 = FUNC_0("/aliases");
 enum su_type VAR_5 = VAR_2;

 if (VAR_4) {
  const char *VAR_6 = FUNC_1(VAR_4, "keyboard", ((void*)0));
  const char *VAR_7 = FUNC_1(VAR_4, "mouse", ((void*)0));
  struct device_node *VAR_8;

  if (VAR_6) {
   VAR_8 = FUNC_0(VAR_6);






   FUNC_2(VAR_8);

   if (VAR_3 == VAR_8) {
    VAR_5 = VAR_0;
    goto out;
   }
  }
  if (VAR_7) {
   VAR_8 = FUNC_0(VAR_7);

   FUNC_2(VAR_8);

   if (VAR_3 == VAR_8) {
    VAR_5 = VAR_1;
    goto out;
   }
  }
 }

out:
 FUNC_2(VAR_4);
 return VAR_5;
}
