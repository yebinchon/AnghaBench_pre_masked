
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wsm_scan {int num_channels; TYPE_2__* ch; int flags; int type; } ;
struct TYPE_6__ {int timeout; int in_progress; } ;
struct cw1200_common {int join_status; TYPE_3__ scan; int workqueue; int pm_state; int recent_scan; int clear_recent_scan_work; TYPE_1__* hw; } ;
struct TYPE_5__ {scalar_t__ max_chan_time; } ;
struct TYPE_4__ {int wiphy; } ;




 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,char*,int ,int,int ) ;
 int FUNC_7 (struct cw1200_common*,struct wsm_scan*) ;

__attribute__((used)) static int FUNC_8(struct cw1200_common *VAR_1, struct wsm_scan *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5 = 2000;

 switch (VAR_1->join_status) {
 case 128:
 case 129:
  return -VAR_0;
 default:
  break;
 }

 FUNC_6(VAR_1->hw->wiphy, "[SCAN] hw req, type %d, %d channels, flags: 0x%x.\n",
    VAR_2->type, VAR_2->num_channels, VAR_2->flags);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_channels; ++VAR_4)
  VAR_5 += VAR_2->ch[VAR_4].max_chan_time + 10;

 FUNC_1(&VAR_1->clear_recent_scan_work);
 FUNC_0(&VAR_1->scan.in_progress, 1);
 FUNC_0(&VAR_1->recent_scan, 1);
 FUNC_2(&VAR_1->pm_state, FUNC_4(VAR_5));
 FUNC_5(VAR_1->workqueue, &VAR_1->scan.timeout,
      FUNC_4(VAR_5));
 VAR_3 = FUNC_7(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_1->scan.in_progress, 0);
  FUNC_1(&VAR_1->scan.timeout);
  FUNC_3(VAR_1);
 }
 return VAR_3;
}
