
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_world_ops {int (* fini ) (struct rocker*) ;} ;
struct rocker {int wpriv; struct rocker_world_ops* wops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rocker*) ;

__attribute__((used)) static void FUNC_2(struct rocker *VAR_0)
{
 struct rocker_world_ops *VAR_1 = VAR_0->wops;

 if (!VAR_1 || !VAR_1->fini)
  return;
 VAR_1->fini(VAR_0);
 FUNC_0(VAR_0->wpriv);
}
