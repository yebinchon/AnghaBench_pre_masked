
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_fn {int actag_list; int pasid_list; int afu_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ocxl_fn* FUNC_1 (int,int ) ;

__attribute__((used)) static struct ocxl_fn *FUNC_2(void)
{
 struct ocxl_fn *VAR_1;

 VAR_1 = FUNC_1(sizeof(struct ocxl_fn), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->afu_list);
 FUNC_0(&VAR_1->pasid_list);
 FUNC_0(&VAR_1->actag_list);

 return VAR_1;
}
