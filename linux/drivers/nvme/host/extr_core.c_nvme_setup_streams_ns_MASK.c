
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct streams_directive_params {int sgs; int sws; } ;
struct nvme_ns {unsigned int sws; int sgs; int lba_shift; int queue; TYPE_1__* head; } ;
struct nvme_ctrl {int nr_streams; } ;
struct TYPE_2__ {int ns_id; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct nvme_ctrl*,struct streams_directive_params*,int ) ;

__attribute__((used)) static int FUNC_5(struct nvme_ctrl *VAR_0, struct nvme_ns *VAR_1)
{
 struct streams_directive_params VAR_2;
 int VAR_3;

 if (!VAR_0->nr_streams)
  return 0;

 VAR_3 = FUNC_4(VAR_0, &VAR_2, VAR_1->head->ns_id);
 if (VAR_3)
  return VAR_3;

 VAR_1->sws = FUNC_3(VAR_2.sws);
 VAR_1->sgs = FUNC_2(VAR_2.sgs);

 if (VAR_1->sws) {
  unsigned int VAR_4 = 1 << VAR_1->lba_shift;

  FUNC_0(VAR_1->queue, VAR_4 * VAR_1->sws);
  if (VAR_1->sgs)
   FUNC_1(VAR_1->queue, VAR_4 * VAR_1->sws * VAR_1->sgs);
 }

 return 0;
}
