
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wmt_mci_priv {int mmc; TYPE_2__* cmd; int * comp_cmd; int cmdcomp; struct mmc_request* req; } ;
struct mmc_request {TYPE_3__* data; TYPE_1__* cmd; } ;
struct TYPE_6__ {int bytes_xfered; int blksz; int blocks; int flags; TYPE_2__* stop; scalar_t__ error; int sg_len; int sg; } ;
struct TYPE_5__ {int arg; int opcode; } ;
struct TYPE_4__ {scalar_t__ error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct mmc_request*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int ,int) ;
 int FUNC_6 (struct wmt_mci_priv*) ;

__attribute__((used)) static void FUNC_7(struct wmt_mci_priv *VAR_3)
{
 struct mmc_request *VAR_4;
 VAR_4 = VAR_3->req;

 VAR_4->data->bytes_xfered = VAR_4->data->blksz * VAR_4->data->blocks;


 if (VAR_4->data->flags & VAR_2)
  FUNC_0(FUNC_2(VAR_3->mmc), VAR_4->data->sg,
        VAR_4->data->sg_len, VAR_1);
 else
  FUNC_0(FUNC_2(VAR_3->mmc), VAR_4->data->sg,
        VAR_4->data->sg_len, VAR_0);


 if ((VAR_4->cmd->error) || (VAR_4->data->error))
  FUNC_3(VAR_3->mmc, VAR_4);
 else {
  FUNC_4(VAR_3->mmc);
  if (!VAR_4->data->stop) {

   FUNC_3(VAR_3->mmc, VAR_4);
  } else {





   VAR_3->comp_cmd = &VAR_3->cmdcomp;
   FUNC_1(VAR_3->comp_cmd);
   VAR_3->cmd = VAR_4->data->stop;
   FUNC_5(VAR_3->mmc, VAR_4->data->stop->opcode,
          7, VAR_4->data->stop->arg, 9);
   FUNC_6(VAR_3);
  }
 }
}
