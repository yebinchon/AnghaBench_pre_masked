
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ntb_transport_mw {int use_msi; int mw_count; int msi_spad_offset; int msi_db_mask; unsigned int qp_count; int qp_bitmap; int qp_bitmap_free; int link_is_up; struct ntb_transport_mw* mw_vec; int vbase; struct ntb_transport_mw* qp_vec; int client_devs; int link_cleanup; int link_work; int debugfs_node_dir; scalar_t__ dma_addr; int * virt_addr; scalar_t__ xlat_size; scalar_t__ buff_size; int phys_size; int phys_addr; struct ntb_dev* ndev; } ;
struct ntb_transport_ctx {int use_msi; int mw_count; int msi_spad_offset; int msi_db_mask; unsigned int qp_count; int qp_bitmap; int qp_bitmap_free; int link_is_up; struct ntb_transport_ctx* mw_vec; int vbase; struct ntb_transport_ctx* qp_vec; int client_devs; int link_cleanup; int link_work; int debugfs_node_dir; scalar_t__ dma_addr; int * virt_addr; scalar_t__ xlat_size; scalar_t__ buff_size; int phys_size; int phys_addr; struct ntb_dev* ndev; } ;
struct ntb_dev {int pdev; int dev; TYPE_1__* ops; } ;
struct ntb_client {int dummy; } ;
struct TYPE_2__ {int mw_set_trans; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 unsigned int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (unsigned int,int,int ,int) ;
 int FUNC_13 (struct ntb_transport_mw*) ;
 struct ntb_transport_mw* FUNC_14 (int,int ,int) ;
 unsigned int VAR_8 ;
 int FUNC_15 (unsigned int,unsigned int) ;
 scalar_t__ VAR_9 ;
 int FUNC_16 (struct ntb_transport_mw*) ;
 int FUNC_17 (struct ntb_dev*) ;
 int FUNC_18 (struct ntb_dev*,int) ;
 scalar_t__ FUNC_19 (struct ntb_dev*) ;
 int FUNC_20 (struct ntb_dev*) ;
 int FUNC_21 (struct ntb_dev*,int ,int ) ;
 int FUNC_22 (struct ntb_dev*) ;
 int FUNC_23 (struct ntb_dev*,int ) ;
 unsigned int FUNC_24 (struct ntb_dev*) ;
 int FUNC_25 (struct ntb_dev*,int,int *,int *) ;
 scalar_t__ FUNC_26 (struct ntb_dev*) ;
 int FUNC_27 (struct ntb_dev*,struct ntb_transport_mw*,int *) ;
 unsigned int FUNC_28 (struct ntb_dev*) ;
 scalar_t__ FUNC_29 (struct ntb_dev*) ;
 int FUNC_30 (struct ntb_transport_mw*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_31 (int ) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int FUNC_32(struct ntb_client *VAR_15, struct ntb_dev *VAR_16)
{
 struct ntb_transport_ctx *VAR_17;
 struct ntb_transport_mw *VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22;
 u64 VAR_23;
 int VAR_24;
 int VAR_25, VAR_26;

 VAR_19 = FUNC_24(VAR_16);

 if (!VAR_16->ops->mw_set_trans) {
  FUNC_6(&VAR_16->dev, "Inbound MW based NTB API is required\n");
  return -VAR_0;
 }

 if (FUNC_19(VAR_16))
  FUNC_5(&VAR_16->dev,
   "doorbell is unsafe, proceed anyway...\n");
 if (FUNC_29(VAR_16))
  FUNC_5(&VAR_16->dev,
   "scratchpad is unsafe, proceed anyway...\n");

 if (FUNC_26(VAR_16) != VAR_4)
  FUNC_8(&VAR_16->dev, "Multi-port NTB devices unsupported\n");

 VAR_24 = FUNC_7(&VAR_16->dev);

 VAR_17 = FUNC_14(sizeof(*VAR_17), VAR_2, VAR_24);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->ndev = VAR_16;





 if (VAR_14 && VAR_19 > 1) {
  VAR_25 = FUNC_23(VAR_16, VAR_12);
  if (!VAR_25) {
   VAR_19 -= 1;
   VAR_17->use_msi = 1;
  }
 }

 VAR_21 = FUNC_28(VAR_16);



 if (VAR_21 < VAR_6) {
  VAR_17->mw_count = 0;
  VAR_25 = -VAR_0;
  goto err;
 }

 VAR_22 = (VAR_21 - VAR_3) / 2;
 VAR_17->mw_count = FUNC_15(VAR_19, VAR_22);

 VAR_17->msi_spad_offset = VAR_17->mw_count * 2 + VAR_3;

 VAR_17->mw_vec = FUNC_12(VAR_19, sizeof(*VAR_17->mw_vec),
      VAR_2, VAR_24);
 if (!VAR_17->mw_vec) {
  VAR_25 = -VAR_1;
  goto err;
 }

 for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++) {
  VAR_18 = &VAR_17->mw_vec[VAR_26];

  VAR_25 = FUNC_25(VAR_16, VAR_26, &VAR_18->phys_addr,
       &VAR_18->phys_size);
  if (VAR_25)
   goto err1;

  VAR_18->vbase = FUNC_10(VAR_18->phys_addr, VAR_18->phys_size);
  if (!VAR_18->vbase) {
   VAR_25 = -VAR_1;
   goto err1;
  }

  VAR_18->buff_size = 0;
  VAR_18->xlat_size = 0;
  VAR_18->virt_addr = ((void*)0);
  VAR_18->dma_addr = 0;
 }

 VAR_23 = FUNC_20(VAR_16);

 VAR_20 = FUNC_9(VAR_23);
 if (VAR_17->use_msi) {
  VAR_20 -= 1;
  VAR_17->msi_db_mask = 1 << VAR_20;
  FUNC_18(VAR_16, VAR_17->msi_db_mask);
 }

 if (VAR_8 && VAR_8 < VAR_20)
  VAR_20 = VAR_8;
 else if (VAR_17->mw_count < VAR_20)
  VAR_20 = VAR_17->mw_count;

 VAR_23 &= FUNC_0(VAR_20) - 1;

 VAR_17->qp_count = VAR_20;
 VAR_17->qp_bitmap = VAR_23;
 VAR_17->qp_bitmap_free = VAR_23;

 VAR_17->qp_vec = FUNC_12(VAR_20, sizeof(*VAR_17->qp_vec),
      VAR_2, VAR_24);
 if (!VAR_17->qp_vec) {
  VAR_25 = -VAR_1;
  goto err1;
 }

 if (VAR_9) {
  VAR_17->debugfs_node_dir =
   FUNC_4(FUNC_31(VAR_16->pdev),
        VAR_9);
 }

 for (VAR_26 = 0; VAR_26 < VAR_20; VAR_26++) {
  VAR_25 = FUNC_30(VAR_17, VAR_26);
  if (VAR_25)
   goto err2;
 }

 FUNC_1(&VAR_17->link_work, VAR_11);
 FUNC_3(&VAR_17->link_cleanup, VAR_10);

 VAR_25 = FUNC_27(VAR_16, VAR_17, &VAR_13);
 if (VAR_25)
  goto err2;

 FUNC_2(&VAR_17->client_devs);
 VAR_25 = FUNC_16(VAR_17);
 if (VAR_25)
  goto err3;

 VAR_17->link_is_up = 0;
 FUNC_21(VAR_16, VAR_5, VAR_7);
 FUNC_22(VAR_16);

 return 0;

err3:
 FUNC_17(VAR_16);
err2:
 FUNC_13(VAR_17->qp_vec);
err1:
 while (VAR_26--) {
  VAR_18 = &VAR_17->mw_vec[VAR_26];
  FUNC_11(VAR_18->vbase);
 }
 FUNC_13(VAR_17->mw_vec);
err:
 FUNC_13(VAR_17);
 return VAR_25;
}
