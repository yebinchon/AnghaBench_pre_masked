
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct bnad_rx_info {scalar_t__ rx_id; int * rx; TYPE_4__* rx_ctrl; } ;
struct TYPE_6__ {int rx_comp; } ;
struct bnad {int cfg_flags; int bna_lock; TYPE_2__ bnad_completions; int dim_timer; int run_flags; TYPE_1__* rx_res_info; struct bna_rx_config* rx_config; struct bnad_rx_info* rx_info; } ;
struct bna_rx_config {int num_paths; } ;
struct bna_res_info {int dummy; } ;
struct TYPE_8__ {TYPE_3__* ccb; } ;
struct TYPE_7__ {scalar_t__ intr_type; } ;
struct TYPE_5__ {struct bna_res_info* res_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct bnad*,size_t) ;
 int FUNC_3 (struct bnad*,struct bnad_rx_info*,int ) ;
 int FUNC_4 (struct bnad*,struct bna_res_info*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;

void
FUNC_12(struct bnad *VAR_5, u32 VAR_6)
{
 struct bnad_rx_info *VAR_7 = &VAR_5->rx_info[VAR_6];
 struct bna_rx_config *VAR_8 = &VAR_5->rx_config[VAR_6];
 struct bna_res_info *VAR_9 = &VAR_5->rx_res_info[VAR_6].res_info[0];
 unsigned long VAR_10;
 int VAR_11 = 0;

 if (!VAR_7->rx)
  return;

 if (0 == VAR_6) {
  FUNC_8(&VAR_5->bna_lock, VAR_10);
  if (VAR_5->cfg_flags & VAR_0 &&
      FUNC_10(VAR_1, &VAR_5->run_flags)) {
   FUNC_5(VAR_1, &VAR_5->run_flags);
   VAR_11 = 1;
  }
  FUNC_9(&VAR_5->bna_lock, VAR_10);
  if (VAR_11)
   FUNC_6(&VAR_5->dim_timer);
 }

 FUNC_7(&VAR_5->bnad_completions.rx_comp);
 FUNC_8(&VAR_5->bna_lock, VAR_10);
 FUNC_1(VAR_7->rx, VAR_2, VAR_4);
 FUNC_9(&VAR_5->bna_lock, VAR_10);
 FUNC_11(&VAR_5->bnad_completions.rx_comp);

 if (VAR_7->rx_ctrl[0].ccb->intr_type == VAR_3)
  FUNC_3(VAR_5, VAR_7, VAR_8->num_paths);

 FUNC_2(VAR_5, VAR_6);

 FUNC_8(&VAR_5->bna_lock, VAR_10);
 FUNC_0(VAR_7->rx);

 VAR_7->rx = ((void*)0);
 VAR_7->rx_id = 0;
 FUNC_9(&VAR_5->bna_lock, VAR_10);

 FUNC_4(VAR_5, VAR_9);
}
