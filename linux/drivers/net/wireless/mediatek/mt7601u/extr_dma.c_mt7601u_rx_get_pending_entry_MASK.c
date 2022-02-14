
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_rx_queue {size_t start; int entries; int pending; struct mt7601u_dma_buf_rx* e; } ;
struct mt7601u_dma_buf_rx {int dummy; } ;
struct mt7601u_dev {int rx_lock; struct mt7601u_rx_queue rx_q; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct mt7601u_dma_buf_rx *
FUNC_2(struct mt7601u_dev *VAR_0)
{
 struct mt7601u_rx_queue *VAR_1 = &VAR_0->rx_q;
 struct mt7601u_dma_buf_rx *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 FUNC_0(&VAR_0->rx_lock, VAR_3);

 if (!VAR_1->pending)
  goto out;

 VAR_2 = &VAR_1->e[VAR_1->start];
 VAR_1->pending--;
 VAR_1->start = (VAR_1->start + 1) % VAR_1->entries;
out:
 FUNC_1(&VAR_0->rx_lock, VAR_3);

 return VAR_2;
}
