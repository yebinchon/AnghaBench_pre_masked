
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kp2000_device {TYPE_1__* pdev; } ;
struct core_table_entry {int offset; int length; int s2c_dma_channel_num; int c2s_dma_channel_num; int irq_base_num; int irq_count; scalar_t__ c2s_dma_present; scalar_t__ s2c_dma_present; int type; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int,int,int,int,int,int,int ,int ) ;

__attribute__((used)) static
void FUNC_1(struct kp2000_device *VAR_0, struct core_table_entry *VAR_1)
{
 FUNC_0(&VAR_0->pdev->dev, "CTE: type:%3d  offset:%3d (%3d)  length:%3d (%3d)  s2c:%d  c2s:%d  irq_count:%d  base_irq:%d\n",
  VAR_1->type,
  VAR_1->offset,
  VAR_1->offset / 4096,
  VAR_1->length,
  VAR_1->length / 8,
  (VAR_1->s2c_dma_present ? VAR_1->s2c_dma_channel_num : -1),
  (VAR_1->c2s_dma_present ? VAR_1->c2s_dma_channel_num : -1),
  VAR_1->irq_count,
  VAR_1->irq_base_num
 );
}
