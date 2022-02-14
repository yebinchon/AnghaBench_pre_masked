
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct ocxl_fn {struct list_head afu_list; } ;



struct list_head *FUNC_0(struct ocxl_fn *VAR_0)
{
 return &VAR_0->afu_list;
}
