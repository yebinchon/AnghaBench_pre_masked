
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct dasd_ccw_req {TYPE_1__* dq; scalar_t__ callback_data; struct dasd_block* block; } ;
struct dasd_block {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dasd_ccw_req *VAR_1)
{
 struct dasd_block *VAR_2 = VAR_1->block;
 struct request *VAR_3;

 if (!VAR_2)
  return -VAR_0;
 FUNC_1(&VAR_1->dq->lock);
 VAR_3 = (struct request *) VAR_1->callback_data;
 FUNC_0(VAR_3, 0);
 FUNC_2(&VAR_1->dq->lock);

 return 0;
}
