
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmem_device {int * bb_state; } ;
struct device {int parent; } ;


 struct pmem_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct pmem_device *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0))
  FUNC_3(FUNC_5(VAR_0));
 else {




  FUNC_4(VAR_1->bb_state);
  VAR_1->bb_state = ((void*)0);
 }
 FUNC_2(FUNC_6(VAR_0->parent), ((void*)0));

 return 0;
}
