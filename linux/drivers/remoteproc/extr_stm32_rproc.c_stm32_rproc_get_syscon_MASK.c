
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_syscon {int mask; int reg; int * map; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device_node*,char const*,int,int *) ;
 int * FUNC_3 (struct device_node*,char const*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_0, const char *VAR_1,
      struct stm32_syscon *VAR_2)
{
 int VAR_3 = 0;

 VAR_2->map = FUNC_3(VAR_0, VAR_1);
 if (FUNC_0(VAR_2->map)) {
  VAR_3 = FUNC_1(VAR_2->map);
  VAR_2->map = ((void*)0);
  goto out;
 }

 VAR_3 = FUNC_2(VAR_0, VAR_1, 1, &VAR_2->reg);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_2(VAR_0, VAR_1, 2, &VAR_2->mask);

out:
 return VAR_3;
}
