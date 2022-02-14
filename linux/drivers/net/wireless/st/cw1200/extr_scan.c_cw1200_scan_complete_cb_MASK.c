
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wsm_scan_complete {int dummy; } ;
struct TYPE_2__ {int status; int timeout; } ;
struct cw1200_common {scalar_t__ mode; TYPE_1__ scan; int workqueue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;

void FUNC_2(struct cw1200_common *VAR_1,
    struct wsm_scan_complete *VAR_2)
{
 if (VAR_1->mode == VAR_0)

  return;

 if (FUNC_0(&VAR_1->scan.timeout) > 0) {
  VAR_1->scan.status = 1;
  FUNC_1(VAR_1->workqueue, &VAR_1->scan.timeout, 0);
 }
}
