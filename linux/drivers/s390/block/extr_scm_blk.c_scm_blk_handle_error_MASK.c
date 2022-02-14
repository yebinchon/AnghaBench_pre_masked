
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scm_request {scalar_t__ error; TYPE_3__* aob; struct scm_blk_dev* bdev; } ;
struct scm_blk_dev {int lock; int state; TYPE_1__* scmdev; } ;
struct TYPE_5__ {int eqc; } ;
struct TYPE_6__ {TYPE_2__ response; } ;
struct TYPE_4__ {scalar_t__ address; } ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (struct scm_request*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct scm_request *VAR_2)
{
 struct scm_blk_dev *VAR_3 = VAR_2->bdev;
 unsigned long VAR_4;

 if (VAR_2->error != VAR_0)
  goto restart;


 switch (VAR_2->aob->response.eqc) {
 case 128:
  FUNC_3(&VAR_3->lock, VAR_4);
  if (VAR_3->state != VAR_1)
   FUNC_1("%lx: Write access to the SCM increment is suspended\n",
    (unsigned long) VAR_3->scmdev->address);
  VAR_3->state = VAR_1;
  FUNC_4(&VAR_3->lock, VAR_4);
  goto requeue;
 default:
  break;
 }

restart:
 if (!FUNC_0(VAR_2->aob))
  return;

requeue:
 FUNC_2(VAR_2);
}
