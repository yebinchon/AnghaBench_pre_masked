
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* request; } ;
struct fib {int * callback; int * callback_data; int type; TYPE_3__* hw_fib_va; } ;
struct aac_dev {struct fib* fibs; } ;
struct TYPE_5__ {scalar_t__ XferState; } ;
struct TYPE_6__ {TYPE_2__ header; } ;
struct TYPE_4__ {size_t tag; } ;


 int VAR_0 ;

struct fib *FUNC_0(struct aac_dev *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct fib *VAR_3;

 VAR_3 = &VAR_1->fibs[VAR_2->request->tag];




 VAR_3->hw_fib_va->header.XferState = 0;
 VAR_3->type = VAR_0;
 VAR_3->callback_data = ((void*)0);
 VAR_3->callback = ((void*)0);

 return VAR_3;
}
