
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_fn {int pasid_list; int afu_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocxl_fn*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ocxl_fn *VAR_0)
{
 FUNC_0(!FUNC_2(&VAR_0->afu_list));
 FUNC_0(!FUNC_2(&VAR_0->pasid_list));
 FUNC_1(VAR_0);
}
