
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mtu3_ep* private; } ;
struct mtu3_gpd_ring {int dequeue; int enqueue; int end; int start; int dma; } ;
struct mtu3_ep {struct mtu3_gpd_ring gpd_ring; struct mtu3* mtu; } ;
struct mtu3 {int lock; } ;


 int FUNC_0 (struct seq_file*,char*,int *,int ,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct mtu3_ep *VAR_2 = VAR_0->private;
 struct mtu3 *VAR_3 = VAR_2->mtu;
 struct mtu3_gpd_ring *VAR_4;
 unsigned long VAR_5;

 VAR_4 = &VAR_2->gpd_ring;
 FUNC_1(&VAR_3->lock, VAR_5);
 FUNC_0(VAR_0,
     "qmu-ring - dma:%pad, start:%p, end:%p, enq:%p, dep:%p\n",
     &VAR_4->dma, VAR_4->start, VAR_4->end,
     VAR_4->enqueue, VAR_4->dequeue);
 FUNC_2(&VAR_3->lock, VAR_5);

 return 0;
}
