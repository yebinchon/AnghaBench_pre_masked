
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* block; } ;
struct dasd_ccw_req {int stopclk; int status; struct dasd_device* startdev; } ;
struct TYPE_2__ {int bp_block; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dasd_device*,int ,int ,int *) ;
 int FUNC_3 (struct dasd_device*) ;

__attribute__((used)) static int
FUNC_4(struct dasd_ccw_req * VAR_1)
{
 struct dasd_device *VAR_2;

 VAR_2 = VAR_1->startdev;
 FUNC_3(VAR_2);
 FUNC_2(VAR_2, VAR_2->block->bp_block, 0, ((void*)0));
 VAR_1->status = VAR_0;
 VAR_1->stopclk = FUNC_1();
 FUNC_0(VAR_2);
 return 0;
}
