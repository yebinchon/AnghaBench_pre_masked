
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_world_ops {int (* fib4_abort ) (struct rocker*) ;} ;
struct rocker {struct rocker_world_ops* wops; } ;


 int FUNC_0 (struct rocker*) ;

__attribute__((used)) static void FUNC_1(struct rocker *VAR_0)
{
 struct rocker_world_ops *VAR_1 = VAR_0->wops;

 if (VAR_1->fib4_abort)
  VAR_1->fib4_abort(VAR_0);
}
