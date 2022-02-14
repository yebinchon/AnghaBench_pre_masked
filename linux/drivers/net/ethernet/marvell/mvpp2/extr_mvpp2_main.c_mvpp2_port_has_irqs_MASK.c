
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2 {scalar_t__ hw_version; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device_node*,unsigned long*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,char*) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static bool FUNC_3(struct mvpp2 *VAR_2,
    struct device_node *VAR_3,
    unsigned long *VAR_4)
{
 char VAR_5[5];
 int VAR_6;


 if (!VAR_3)
  return 1;

 if (VAR_2->hw_version == VAR_0)
  return 0;

 if (FUNC_0(VAR_3, VAR_4))
  return 1;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_2(VAR_5, 5, "hif%d", VAR_6);
  if (FUNC_1(VAR_3, "interrupt-names",
          VAR_5) < 0)
   return 0;
 }

 return 1;
}
