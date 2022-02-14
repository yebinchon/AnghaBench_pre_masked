
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cxl_context* private_data; } ;
struct cxl_context {int dummy; } ;



struct cxl_context *FUNC_0(struct file *VAR_0)
{
 return VAR_0->private_data;
}
