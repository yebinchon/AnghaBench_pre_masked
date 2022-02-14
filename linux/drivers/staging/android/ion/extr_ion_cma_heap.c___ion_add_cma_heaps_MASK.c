
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_heap {int name; } ;
struct cma {int dummy; } ;


 scalar_t__ FUNC_0 (struct ion_heap*) ;
 int FUNC_1 (struct ion_heap*) ;
 struct ion_heap* FUNC_2 (struct cma*) ;
 int FUNC_3 (struct cma*) ;
 int FUNC_4 (struct ion_heap*) ;

__attribute__((used)) static int FUNC_5(struct cma *VAR_0, void *VAR_1)
{
 struct ion_heap *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_2->name = FUNC_3(VAR_0);

 FUNC_4(VAR_2);
 return 0;
}
