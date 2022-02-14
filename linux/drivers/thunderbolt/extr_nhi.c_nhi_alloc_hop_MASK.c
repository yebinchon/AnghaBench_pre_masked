
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_ring {unsigned int hop; scalar_t__ is_tx; } ;
struct tb_nhi {unsigned int hop_count; int lock; struct tb_ring** rx_rings; struct tb_ring** tx_rings; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tb_nhi *VAR_3, struct tb_ring *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(&VAR_3->lock);

 if (VAR_4->hop < 0) {
  unsigned int VAR_6;





  for (VAR_6 = VAR_2; VAR_6 < VAR_3->hop_count; VAR_6++) {
   if (VAR_4->is_tx) {
    if (!VAR_3->tx_rings[VAR_6]) {
     VAR_4->hop = VAR_6;
     break;
    }
   } else {
    if (!VAR_3->rx_rings[VAR_6]) {
     VAR_4->hop = VAR_6;
     break;
    }
   }
  }
 }

 if (VAR_4->hop < 0 || VAR_4->hop >= VAR_3->hop_count) {
  FUNC_0(&VAR_3->pdev->dev, "invalid hop: %d\n", VAR_4->hop);
  VAR_5 = -VAR_1;
  goto err_unlock;
 }
 if (VAR_4->is_tx && VAR_3->tx_rings[VAR_4->hop]) {
  FUNC_0(&VAR_3->pdev->dev, "TX hop %d already allocated\n",
    VAR_4->hop);
  VAR_5 = -VAR_0;
  goto err_unlock;
 } else if (!VAR_4->is_tx && VAR_3->rx_rings[VAR_4->hop]) {
  FUNC_0(&VAR_3->pdev->dev, "RX hop %d already allocated\n",
    VAR_4->hop);
  VAR_5 = -VAR_0;
  goto err_unlock;
 }

 if (VAR_4->is_tx)
  VAR_3->tx_rings[VAR_4->hop] = VAR_4;
 else
  VAR_3->rx_rings[VAR_4->hop] = VAR_4;

err_unlock:
 FUNC_2(&VAR_3->lock);

 return VAR_5;
}
