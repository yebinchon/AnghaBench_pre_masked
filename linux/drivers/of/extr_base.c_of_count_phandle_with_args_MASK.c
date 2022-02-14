
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_iterator {int dummy; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (struct device_node const*,char const*,int*) ;
 int FUNC_1 (struct of_phandle_iterator*,struct device_node const*,char const*,char const*,int) ;
 int FUNC_2 (struct of_phandle_iterator*) ;

int FUNC_3(const struct device_node *VAR_1, const char *VAR_2,
    const char *VAR_3)
{
 struct of_phandle_iterator VAR_4;
 int VAR_5, VAR_6 = 0;







 if (!VAR_3) {
  const __be32 *VAR_7;
  int VAR_8;

  VAR_7 = FUNC_0(VAR_1, VAR_2, &VAR_8);
  if (!VAR_7)
   return -VAR_0;

  return VAR_8 / sizeof(*VAR_7);
 }

 VAR_5 = FUNC_1(&VAR_4, VAR_1, VAR_2, VAR_3, -1);
 if (VAR_5)
  return VAR_5;

 while ((VAR_5 = FUNC_2(&VAR_4)) == 0)
  VAR_6 += 1;

 if (VAR_5 != -VAR_0)
  return VAR_5;

 return VAR_6;
}
