
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct blk_mq_queue_map {int dummy; } ;
struct TYPE_4__ {struct blk_mq_queue_map* map; } ;
struct Scsi_Host {TYPE_1__ tag_set; scalar_t__ hostdata; } ;
struct TYPE_5__ {int irq_offset; TYPE_3__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_6__ {int pdev; int mqiobase; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct blk_mq_queue_map*) ;
 int FUNC_2 (struct blk_mq_queue_map*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_1)
{
 int VAR_2;
 scsi_qla_host_t *VAR_3 = (scsi_qla_host_t *)VAR_1->hostdata;
 struct blk_mq_queue_map *VAR_4 = &VAR_1->tag_set.map[VAR_0];

 if (FUNC_0(VAR_3->hw) || !VAR_3->hw->mqiobase)
  VAR_2 = FUNC_1(VAR_4);
 else
  VAR_2 = FUNC_2(VAR_4, VAR_3->hw->pdev, VAR_3->irq_offset);
 return VAR_2;
}
