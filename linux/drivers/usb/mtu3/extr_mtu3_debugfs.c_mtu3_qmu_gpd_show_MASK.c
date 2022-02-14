
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mtu3_ep* private; } ;
struct qmu_gpd {int dw3_info; int buffer; int next_gpd; int dw0_info; } ;
struct mtu3_gpd_ring {scalar_t__ dma; struct qmu_gpd* start; } ;
struct mtu3_ep {int flags; struct mtu3_gpd_ring gpd_ring; struct mtu3* mtu; } ;
struct mtu3 {int lock; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,int,scalar_t__*,struct qmu_gpd*,int ,int ,int ,int ) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 struct mtu3_ep *VAR_4 = VAR_2->private;
 struct mtu3 *VAR_5 = VAR_4->mtu;
 struct mtu3_gpd_ring *VAR_6;
 struct qmu_gpd *VAR_7;
 dma_addr_t VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_2(&VAR_5->lock, VAR_9);
 VAR_6 = &VAR_4->gpd_ring;
 VAR_7 = VAR_6->start;
 if (!VAR_7 || !(VAR_4->flags & VAR_1)) {
  FUNC_1(VAR_2, "empty!\n");
  goto out;
 }

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++, VAR_7++) {
  VAR_8 = VAR_6->dma + VAR_10 * sizeof(*VAR_7);
  FUNC_0(VAR_2, "gpd.%03d -> %pad, %p: %08x %08x %08x %08x\n",
      VAR_10, &VAR_8, VAR_7, VAR_7->dw0_info, VAR_7->next_gpd,
      VAR_7->buffer, VAR_7->dw3_info);
 }

out:
 FUNC_3(&VAR_5->lock, VAR_9);

 return 0;
}
