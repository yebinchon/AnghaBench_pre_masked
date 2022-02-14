
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_fn_config {int dummy; } ;
struct ocxl_fn {struct ocxl_fn_config const config; } ;



const struct ocxl_fn_config *FUNC_0(struct ocxl_fn *VAR_0)
{
 return &VAR_0->config;
}
