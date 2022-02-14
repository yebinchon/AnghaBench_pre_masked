
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxu_murb {int dummy; } ;
struct oxu_hcd {int* murb_used; int mem_lock; struct oxu_murb* murb_pool; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct oxu_murb *FUNC_2(struct oxu_hcd *VAR_1)

{
 int VAR_2;
 struct oxu_murb *VAR_3 = ((void*)0);

 FUNC_0(&VAR_1->mem_lock);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (!VAR_1->murb_used[VAR_2])
   break;

 if (VAR_2 < VAR_0) {
  VAR_3 = &(VAR_1->murb_pool)[VAR_2];

  VAR_1->murb_used[VAR_2] = 1;
 }

 FUNC_1(&VAR_1->mem_lock);

 return VAR_3;
}
