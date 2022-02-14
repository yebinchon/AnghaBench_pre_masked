
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_qla_host {int dummy; } ;
struct qla_hw_data {TYPE_4__* pdev; } ;
struct link_statistics {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_8__ {int jiffies_at_last_reset; } ;
struct TYPE_6__ {TYPE_5__ qla_stats; TYPE_5__ fc_host_stat; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
typedef int dma_addr_t ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 struct link_statistics* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,struct link_statistics*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 struct scsi_qla_host* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,TYPE_1__*,int,char*) ;
 int VAR_2 ;
 int FUNC_7 (struct scsi_qla_host*,struct link_statistics*,int ,int ) ;
 TYPE_1__* FUNC_8 (struct Scsi_Host*) ;

__attribute__((used)) static void
FUNC_9(struct Scsi_Host *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_8(VAR_3);
 struct qla_hw_data *VAR_5 = VAR_4->hw;
 struct scsi_qla_host *VAR_6 = FUNC_5(VAR_5->pdev);
 struct link_statistics *VAR_7;
 dma_addr_t VAR_8;

 FUNC_4(&VAR_4->qla_stats, 0, sizeof(VAR_4->qla_stats));
 FUNC_4(&VAR_4->fc_host_stat, 0, sizeof(VAR_4->fc_host_stat));

 VAR_4->qla_stats.jiffies_at_last_reset = FUNC_3();

 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(&VAR_5->pdev->dev,
      sizeof(*VAR_7), &VAR_8, VAR_1);
  if (!VAR_7) {
   FUNC_6(VAR_2, VAR_4, 0x70d7,
       "Failed to allocate memory for stats.\n");
   return;
  }


  FUNC_7(VAR_6, VAR_7, VAR_8, VAR_0);

  FUNC_2(&VAR_5->pdev->dev, sizeof(*VAR_7),
      VAR_7, VAR_8);
 }
}
