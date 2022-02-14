
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ command; int sector_count; int flags; } ;
struct TYPE_6__ {TYPE_3__* atapi_packet; TYPE_3__ fis; int device_control_reg_update; scalar_t__ use_ncq; } ;
struct sas_task {scalar_t__ data_dir; size_t total_xfer_len; int scatter; TYPE_2__ ata_task; struct domain_device* dev; } ;
struct mvs_task_exec_info {size_t tag; size_t n_elem; struct mvs_cmd_hdr* hdr; struct sas_task* task; } ;
struct mvs_slot_info {size_t tx; size_t buf_dma; void* response; void* buf; } ;
struct mvs_info {size_t tx_prod; int flags; void** tx; struct mvs_slot_info* slot_info; } ;
struct mvs_err_info {int dummy; } ;
struct mvs_device {size_t taskfileset; scalar_t__ device_id; } ;
struct mvs_cmd_hdr {void* lens; scalar_t__* reserved; void* status_buf; void* prd_tbl; void* open_frame; void* cmd_tbl; void* data_len; void* tags; void* flags; } ;
struct host_to_dev_fis {int dummy; } ;
struct TYPE_5__ {scalar_t__ class; } ;
struct domain_device {size_t const linkrate; TYPE_3__* sas_addr; TYPE_1__ sata_dev; struct asd_sas_port* port; struct mvs_device* lldd_dev; } ;
struct asd_sas_port {size_t phy_mask; size_t linkrate; } ;
typedef size_t dma_addr_t ;
struct TYPE_8__ {size_t (* prd_count ) () ;size_t (* prd_size ) () ;int (* dma_fix ) (struct mvs_info*,size_t,int ,size_t,void*) ;int (* make_prd ) (int ,size_t,void*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (size_t) ;
 void* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int*,TYPE_3__*,int) ;
 int FUNC_5 (size_t,size_t const) ;
 int FUNC_6 (char*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct mvs_info*,struct mvs_device*) ;
 scalar_t__ FUNC_8 (struct sas_task*,size_t*) ;
 size_t FUNC_9 () ;
 size_t FUNC_10 () ;
 size_t FUNC_11 () ;
 int FUNC_12 (int ,size_t,void*) ;
 int FUNC_13 (struct mvs_info*,size_t,int ,size_t,void*) ;

__attribute__((used)) static int FUNC_14(struct mvs_info *VAR_24,
        struct mvs_task_exec_info *VAR_25)
{
 struct sas_task *VAR_26 = VAR_25->task;
 struct domain_device *VAR_27 = VAR_26->dev;
 struct mvs_device *VAR_28 = VAR_27->lldd_dev;
 struct mvs_cmd_hdr *VAR_29 = VAR_25->hdr;
 struct asd_sas_port *VAR_30 = VAR_27->port;
 struct mvs_slot_info *VAR_31;
 void *VAR_32;
 u32 VAR_33 = VAR_25->tag, VAR_34;
 u32 VAR_35, VAR_36;
 void *VAR_37;
 u8 *VAR_38, *VAR_39;
 dma_addr_t VAR_40;
 u32 VAR_41, VAR_42, VAR_43;
 const u32 VAR_44 = VAR_15;

 if (FUNC_7(VAR_24, VAR_28) == VAR_10) {
  FUNC_6("Have not enough regiset for dev %d.\n",
   VAR_28->device_id);
  return -VAR_3;
 }
 VAR_31 = &VAR_24->slot_info[VAR_33];
 VAR_31->tx = VAR_24->tx_prod;
 VAR_36 = VAR_20 | VAR_33 |
  (VAR_19 << VAR_18) |
  ((VAR_30->phy_mask & VAR_21) << VAR_22) |
  (VAR_28->taskfileset << VAR_23);
 VAR_24->tx[VAR_24->tx_prod] = FUNC_1(VAR_36);

 if (VAR_26->data_dir == VAR_2)
  VAR_35 = (VAR_9->prd_count() << VAR_6);
 else
  VAR_35 = (VAR_25->n_elem << VAR_6);

 if (VAR_26->ata_task.use_ncq)
  VAR_35 |= VAR_5;
 if (VAR_27->sata_dev.class == VAR_1) {
  if (VAR_26->ata_task.fis.command != VAR_0)
   VAR_35 |= VAR_4;
 }

 VAR_29->flags = FUNC_1(VAR_35);

 if (VAR_26->ata_task.use_ncq && FUNC_8(VAR_26, &VAR_34))
  VAR_26->ata_task.fis.sector_count |= (u8) (VAR_34 << 3);
 else
  VAR_34 = VAR_33;

 VAR_29->tags = FUNC_1(VAR_34);

 VAR_29->data_len = FUNC_1(VAR_26->total_xfer_len);






 VAR_38 = VAR_37 = VAR_31->buf;
 VAR_40 = VAR_31->buf_dma;

 VAR_29->cmd_tbl = FUNC_2(VAR_40);

 VAR_37 += VAR_8;
 VAR_40 += VAR_8;



 VAR_39 = VAR_37;
 VAR_29->open_frame = FUNC_2(VAR_40);

 VAR_37 += VAR_11;
 VAR_40 += VAR_11;


 VAR_32 = VAR_37;

 if (VAR_25->n_elem)
  VAR_29->prd_tbl = FUNC_2(VAR_40);
 else
  VAR_29->prd_tbl = 0;
 VAR_41 = VAR_9->prd_size() * VAR_9->prd_count();

 VAR_37 += VAR_41;
 VAR_40 += VAR_41;


 VAR_31->response = VAR_37;
 VAR_29->status_buf = FUNC_2(VAR_40);
 if (VAR_24->flags & VAR_7)
  VAR_29->reserved[0] = 0;

 VAR_42 = sizeof(struct host_to_dev_fis);
 VAR_43 = VAR_12 - VAR_8 -
     sizeof(struct mvs_err_info) - VAR_41;


 VAR_43 = FUNC_5(VAR_43, VAR_44);
 VAR_29->lens = FUNC_1(((VAR_43 / 4) << 16) | (VAR_42 / 4));

 if (FUNC_3(!VAR_26->ata_task.device_control_reg_update))
  VAR_26->ata_task.fis.flags |= 0x80;

 FUNC_4(VAR_38, &VAR_26->ata_task.fis, sizeof(struct host_to_dev_fis));
 if (VAR_27->sata_dev.class == VAR_1)
  FUNC_4(VAR_38 + VAR_16,
   VAR_26->ata_task.atapi_packet, 16);



 VAR_39[0] = (1 << 7) | (VAR_13 << 4) | 0x1;
 VAR_39[1] = FUNC_5(VAR_30->linkrate, VAR_27->linkrate) & 0xf;
 *(u16 *)(VAR_39 + 2) = FUNC_0(VAR_28->device_id + 1);
 FUNC_4(VAR_39 + 4, VAR_27->sas_addr, VAR_14);


 VAR_9->make_prd(VAR_26->scatter, VAR_25->n_elem, VAR_32);

 if (VAR_26->data_dir == VAR_2)
  VAR_9->dma_fix(VAR_24, VAR_30->phy_mask,
    VAR_17, VAR_25->n_elem, VAR_32);

 return 0;
}
