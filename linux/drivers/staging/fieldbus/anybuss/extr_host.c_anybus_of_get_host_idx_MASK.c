
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int * FUNC_1 (struct device_node*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_1)
{
 const __be32 *VAR_2;

 VAR_2 = FUNC_1(VAR_1, 0, ((void*)0), ((void*)0));
 if (!VAR_2)
  return -VAR_0;
 return FUNC_0(*VAR_2);
}
