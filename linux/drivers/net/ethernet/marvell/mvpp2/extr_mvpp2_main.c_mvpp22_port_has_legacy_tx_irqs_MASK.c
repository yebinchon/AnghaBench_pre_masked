
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,char*) ;

__attribute__((used)) static bool FUNC_1(struct device_node *VAR_1,
        unsigned long *VAR_2)
{
 char *VAR_3[5] = { "rx-shared", "tx-cpu0", "tx-cpu1", "tx-cpu2",
     "tx-cpu3" };
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
  if (FUNC_0(VAR_1, "interrupt-names",
          VAR_3[VAR_4]) < 0)
   return 0;

 *VAR_2 |= VAR_0;
 return 1;
}
