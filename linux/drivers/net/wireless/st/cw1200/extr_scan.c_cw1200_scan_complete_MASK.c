
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int work; int lock; scalar_t__ direct_probe; } ;
struct cw1200_common {TYPE_2__ scan; TYPE_1__* hw; int clear_recent_scan_work; int workqueue; } ;
struct TYPE_3__ {int wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct cw1200_common*) ;

__attribute__((used)) static void FUNC_6(struct cw1200_common *VAR_1)
{
 FUNC_2(VAR_1->workqueue, &VAR_1->clear_recent_scan_work, VAR_0);
 if (VAR_1->scan.direct_probe) {
  FUNC_4(VAR_1->hw->wiphy, "[SCAN] Direct probe complete.\n");
  FUNC_0(VAR_1);
  VAR_1->scan.direct_probe = 0;
  FUNC_3(&VAR_1->scan.lock);
  FUNC_5(VAR_1);
 } else {
  FUNC_1(&VAR_1->scan.work);
 }
}
