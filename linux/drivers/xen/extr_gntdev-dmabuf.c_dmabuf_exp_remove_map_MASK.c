
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gntdev_priv {int lock; } ;
struct gntdev_grant_map {int next; } ;


 int FUNC_0 (int *,struct gntdev_grant_map*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gntdev_priv *VAR_0,
      struct gntdev_grant_map *VAR_1)
{
 FUNC_2(&VAR_0->lock);
 FUNC_1(&VAR_1->next);
 FUNC_0(((void*)0) , VAR_1);
 FUNC_3(&VAR_0->lock);
}
