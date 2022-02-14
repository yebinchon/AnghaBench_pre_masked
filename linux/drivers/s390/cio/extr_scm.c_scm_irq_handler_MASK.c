
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scm_driver {int (* handler ) (struct scm_device*,int ,int ) ;} ;
struct TYPE_4__ {int driver; } ;
struct scm_device {TYPE_2__ dev; } ;
struct aob_rq_header {int data; struct scm_device* scmdev; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct aob {TYPE_1__ request; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct scm_device*,int ,int ) ;
 struct scm_driver* FUNC_1 (int ) ;

void FUNC_2(struct aob *VAR_0, blk_status_t VAR_1)
{
 struct aob_rq_header *VAR_2 = (void *) VAR_0->request.data;
 struct scm_device *VAR_3 = VAR_2->scmdev;
 struct scm_driver *VAR_4 = FUNC_1(VAR_3->dev.driver);

 VAR_4->handler(VAR_3, VAR_2->data, VAR_1);
}
