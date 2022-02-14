
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int dummy; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct device_node const*,int const*,int,int,int,struct of_phandle_args*) ;
 int FUNC_1 (struct device_node const*,char const*,int const**,int*,int*) ;

int FUNC_2(const struct device_node *VAR_0,
      const char *VAR_1, int VAR_2,
      struct of_phandle_args *VAR_3)
{
 const __be32 *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_4,
        &VAR_6, &VAR_5);
 if (VAR_7 || !VAR_6)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_4, VAR_2, VAR_6, VAR_5,
      VAR_3);
 if (VAR_7)
  return VAR_7;

 return 0;
}
