
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_fc_fcp_iod {scalar_t__ io_dir; scalar_t__ data_sg_cnt; int * data_sg; TYPE_1__* tgtport; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,scalar_t__,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nvmet_fc_fcp_iod *VAR_3)
{
 if (!VAR_3->data_sg || !VAR_3->data_sg_cnt)
  return;

 FUNC_0(VAR_3->tgtport->dev, VAR_3->data_sg, VAR_3->data_sg_cnt,
    ((VAR_3->io_dir == VAR_2) ?
     VAR_0 : VAR_1));
 FUNC_1(VAR_3->data_sg);
 VAR_3->data_sg = ((void*)0);
 VAR_3->data_sg_cnt = 0;
}
