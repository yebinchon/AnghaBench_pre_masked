
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct file {struct perf_event const* private_data; int * f_op; } ;


 int VAR_0 ;
 struct perf_event const* FUNC_0 (int ) ;
 int VAR_1 ;

const struct perf_event *FUNC_1(struct file *VAR_2)
{
 if (VAR_2->f_op != &VAR_1)
  return FUNC_0(-VAR_0);

 return VAR_2->private_data;
}
