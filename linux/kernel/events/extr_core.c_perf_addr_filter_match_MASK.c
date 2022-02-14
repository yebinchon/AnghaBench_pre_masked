
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dentry; } ;
struct perf_addr_filter {unsigned long offset; unsigned long size; TYPE_1__ path; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct file*) ;

__attribute__((used)) static bool FUNC_2(struct perf_addr_filter *VAR_0,
         struct file *VAR_1, unsigned long VAR_2,
         unsigned long VAR_3)
{

 if (!VAR_0->path.dentry)
  return 0;

 if (FUNC_0(VAR_0->path.dentry) != FUNC_1(VAR_1))
  return 0;

 if (VAR_0->offset > VAR_2 + VAR_3)
  return 0;

 if (VAR_0->offset + VAR_0->size < VAR_2)
  return 0;

 return 1;
}
