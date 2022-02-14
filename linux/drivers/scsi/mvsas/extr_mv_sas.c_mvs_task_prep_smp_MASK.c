
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct scatterlist {int dummy; } ;
struct TYPE_3__ {struct scatterlist smp_req; struct scatterlist smp_resp; } ;
struct sas_task {TYPE_1__ smp_task; int scatter; struct domain_device* dev; } ;
struct sas_phy {size_t number; } ;
struct sas_ha_struct {struct asd_sas_phy** sas_phy; } ;
struct mvs_task_exec_info {size_t tag; size_t n_elem; struct sas_task* task; struct mvs_cmd_hdr* hdr; } ;
struct mvs_slot_info {int buf_dma; size_t tx; void* response; void* buf; } ;
struct mvs_info {int flags; size_t tx_prod; int dev; void** tx; struct mvs_slot_info* slot_info; struct sas_ha_struct* sas; } ;
struct mvs_cmd_hdr {size_t flags; scalar_t__ data_len; void* tags; void* lens; scalar_t__* reserved; void* status_buf; void* prd_tbl; void* open_frame; void* cmd_tbl; } ;
struct domain_device {int sas_addr; int linkrate; struct sas_phy* phy; struct asd_sas_port* port; } ;
struct asd_sas_port {int linkrate; } ;
struct asd_sas_phy {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int (* prd_size ) () ;int (* make_prd ) (int ,int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 void* FUNC_0 (size_t) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,struct scatterlist*,int,int ) ;
 int FUNC_3 (int ,struct scatterlist*,int,int ) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct scatterlist*) ;
 size_t FUNC_7 (struct scatterlist*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int,void*) ;

__attribute__((used)) static int FUNC_10(struct mvs_info *VAR_16,
        struct mvs_task_exec_info *VAR_17)
{
 int VAR_18, VAR_19, VAR_20;
 struct sas_ha_struct *VAR_21 = VAR_16->sas;
 struct sas_task *VAR_22 = VAR_17->task;
 struct mvs_cmd_hdr *VAR_23 = VAR_17->hdr;
 struct domain_device *VAR_24 = VAR_22->dev;
 struct asd_sas_port *VAR_25 = VAR_24->port;
 struct sas_phy *VAR_26 = VAR_24->phy;
 struct asd_sas_phy *VAR_27 = VAR_21->sas_phy[VAR_26->number];
 struct scatterlist *VAR_28, *VAR_29;
 u32 VAR_30, VAR_31, VAR_32 = VAR_17->tag;
 void *VAR_33;
 u8 *VAR_34;
 dma_addr_t VAR_35;
 void *VAR_36;
 struct mvs_slot_info *VAR_37 = &VAR_16->slot_info[VAR_32];
 u32 VAR_38 = (VAR_17->n_elem << VAR_4);




 VAR_28 = &VAR_22->smp_task.smp_req;
 VAR_18 = FUNC_2(VAR_16->dev, VAR_28, 1, VAR_1);
 if (!VAR_18)
  return -VAR_3;
 VAR_30 = FUNC_7(VAR_28);

 VAR_29 = &VAR_22->smp_task.smp_resp;
 VAR_18 = FUNC_2(VAR_16->dev, VAR_29, 1, VAR_0);
 if (!VAR_18) {
  VAR_19 = -VAR_3;
  goto err_out;
 }
 VAR_31 = VAR_11;


 if ((VAR_30 & 0x3) || (VAR_31 & 0x3)) {
  VAR_19 = -VAR_2;
  goto err_out_2;
 }






 VAR_33 = VAR_37->buf;
 VAR_35 = VAR_37->buf_dma;

 VAR_23->cmd_tbl = FUNC_1(FUNC_6(VAR_28));


 VAR_34 = VAR_33;
 VAR_23->open_frame = FUNC_1(VAR_35);

 VAR_33 += VAR_7;
 VAR_35 += VAR_7;


 VAR_36 = VAR_33;
 if (VAR_17->n_elem)
  VAR_23->prd_tbl = FUNC_1(VAR_35);
 else
  VAR_23->prd_tbl = 0;

 VAR_20 = VAR_6->prd_size() * VAR_17->n_elem;
 VAR_33 += VAR_20;
 VAR_35 += VAR_20;


 VAR_37->response = VAR_33;
 VAR_23->status_buf = FUNC_1(VAR_35);
 if (VAR_16->flags & VAR_5)
  VAR_23->reserved[0] = 0;




 VAR_37->tx = VAR_16->tx_prod;
 VAR_16->tx[VAR_16->tx_prod] = FUNC_0((VAR_13 << VAR_12) |
     VAR_14 | VAR_32 |
     (VAR_8 << VAR_15));

 VAR_23->flags |= VAR_38;
 VAR_23->lens = FUNC_0(((VAR_31 / 4) << 16) | ((VAR_30 - 4) / 4));
 VAR_23->tags = FUNC_0(VAR_32);
 VAR_23->data_len = 0;



 VAR_34[0] = (1 << 7) | (VAR_9 << 4) | 0x01;
 VAR_34[1] = FUNC_5(VAR_25->linkrate, VAR_24->linkrate) & 0xf;
 *(u16 *)(VAR_34 + 2) = 0xFFFF;
 FUNC_4(VAR_34 + 4, VAR_24->sas_addr, VAR_10);


 VAR_6->make_prd(VAR_22->scatter, VAR_17->n_elem, VAR_36);

 return 0;

err_out_2:
 FUNC_3(VAR_16->dev, &VAR_17->task->smp_task.smp_resp, 1,
       VAR_0);
err_out:
 FUNC_3(VAR_16->dev, &VAR_17->task->smp_task.smp_req, 1,
       VAR_1);
 return VAR_19;
}
