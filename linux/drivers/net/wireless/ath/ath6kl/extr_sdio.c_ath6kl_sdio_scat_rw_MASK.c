
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct mmc_request {int flags; int error; struct mmc_request* data; struct mmc_request* cmd; int opcode; int blocks; int arg; } ;
struct mmc_data {int flags; int error; struct mmc_data* data; struct mmc_data* cmd; int opcode; int blocks; int arg; } ;
struct mmc_command {int flags; int error; struct mmc_command* data; struct mmc_command* cmd; int opcode; int blocks; int arg; } ;
struct hif_scatter_req {int len; int req; scalar_t__ addr; int status; int (* complete ) (int ,struct hif_scatter_req*) ;int scat_list; int scat_entries; int virt_dma_buf; scalar_t__ virt_scat; } ;
struct bus_request {struct hif_scatter_req* scat_req; } ;
struct ath6kl_sdio {TYPE_1__* ar; TYPE_2__* func; } ;
struct TYPE_8__ {int host; } ;
struct TYPE_7__ {TYPE_4__* card; int num; } ;
struct TYPE_6__ {int htc_target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*,int,scalar_t__,int ,int) ;
 int FUNC_2 (int *,int ,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_3 (struct hif_scatter_req*,struct mmc_request*) ;
 int FUNC_4 (struct mmc_request*,int ,int) ;
 int FUNC_5 (struct mmc_request*,TYPE_4__*) ;
 int FUNC_6 (int ,struct mmc_request*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,struct hif_scatter_req*) ;
 int FUNC_11 (scalar_t__,int,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct ath6kl_sdio *VAR_17,
          struct bus_request *VAR_18)
{
 struct mmc_request VAR_19;
 struct mmc_command VAR_20;
 struct mmc_data VAR_21;
 struct hif_scatter_req *VAR_22;
 u8 VAR_23, VAR_24;
 int VAR_25, VAR_26;

 VAR_22 = VAR_18->scat_req;

 if (VAR_22->virt_scat) {
  VAR_26 = VAR_22->len;
  if (VAR_22->req & VAR_6)
   VAR_26 = FUNC_7(VAR_26, VAR_10);

  VAR_25 = FUNC_1(VAR_17->func, VAR_22->req,
     VAR_22->addr, VAR_22->virt_dma_buf,
     VAR_26);
  goto scat_complete;
 }

 FUNC_4(&VAR_19, 0, sizeof(struct mmc_request));
 FUNC_4(&VAR_20, 0, sizeof(struct mmc_command));
 FUNC_4(&VAR_21, 0, sizeof(struct mmc_data));

 FUNC_3(VAR_22, &VAR_21);

 VAR_23 = (VAR_22->req & VAR_7) ?
    VAR_1 : VAR_2;

 VAR_24 = (VAR_22->req & VAR_12) ? VAR_4 : VAR_3;


 if (VAR_22->req & VAR_12) {
  if (VAR_22->addr == VAR_9)
   VAR_22->addr += VAR_11 - VAR_22->len;
  else

   VAR_22->addr += VAR_8 - VAR_22->len;
 }


 FUNC_2(&VAR_20.arg, VAR_24, VAR_17->func->num,
      VAR_0, VAR_23, VAR_22->addr,
      VAR_21.blocks);

 VAR_20.opcode = VAR_16;
 VAR_20.flags = VAR_15 | VAR_14 | VAR_13;

 VAR_19.cmd = &VAR_20;
 VAR_19.data = &VAR_21;

 FUNC_8(VAR_17->func);

 FUNC_5(&VAR_21, VAR_17->func->card);

 FUNC_11(VAR_22->addr,
          VAR_22->req,
          VAR_22->len,
          VAR_22->scat_entries,
          VAR_22->scat_list);


 FUNC_6(VAR_17->func->card->host, &VAR_19);

 FUNC_9(VAR_17->func);

 VAR_25 = VAR_20.error ? VAR_20.error : VAR_21.error;

scat_complete:
 VAR_22->status = VAR_25;

 if (VAR_22->status)
  FUNC_0("Scatter write request failed:%d\n",
      VAR_22->status);

 if (VAR_22->req & VAR_5)
  VAR_22->complete(VAR_17->ar->htc_target, VAR_22);

 return VAR_25;
}
