
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {int stats_timer; int run_flags; int netdev; } ;
struct bna_stats {int dummy; } ;
typedef enum bna_cb_status { ____Placeholder_bna_cb_status } bna_cb_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnad*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

void
FUNC_5(struct bnad *VAR_5, enum bna_cb_status VAR_6,
         struct bna_stats *VAR_7)
{
 if (VAR_6 == VAR_2)
  FUNC_0(VAR_5, VAR_3);

 if (!FUNC_3(VAR_5->netdev) ||
  !FUNC_4(VAR_0, &VAR_5->run_flags))
  return;

 FUNC_1(&VAR_5->stats_timer,
    VAR_4 + FUNC_2(VAR_1));
}
