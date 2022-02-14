
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {unsigned long iopoll_weight; int nvectors; int hrrq_num; TYPE_2__* hrrq; scalar_t__ sis64; TYPE_1__* pdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_4__ {int iopoll; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long,int ) ;
 scalar_t__ FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_2);
 struct ipr_ioa_cfg *VAR_7 = (struct ipr_ioa_cfg *)VAR_6->hostdata;
 unsigned long VAR_8;
 unsigned long VAR_9 = 0;
 int VAR_10;

 if (!VAR_7->sis64) {
  FUNC_1(&VAR_7->pdev->dev, "irq_poll not supported on this adapter\n");
  return -VAR_0;
 }
 if (FUNC_4(VAR_4, 10, &VAR_8))
  return -VAR_0;

 if (VAR_8 > 256) {
  FUNC_1(&VAR_7->pdev->dev, "Invalid irq_poll weight. It must be less than 256\n");
  return -VAR_0;
 }

 if (VAR_8 == VAR_7->iopoll_weight) {
  FUNC_1(&VAR_7->pdev->dev, "Current irq_poll weight has the same weight\n");
  return FUNC_7(VAR_4);
 }

 if (VAR_7->iopoll_weight && VAR_7->sis64 && VAR_7->nvectors > 1) {
  for (VAR_10 = 1; VAR_10 < VAR_7->hrrq_num; VAR_10++)
   FUNC_2(&VAR_7->hrrq[VAR_10].iopoll);
 }

 FUNC_5(VAR_6->host_lock, VAR_9);
 VAR_7->iopoll_weight = VAR_8;
 if (VAR_7->iopoll_weight && VAR_7->sis64 && VAR_7->nvectors > 1) {
  for (VAR_10 = 1; VAR_10 < VAR_7->hrrq_num; VAR_10++) {
   FUNC_3(&VAR_7->hrrq[VAR_10].iopoll,
     VAR_7->iopoll_weight, VAR_1);
  }
 }
 FUNC_6(VAR_6->host_lock, VAR_9);

 return FUNC_7(VAR_4);
}
