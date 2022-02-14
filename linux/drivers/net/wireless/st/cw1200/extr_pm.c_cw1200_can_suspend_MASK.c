
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cw1200_common {TYPE_1__* hw; int bh_rx; } ;
struct TYPE_2__ {int wiphy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct cw1200_common *VAR_0)
{
 if (FUNC_0(&VAR_0->bh_rx)) {
  FUNC_1(VAR_0->hw->wiphy, "Suspend interrupted.\n");
  return 0;
 }
 return 1;
}
