
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_request {int mask; int lpm; scalar_t__ cancel; scalar_t__ done; scalar_t__ drc; int maxretries; int retries; scalar_t__ singlepath; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct ccw_request req; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*,int ) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct ccw_device *VAR_1)
{
 struct ccw_request *VAR_2 = &VAR_1->private->req;

 if (VAR_2->singlepath) {

  VAR_2->mask = 0x8080;
 } else
  VAR_2->mask = VAR_2->lpm;

 VAR_2->retries = VAR_2->maxretries;
 VAR_2->mask = FUNC_2(VAR_2->mask, VAR_2->lpm);
 VAR_2->drc = 0;
 VAR_2->done = 0;
 VAR_2->cancel = 0;
 if (!VAR_2->mask)
  goto out_nopath;
 FUNC_0(VAR_1);
 return;

out_nopath:
 FUNC_1(VAR_1, -VAR_0);
}
