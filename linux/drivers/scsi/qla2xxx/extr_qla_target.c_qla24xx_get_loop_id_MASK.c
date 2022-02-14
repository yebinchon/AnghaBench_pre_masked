
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {int vp_idx; struct qla_hw_data* hw; } ;
struct qla_hw_data {int gid_list_info_size; TYPE_1__* pdev; } ;
struct gid_list_info {scalar_t__ al_pa; scalar_t__ area; scalar_t__ domain; int loop_id; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {scalar_t__ al_pa; scalar_t__ area; scalar_t__ domain; } ;
typedef TYPE_2__ be_id_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct gid_list_info* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,struct gid_list_info*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,int ,int) ;
 int VAR_5 ;
 int FUNC_4 (struct scsi_qla_host*,struct gid_list_info*,int ,int*) ;
 int FUNC_5 (struct qla_hw_data*) ;

__attribute__((used)) static int FUNC_6(struct scsi_qla_host *VAR_6, be_id_t VAR_7,
 uint16_t *VAR_8)
{
 struct qla_hw_data *VAR_9 = VAR_6->hw;
 dma_addr_t VAR_10;
 struct gid_list_info *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 uint16_t VAR_16;

 VAR_11 = FUNC_0(&VAR_9->pdev->dev, FUNC_5(VAR_9),
     &VAR_10, VAR_3);
 if (!VAR_11) {
  FUNC_3(VAR_5, VAR_6, 0xf044,
      "qla_target(%d): DMA Alloc failed of %u\n",
      VAR_6->vp_idx, FUNC_5(VAR_9));
  return -VAR_2;
 }


 VAR_14 = FUNC_4(VAR_6, VAR_11, VAR_10, &VAR_16);
 if (VAR_14 != VAR_4) {
  FUNC_3(VAR_5, VAR_6, 0xf045,
      "qla_target(%d): get_id_list() failed: %x\n",
      VAR_6->vp_idx, VAR_14);
  VAR_13 = -VAR_0;
  goto out_free_id_list;
 }

 VAR_12 = VAR_11;
 VAR_13 = -VAR_1;
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  if (VAR_12->al_pa == VAR_7.al_pa &&
      VAR_12->area == VAR_7.area &&
      VAR_12->domain == VAR_7.domain) {
   *VAR_8 = FUNC_2(VAR_12->loop_id);
   VAR_13 = 0;
   break;
  }
  VAR_12 = (void *)VAR_12 + VAR_9->gid_list_info_size;
 }

out_free_id_list:
 FUNC_1(&VAR_9->pdev->dev, FUNC_5(VAR_9),
     VAR_11, VAR_10);
 return VAR_13;
}
