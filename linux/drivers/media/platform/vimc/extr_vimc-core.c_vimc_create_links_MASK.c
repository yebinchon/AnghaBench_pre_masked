
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vimc_ent_link {size_t src_ent; size_t sink_ent; int flags; int sink_pad; int src_pad; } ;
struct vimc_ent_device {int ent; } ;
struct vimc_device {int * subdevs; TYPE_1__* pipe_cfg; } ;
struct TYPE_2__ {unsigned int num_links; struct vimc_ent_link* links; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 struct vimc_ent_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vimc_device *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;


 for (VAR_1 = 0; VAR_1 < VAR_0->pipe_cfg->num_links; VAR_1++) {
  const struct vimc_ent_link *VAR_3 = &VAR_0->pipe_cfg->links[VAR_1];




  struct vimc_ent_device *VAR_4 =
   FUNC_1(VAR_0->subdevs[VAR_3->src_ent]);
  struct vimc_ent_device *VAR_5 =
   FUNC_1(VAR_0->subdevs[VAR_3->sink_ent]);

  VAR_2 = FUNC_0(VAR_4->ent, VAR_3->src_pad,
         VAR_5->ent, VAR_3->sink_pad,
         VAR_3->flags);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
