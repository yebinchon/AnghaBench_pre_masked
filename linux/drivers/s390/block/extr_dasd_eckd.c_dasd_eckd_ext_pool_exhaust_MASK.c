
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext_pool_exhaust_work_data {int worker; int * base; struct dasd_device* device; } ;
struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int * basedev; TYPE_1__* block; } ;
struct TYPE_2__ {int * base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct dasd_device*) ;
 struct ext_pool_exhaust_work_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dasd_device *VAR_3,
          struct dasd_ccw_req *VAR_4)
{
 struct ext_pool_exhaust_work_data *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_0(&VAR_5->worker, VAR_2);
 FUNC_1(VAR_3);
 VAR_5->device = VAR_3;

 if (VAR_4->block)
  VAR_5->base = VAR_4->block->base;
 else if (VAR_4->basedev)
  VAR_5->base = VAR_4->basedev;
 else
  VAR_5->base = ((void*)0);

 FUNC_3(&VAR_5->worker);

 return 0;
}
