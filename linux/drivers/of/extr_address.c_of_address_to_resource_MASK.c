
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct resource {int dummy; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,int const*,int ,unsigned int,char const*,struct resource*) ;
 int * FUNC_1 (struct device_node*,int,int *,unsigned int*) ;
 int FUNC_2 (struct device_node*,char*,int,char const**) ;

int FUNC_3(struct device_node *VAR_1, int VAR_2,
      struct resource *VAR_3)
{
 const __be32 *VAR_4;
 u64 VAR_5;
 unsigned int VAR_6;
 const char *VAR_7 = ((void*)0);

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_5, &VAR_6);
 if (VAR_4 == ((void*)0))
  return -VAR_0;


 FUNC_2(VAR_1, "reg-names", VAR_2, &VAR_7);

 return FUNC_0(VAR_1, VAR_4, VAR_5, VAR_6, VAR_7, VAR_3);
}
