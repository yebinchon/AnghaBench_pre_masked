
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gntdev_priv {int lock; } ;
struct TYPE_2__ {int flags; int event; } ;
struct gntdev_grant_map {int count; scalar_t__ pages; int next; TYPE_1__ notify; int users; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gntdev_grant_map*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct gntdev_grant_map*,int ,int ) ;
 int VAR_3 ;

void FUNC_9(struct gntdev_priv *VAR_4, struct gntdev_grant_map *VAR_5)
{
 if (!VAR_5)
  return;

 if (!FUNC_7(&VAR_5->users))
  return;

 FUNC_0(VAR_5->count, &VAR_1);

 if (VAR_5->notify.flags & VAR_0) {
  FUNC_6(VAR_5->notify.event);
  FUNC_1(VAR_5->notify.event);
 }

 if (VAR_2 && VAR_4) {
  FUNC_4(&VAR_4->lock);
  FUNC_3(&VAR_5->next);
  FUNC_5(&VAR_4->lock);
 }

 if (VAR_5->pages && !VAR_3)
  FUNC_8(VAR_5, 0, VAR_5->count);
 FUNC_2(VAR_5);
}
