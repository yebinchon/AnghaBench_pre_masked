
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int max_pasid_log; } ;
struct ocxl_fn {int pasid_list; TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,char*) ;

int FUNC_1(struct ocxl_fn *VAR_1, u32 VAR_2)
{
 int VAR_3;

 if (VAR_1->config.max_pasid_log < 0)
  return -VAR_0;
 VAR_3 = 1 << VAR_1->config.max_pasid_log;
 return FUNC_0(&VAR_1->pasid_list, VAR_2, VAR_3, "afu pasid");
}
