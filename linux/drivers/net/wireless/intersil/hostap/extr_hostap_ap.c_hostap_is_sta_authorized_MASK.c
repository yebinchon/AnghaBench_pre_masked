
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int flags; int ap; } ;
struct ap_data {int sta_table_lock; TYPE_1__* local; } ;
struct TYPE_2__ {scalar_t__ ieee_802_1x; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sta_info* FUNC_0 (struct ap_data*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ap_data *VAR_2, u8 *VAR_3)
{
 struct sta_info *VAR_4;
 int VAR_5 = 0;

 FUNC_1(&VAR_2->sta_table_lock);
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 != ((void*)0) && (VAR_4->flags & VAR_0) && !VAR_4->ap &&
     ((VAR_4->flags & VAR_1) ||
      VAR_2->local->ieee_802_1x == 0))
  VAR_5 = 1;
 FUNC_2(&VAR_2->sta_table_lock);

 return VAR_5;
}
