
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef void* u16 ;
struct ssp_frame_hdr {scalar_t__ frame_type; int* hashed_dest_addr; int* hashed_src_addr; void* tag; } ;
struct TYPE_5__ {int task_attr; int task_prio; TYPE_1__* cmd; int LUN; scalar_t__ enable_first_burst; } ;
struct sas_task {size_t total_xfer_len; int scatter; TYPE_2__ ssp_task; struct domain_device* dev; } ;
struct mvs_tmf_task {int tmf; int tag_of_task_to_be_managed; } ;
struct mvs_task_exec_info {size_t tag; size_t n_elem; struct mvs_port* port; struct mvs_cmd_hdr* hdr; struct sas_task* task; } ;
struct mvs_slot_info {size_t tx; size_t buf_dma; void* response; void* buf; } ;
struct mvs_port {size_t wide_port_phymap; } ;
struct mvs_info {size_t tx_prod; int flags; void** tx; struct mvs_slot_info* slot_info; } ;
struct mvs_err_info {int dummy; } ;
struct mvs_device {size_t device_id; } ;
struct mvs_cmd_hdr {void* lens; scalar_t__* reserved; void* status_buf; void* prd_tbl; void* open_frame; void* cmd_tbl; void* data_len; void* tags; void* flags; } ;
struct domain_device {size_t const linkrate; int * hashed_sas_addr; int * sas_addr; struct asd_sas_port* port; struct mvs_device* lldd_dev; } ;
struct asd_sas_port {size_t phy_mask; size_t linkrate; } ;
typedef size_t dma_addr_t ;
struct TYPE_6__ {size_t (* prd_size ) () ;int (* make_prd ) (int ,size_t,void*) ;} ;
struct TYPE_4__ {int cmd_len; int * cmnd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;


 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 void* FUNC_0 (size_t) ;
 void* FUNC_1 (size_t) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (size_t,size_t const) ;
 size_t FUNC_5 () ;
 int FUNC_6 (int ,size_t,void*) ;

__attribute__((used)) static int FUNC_7(struct mvs_info *VAR_22,
        struct mvs_task_exec_info *VAR_23, int VAR_24,
        struct mvs_tmf_task *VAR_25)
{
 struct sas_task *VAR_26 = VAR_23->task;
 struct mvs_cmd_hdr *VAR_27 = VAR_23->hdr;
 struct mvs_port *VAR_28 = VAR_23->port;
 struct domain_device *VAR_29 = VAR_26->dev;
 struct mvs_device *VAR_30 = VAR_29->lldd_dev;
 struct asd_sas_port *VAR_31 = VAR_29->port;
 struct mvs_slot_info *VAR_32;
 void *VAR_33;
 struct ssp_frame_hdr *VAR_34;
 void *VAR_35;
 u8 *VAR_36, *VAR_37, VAR_38 = 0;
 dma_addr_t VAR_39;
 u32 VAR_40;
 u32 VAR_41, VAR_42, VAR_43, VAR_44 = VAR_23->tag;
 const u32 VAR_45 = VAR_14;
 u32 VAR_46;

 VAR_32 = &VAR_22->slot_info[VAR_44];

 VAR_46 = ((VAR_28->wide_port_phymap) ? VAR_28->wide_port_phymap :
  VAR_31->phy_mask) & VAR_20;

 VAR_32->tx = VAR_22->tx_prod;
 VAR_22->tx[VAR_22->tx_prod] = FUNC_1(VAR_19 | VAR_44 |
    (VAR_18 << VAR_17) |
    (VAR_46 << VAR_21));

 VAR_40 = VAR_3;
 if (VAR_26->ssp_task.enable_first_burst) {
  VAR_40 |= VAR_1;
  VAR_38 = (1 << 7);
 }
 if (VAR_24)
  VAR_40 |= (VAR_5 << VAR_6);
 else
  VAR_40 |= (VAR_4 << VAR_6);

 VAR_27->flags = FUNC_1(VAR_40 | (VAR_23->n_elem << VAR_2));
 VAR_27->tags = FUNC_1(VAR_44);
 VAR_27->data_len = FUNC_1(VAR_26->total_xfer_len);






 VAR_36 = VAR_35 = VAR_32->buf;
 VAR_39 = VAR_32->buf_dma;

 VAR_27->cmd_tbl = FUNC_2(VAR_39);

 VAR_35 += VAR_11;
 VAR_39 += VAR_11;


 VAR_37 = VAR_35;
 VAR_27->open_frame = FUNC_2(VAR_39);

 VAR_35 += VAR_9;
 VAR_39 += VAR_9;


 VAR_33 = VAR_35;
 if (VAR_23->n_elem)
  VAR_27->prd_tbl = FUNC_2(VAR_39);
 else
  VAR_27->prd_tbl = 0;

 VAR_43 = VAR_8->prd_size() * VAR_23->n_elem;
 VAR_35 += VAR_43;
 VAR_39 += VAR_43;


 VAR_32->response = VAR_35;
 VAR_27->status_buf = FUNC_2(VAR_39);
 if (VAR_22->flags & VAR_7)
  VAR_27->reserved[0] = 0;

 VAR_41 = VAR_10 - VAR_11 - VAR_9 -
     sizeof(struct mvs_err_info) - VAR_43;
 VAR_41 = FUNC_4(VAR_41, VAR_45);

 VAR_42 = sizeof(struct ssp_frame_hdr) + 28;


 VAR_27->lens = FUNC_1(((VAR_41 / 4) << 16) | (VAR_42 / 4));



 VAR_37[0] = (1 << 7) | (VAR_12 << 4) | 0x1;
 VAR_37[1] = FUNC_4(VAR_31->linkrate, VAR_29->linkrate) & 0xf;
 *(u16 *)(VAR_37 + 2) = FUNC_0(VAR_30->device_id + 1);
 FUNC_3(VAR_37 + 4, VAR_29->sas_addr, VAR_13);


 VAR_34 = (struct ssp_frame_hdr *)VAR_36;

 if (VAR_24)
  VAR_34->frame_type = VAR_16;
 else
  VAR_34->frame_type = VAR_15;

 FUNC_3(VAR_34->hashed_dest_addr, VAR_29->hashed_sas_addr,
        VAR_0);
 FUNC_3(VAR_34->hashed_src_addr,
        VAR_29->hashed_sas_addr, VAR_0);
 VAR_34->tag = FUNC_0(VAR_44);


 VAR_36 += sizeof(*VAR_34);
 FUNC_3(VAR_36, &VAR_26->ssp_task.LUN, 8);

 if (VAR_34->frame_type != VAR_16) {
  VAR_36[9] = VAR_38 | VAR_26->ssp_task.task_attr |
    (VAR_26->ssp_task.task_prio << 3);
  FUNC_3(VAR_36 + 12, VAR_26->ssp_task.cmd->cmnd,
         VAR_26->ssp_task.cmd->cmd_len);
 } else{
  VAR_36[10] = VAR_25->tmf;
  switch (VAR_25->tmf) {
  case 129:
  case 128:
   VAR_36[12] =
    (VAR_25->tag_of_task_to_be_managed >> 8) & 0xff;
   VAR_36[13] =
    VAR_25->tag_of_task_to_be_managed & 0xff;
   break;
  default:
   break;
  }
 }

 VAR_8->make_prd(VAR_26->scatter, VAR_23->n_elem, VAR_33);
 return 0;
}
