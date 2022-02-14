
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnad_rx_info {int rx; } ;
struct TYPE_2__ {int mcast_comp_status; int mcast_comp; } ;
struct bnad {TYPE_1__ bnad_completions; int bna_lock; struct bnad_rx_info* rx_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct bnad *VAR_4)
{
 struct bnad_rx_info *VAR_5 = &VAR_4->rx_info[0];
 int VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_4->bnad_completions.mcast_comp);

 FUNC_2(&VAR_4->bna_lock, VAR_7);
 VAR_6 = FUNC_0(VAR_5->rx, VAR_2,
          VAR_3);
 FUNC_3(&VAR_4->bna_lock, VAR_7);

 if (VAR_6 == VAR_0)
  FUNC_4(&VAR_4->bnad_completions.mcast_comp);
 else
  return -VAR_1;

 if (VAR_4->bnad_completions.mcast_comp_status != VAR_0)
  return -VAR_1;

 return 0;
}
