
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_4__ {int transfer_len; } ;
struct nvmet_fc_fcp_iod {unsigned int data_sg_cnt; scalar_t__ io_dir; struct scatterlist* data_sg; struct scatterlist* next_sg; TYPE_1__* tgtport; TYPE_2__ req; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ,struct scatterlist*,unsigned int,int ) ;
 struct scatterlist* FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int
FUNC_2(struct nvmet_fc_fcp_iod *VAR_5)
{
 struct scatterlist *VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_1(VAR_5->req.transfer_len, VAR_2, &VAR_7);
 if (!VAR_6)
  goto out;

 VAR_5->data_sg = VAR_6;
 VAR_5->data_sg_cnt = VAR_7;
 VAR_5->data_sg_cnt = FUNC_0(VAR_5->tgtport->dev, VAR_6, VAR_7,
    ((VAR_5->io_dir == VAR_3) ?
     VAR_0 : VAR_1));

 VAR_5->next_sg = VAR_5->data_sg;

 return 0;

out:
 return VAR_4;
}
