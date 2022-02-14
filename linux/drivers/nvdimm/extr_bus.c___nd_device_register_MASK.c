
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device* parent; int * bus; } ;
struct TYPE_2__ {scalar_t__ numa_node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct device*,int *) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct device*,scalar_t__) ;
 TYPE_1__* FUNC_5 (struct device*) ;

void FUNC_6(struct device *VAR_4)
{
 if (!VAR_4)
  return;







 if (FUNC_3(VAR_4))
  FUNC_4(VAR_4, FUNC_5(VAR_4)->numa_node);

 VAR_4->bus = &VAR_3;
 if (VAR_4->parent) {
  FUNC_2(VAR_4->parent);
  if (FUNC_1(VAR_4) == VAR_0)
   FUNC_4(VAR_4, FUNC_1(VAR_4->parent));
 }
 FUNC_2(VAR_4);

 FUNC_0(VAR_1, VAR_4,
      &VAR_2);
}
