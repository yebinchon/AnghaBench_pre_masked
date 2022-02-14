
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int) ;

__attribute__((used)) static bool FUNC_3(struct device_node *VAR_0,
      struct device_node *VAR_1,
      int *VAR_2)
{
 int VAR_3, VAR_4;
 bool VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_0,
      "regulator-coupled-with",
      ((void*)0));

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct device_node *VAR_6 = FUNC_2(VAR_0,
        "regulator-coupled-with", VAR_4);

  if (!VAR_6)
   break;


  if (VAR_6 == VAR_1)
   VAR_5 = 1;

  FUNC_1(VAR_6);

  if (VAR_5) {
   *VAR_2 = VAR_4;
   break;
  }
 }

 return VAR_5;
}
