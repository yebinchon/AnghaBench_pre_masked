
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct il_rx_queue {int bd_dma; void* bd; scalar_t__ need_update; scalar_t__ free_count; scalar_t__ write_actual; scalar_t__ write; scalar_t__ read; int rx_used; TYPE_1__* pool; void* rb_stts; int rb_stts_dma; int rx_free; int lock; } ;
struct il_rb_status {int dummy; } ;
struct il_priv {TYPE_2__* pci_dev; struct il_rx_queue rxq; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (struct device*,int,int *,int ) ;
 int FUNC_2 (struct device*,int,void*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct il_priv *VAR_4)
{
 struct il_rx_queue *VAR_5 = &VAR_4->rxq;
 struct device *VAR_6 = &VAR_4->pci_dev->dev;
 int VAR_7;

 FUNC_4(&VAR_5->lock);
 FUNC_0(&VAR_5->rx_free);
 FUNC_0(&VAR_5->rx_used);


 VAR_5->bd = FUNC_1(VAR_6, 4 * VAR_3, &VAR_5->bd_dma,
         VAR_1);
 if (!VAR_5->bd)
  goto err_bd;

 VAR_5->rb_stts = FUNC_1(VAR_6, sizeof(struct il_rb_status),
       &VAR_5->rb_stts_dma, VAR_1);
 if (!VAR_5->rb_stts)
  goto err_rb;


 for (VAR_7 = 0; VAR_7 < VAR_2 + VAR_3; VAR_7++)
  FUNC_3(&VAR_5->pool[VAR_7].list, &VAR_5->rx_used);



 VAR_5->read = VAR_5->write = 0;
 VAR_5->write_actual = 0;
 VAR_5->free_count = 0;
 VAR_5->need_update = 0;
 return 0;

err_rb:
 FUNC_2(&VAR_4->pci_dev->dev, 4 * VAR_3, VAR_5->bd,
     VAR_5->bd_dma);
err_bd:
 return -VAR_0;
}
