
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct request {struct gendisk* rq_disk; } ;
struct nvme_fault_inject {scalar_t__ dont_retry; int status; int attr; } ;
struct nvme_ns {struct nvme_fault_inject fault_inject; } ;
struct gendisk {struct nvme_ns* private_data; } ;
struct TYPE_4__ {int status; TYPE_1__* ctrl; } ;
struct TYPE_3__ {struct nvme_fault_inject fault_inject; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 TYPE_2__* FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int *,int) ;

void FUNC_3(struct request *VAR_1)
{
 struct gendisk *VAR_2 = VAR_1->rq_disk;
 struct nvme_fault_inject *VAR_3 = ((void*)0);
 u16 VAR_4;

 if (VAR_2) {
  struct nvme_ns *VAR_5 = VAR_2->private_data;

  if (VAR_5)
   VAR_3 = &VAR_5->fault_inject;
  else
   FUNC_0(1, "No namespace found for request\n");
 } else {
  VAR_3 = &FUNC_1(VAR_1)->ctrl->fault_inject;
 }

 if (VAR_3 && FUNC_2(&VAR_3->attr, 1)) {

  VAR_4 = VAR_3->status;
  if (VAR_3->dont_retry)
   VAR_4 |= VAR_0;
  FUNC_1(VAR_1)->status = VAR_4;
 }
}
