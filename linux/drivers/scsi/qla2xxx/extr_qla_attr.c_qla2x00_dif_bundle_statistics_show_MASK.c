
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; } ;
struct TYPE_6__ {TYPE_1__ unusable; } ;
struct qla_hw_data {TYPE_2__ pool; int dif_bundle_dma_allocs; int dif_bundle_kallocs; int dif_bundle_writes; int dif_bundle_reads; int dif_bundle_crossed_pages; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ,int ,int ,int ,int ,int ) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_2(FUNC_0(VAR_1));
 struct qla_hw_data *VAR_5 = VAR_4->hw;

 return FUNC_1(VAR_3, VAR_0,
     "cross=%llu read=%llu write=%llu kalloc=%llu dma_alloc=%llu unusable=%u\n",
     VAR_5->dif_bundle_crossed_pages, VAR_5->dif_bundle_reads,
     VAR_5->dif_bundle_writes, VAR_5->dif_bundle_kallocs,
     VAR_5->dif_bundle_dma_allocs, VAR_5->pool.unusable.count);
}
