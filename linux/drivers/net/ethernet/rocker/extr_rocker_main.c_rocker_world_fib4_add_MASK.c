
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_world_ops {int (* fib4_add ) (struct rocker*,struct fib_entry_notifier_info const*) ;} ;
struct rocker {struct rocker_world_ops* wops; } ;
struct fib_entry_notifier_info {int dummy; } ;


 int FUNC_0 (struct rocker*,struct fib_entry_notifier_info const*) ;

__attribute__((used)) static int FUNC_1(struct rocker *VAR_0,
     const struct fib_entry_notifier_info *VAR_1)
{
 struct rocker_world_ops *VAR_2 = VAR_0->wops;

 if (!VAR_2->fib4_add)
  return 0;
 return VAR_2->fib4_add(VAR_0, VAR_1);
}
