
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int const) ;
 struct device_node* FUNC_1 (struct device_node const*,struct device_node*) ;
 int * FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static struct device_node *FUNC_3
    (const struct device_node *VAR_0, int VAR_1)
{
 struct device_node *VAR_2 = ((void*)0);
 int VAR_3;
 const __be32 *VAR_4;

 for (;;) {
  VAR_2 = FUNC_1(VAR_0, VAR_2);
  if (!VAR_2)
   break;
  VAR_4 = FUNC_2(VAR_2, "reg", &VAR_3);
  if (VAR_4 && (FUNC_0(*VAR_4) == VAR_1))
   break;
 }
 return VAR_2;
}
