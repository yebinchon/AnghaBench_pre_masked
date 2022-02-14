
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_ccw_req {scalar_t__ retries; scalar_t__ startdev; TYPE_1__* block; int lpm; int status; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dasd_ccw_req *VAR_2)
{
 if (VAR_2->retries < 0) {
  VAR_2->status = VAR_0;
  return;
 }
 VAR_2->status = VAR_1;
 if (VAR_2->block && (VAR_2->startdev != VAR_2->block->base)) {
  FUNC_0(VAR_2);
  VAR_2->startdev = VAR_2->block->base;
  VAR_2->lpm = FUNC_1(VAR_2->block->base);
 }
}
