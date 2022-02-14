
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ccw_request {int mask; int lpm; int maxretries; int retries; int singlepath; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct ccw_request req; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static u16 FUNC_1(struct ccw_device *VAR_0)
{
 struct ccw_request *VAR_1 = &VAR_0->private->req;

 if (!VAR_1->singlepath) {
  VAR_1->mask = 0;
  goto out;
 }
 VAR_1->retries = VAR_1->maxretries;
 VAR_1->mask = FUNC_0(VAR_1->mask >> 1, VAR_1->lpm);
out:
 return VAR_1->mask;
}
