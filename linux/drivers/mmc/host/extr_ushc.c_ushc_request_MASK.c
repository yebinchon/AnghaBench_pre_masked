
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ushc_data {int clock_freq; TYPE_4__* data_urb; TYPE_4__* cbw_urb; int lock; TYPE_4__* csw_urb; int usb_dev; TYPE_1__* cbw; struct mmc_request* current_req; int flags; } ;
struct mmc_request {TYPE_3__* cmd; struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int flags; TYPE_2__* sg; int blksz; } ;
struct TYPE_10__ {int num_sgs; TYPE_2__* sg; } ;
struct TYPE_9__ {int flags; int error; int arg; int opcode; } ;
struct TYPE_8__ {int length; } ;
struct TYPE_7__ {int arg; void* block_size; void* cmd_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 struct ushc_data* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_4__*,int ,int,int *,int ,int ,struct ushc_data*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_12(struct mmc_host *VAR_7, struct mmc_request *VAR_8)
{
 struct ushc_data *VAR_9 = FUNC_2(VAR_7);
 int VAR_10;
 unsigned long VAR_11;

 FUNC_4(&VAR_9->lock, VAR_11);

 if (FUNC_6(VAR_0, &VAR_9->flags)) {
  VAR_10 = -VAR_2;
  goto out;
 }


 if (VAR_8->cmd->flags & VAR_5) {
  VAR_10 = -VAR_1;
  goto out;
 }



 if (VAR_8->data && VAR_9->clock_freq < 6000000) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_9->current_req = VAR_8;


 VAR_9->cbw->cmd_idx = FUNC_0(VAR_8->cmd->opcode);
 if (VAR_8->data)
  VAR_9->cbw->block_size = FUNC_0(VAR_8->data->blksz);
 else
  VAR_9->cbw->block_size = 0;
 VAR_9->cbw->arg = FUNC_1(VAR_8->cmd->arg);

 VAR_10 = FUNC_10(VAR_9->cbw_urb, VAR_3);
 if (VAR_10 < 0)
  goto out;


 if (VAR_8->data) {
  struct mmc_data *VAR_12 = VAR_8->data;
  int VAR_13;

  if (VAR_12->flags & VAR_4)
   VAR_13 = FUNC_8(VAR_9->usb_dev, 6);
  else
   VAR_13 = FUNC_9(VAR_9->usb_dev, 2);

  FUNC_7(VAR_9->data_urb, VAR_9->usb_dev, VAR_13,
      ((void*)0), VAR_12->sg->length,
      VAR_6, VAR_9);
  VAR_9->data_urb->num_sgs = 1;
  VAR_9->data_urb->sg = VAR_12->sg;
  VAR_10 = FUNC_10(VAR_9->data_urb, VAR_3);
  if (VAR_10 < 0)
   goto out;
 }


 VAR_10 = FUNC_10(VAR_9->csw_urb, VAR_3);

out:
 FUNC_5(&VAR_9->lock, VAR_11);
 if (VAR_10 < 0) {
  FUNC_11(VAR_9->cbw_urb);
  FUNC_11(VAR_9->data_urb);
  VAR_8->cmd->error = VAR_10;
  FUNC_3(VAR_7, VAR_8);
 }
}
