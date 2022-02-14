
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; } ;
struct bnad {int cfg_flags; int bna_lock; TYPE_1__* rx_info; } ;
typedef enum bna_rxmode { ____Placeholder_bna_rxmode } bna_rxmode ;
struct TYPE_2__ {int * rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct bnad*) ;
 int FUNC_2 (struct bnad*) ;
 struct bnad* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(struct net_device *VAR_8)
{
 struct bnad *VAR_9 = FUNC_3(VAR_8);
 enum bna_rxmode VAR_10, VAR_11;
 unsigned long VAR_12;

 FUNC_4(&VAR_9->bna_lock, VAR_12);

 if (VAR_9->rx_info[0].rx == ((void*)0)) {
  FUNC_5(&VAR_9->bna_lock, VAR_12);
  return;
 }


 VAR_9->cfg_flags &= ~(VAR_2 | VAR_1 |
   VAR_0);

 VAR_10 = 0;
 if (VAR_8->flags & VAR_7) {
  VAR_10 |= VAR_3;
  VAR_9->cfg_flags |= VAR_2;
 } else {
  FUNC_1(VAR_9);

  if (VAR_9->cfg_flags & VAR_0)
   VAR_10 |= VAR_4;

  FUNC_2(VAR_9);

  if (VAR_9->cfg_flags & VAR_1)
   VAR_10 |= VAR_5;
 }

 VAR_11 = VAR_6 | VAR_5 |
   VAR_4;
 FUNC_0(VAR_9->rx_info[0].rx, VAR_10, VAR_11);

 FUNC_5(&VAR_9->bna_lock, VAR_12);
}
