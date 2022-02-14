
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bv_offset; struct page* bv_page; } ;
struct request {int rq_flags; TYPE_2__ special_vec; TYPE_1__* rq_disk; } ;
struct page {int dummy; } ;
struct nvme_ns {TYPE_3__* ctrl; } ;
struct TYPE_6__ {int discard_page_busy; struct page* discard_page; } ;
struct TYPE_4__ {struct nvme_ns* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct page*) ;

void FUNC_3(struct request *VAR_1)
{
 if (VAR_1->rq_flags & VAR_0) {
  struct nvme_ns *VAR_2 = VAR_1->rq_disk->private_data;
  struct page *VAR_3 = VAR_1->special_vec.bv_page;

  if (VAR_3 == VAR_2->ctrl->discard_page)
   FUNC_0(0, &VAR_2->ctrl->discard_page_busy);
  else
   FUNC_1(FUNC_2(VAR_3) + VAR_1->special_vec.bv_offset);
 }
}
