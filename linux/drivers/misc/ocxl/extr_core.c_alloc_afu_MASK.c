
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_fn {int dummy; } ;
struct ocxl_afu {struct ocxl_fn* fn; int contexts_idr; int afu_control_lock; int contexts_lock; int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ocxl_afu* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ocxl_fn*) ;

__attribute__((used)) static struct ocxl_afu *FUNC_5(struct ocxl_fn *VAR_1)
{
 struct ocxl_afu *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct ocxl_afu), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(&VAR_2->kref);
 FUNC_3(&VAR_2->contexts_lock);
 FUNC_3(&VAR_2->afu_control_lock);
 FUNC_0(&VAR_2->contexts_idr);
 VAR_2->fn = VAR_1;
 FUNC_4(VAR_1);
 return VAR_2;
}
