
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_afu_config {int dummy; } ;
struct ocxl_afu {struct ocxl_afu_config config; } ;



struct ocxl_afu_config *FUNC_0(struct ocxl_afu *VAR_0)
{
 return &VAR_0->config;
}
