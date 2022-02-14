
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct device_node const*,char const*,int const**,int*,int*) ;

int FUNC_1(const struct device_node *VAR_0,
      const char *VAR_1)
{
 const __be32 *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_2,
        &VAR_4, &VAR_3);
 if (VAR_5)
  return VAR_5;

 return VAR_3;
}
