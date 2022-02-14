
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cw1200_common {int bh_suspend; scalar_t__ bh_error; int bh_evt_wq; int bh_wq; TYPE_1__* hw; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct cw1200_common *VAR_5)
{
 FUNC_2("[BH] suspend.\n");
 if (VAR_5->bh_error) {
  FUNC_5(VAR_5->hw->wiphy, "BH error -- can't suspend\n");
  return -VAR_2;
 }

 FUNC_1(&VAR_5->bh_suspend, VAR_0);
 FUNC_4(&VAR_5->bh_wq);
 return FUNC_3(VAR_5->bh_evt_wq, VAR_5->bh_error ||
  (VAR_1 == FUNC_0(&VAR_5->bh_suspend)),
   1 * VAR_4) ? 0 : -VAR_3;
}
