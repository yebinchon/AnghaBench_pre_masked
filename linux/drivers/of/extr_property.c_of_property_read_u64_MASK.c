
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (struct device_node const*,char const*,int,int ,int *) ;
 int FUNC_3 (int const*,int) ;

int FUNC_4(const struct device_node *VAR_0, const char *VAR_1,
    u64 *VAR_2)
{
 const __be32 *VAR_3 = FUNC_2(VAR_0, VAR_1,
      sizeof(*VAR_2),
      0,
      ((void*)0));

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 *VAR_2 = FUNC_3(VAR_3, 2);
 return 0;
}
