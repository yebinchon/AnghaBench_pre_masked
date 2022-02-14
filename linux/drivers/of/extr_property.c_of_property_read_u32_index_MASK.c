
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (struct device_node const*,char const*,int,int ,int *) ;

int FUNC_4(const struct device_node *VAR_0,
           const char *VAR_1,
           u32 VAR_2, u32 *VAR_3)
{
 const u32 *VAR_4 = FUNC_3(VAR_0, VAR_1,
     ((VAR_2 + 1) * sizeof(*VAR_3)),
     0,
     ((void*)0));

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 *VAR_3 = FUNC_2(((__be32 *)VAR_4) + VAR_2);
 return 0;
}
