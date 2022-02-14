
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct blk_mq_tag_set {struct nvme_loop_ctrl* driver_data; } ;
struct nvme_loop_ctrl {struct blk_mq_tag_set tag_set; int ctrl; } ;
struct TYPE_2__ {int * ctrl; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct nvme_loop_ctrl*,int ,unsigned int) ;
 TYPE_1__* FUNC_2 (struct request*) ;

__attribute__((used)) static int FUNC_3(struct blk_mq_tag_set *VAR_0,
  struct request *VAR_1, unsigned int VAR_2,
  unsigned int VAR_3)
{
 struct nvme_loop_ctrl *VAR_4 = VAR_0->driver_data;

 FUNC_2(VAR_1)->ctrl = &VAR_4->ctrl;
 return FUNC_1(VAR_4, FUNC_0(VAR_1),
   (VAR_0 == &VAR_4->tag_set) ? VAR_2 + 1 : 0);
}
