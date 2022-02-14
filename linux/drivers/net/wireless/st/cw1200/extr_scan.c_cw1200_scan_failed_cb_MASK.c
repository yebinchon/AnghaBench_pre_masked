
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; int status; } ;
struct cw1200_common {scalar_t__ mode; TYPE_1__ scan; int workqueue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;

void FUNC_2(struct cw1200_common *VAR_2)
{
 if (VAR_2->mode == VAR_1)

  return;

 if (FUNC_0(&VAR_2->scan.timeout) > 0) {
  VAR_2->scan.status = -VAR_0;
  FUNC_1(VAR_2->workqueue, &VAR_2->scan.timeout, 0);
 }
}
