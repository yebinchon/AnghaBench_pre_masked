
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {struct ci_hdrc* private; } ;
struct ci_hw_qh {int dummy; } ;
struct TYPE_2__ {scalar_t__ ptr; scalar_t__ dma; } ;
struct ci_hw_ep {TYPE_1__ qh; } ;
struct ci_hdrc {scalar_t__ role; int hw_ep_max; int lock; struct ci_hw_ep* ci_hw_ep; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct ci_hdrc *VAR_3 = VAR_1->private;
 unsigned long VAR_4;
 unsigned VAR_5, VAR_6;

 if (VAR_3->role != VAR_0) {
  FUNC_0(VAR_1, "not in gadget mode\n");
  return 0;
 }

 FUNC_1(&VAR_3->lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_3->hw_ep_max/2; VAR_5++) {
  struct ci_hw_ep *VAR_7 = &VAR_3->ci_hw_ep[VAR_5];
  struct ci_hw_ep *VAR_8 =
   &VAR_3->ci_hw_ep[VAR_5 + VAR_3->hw_ep_max/2];
  FUNC_0(VAR_1, "EP=%02i: RX=%08X TX=%08X\n",
      VAR_5, (u32)VAR_7->qh.dma, (u32)VAR_8->qh.dma);
  for (VAR_6 = 0; VAR_6 < (sizeof(struct ci_hw_qh)/sizeof(u32)); VAR_6++)
   FUNC_0(VAR_1, " %04X:    %08X    %08X\n", VAR_6,
       *((u32 *)VAR_7->qh.ptr + VAR_6),
       *((u32 *)VAR_8->qh.ptr + VAR_6));
 }
 FUNC_2(&VAR_3->lock, VAR_4);

 return 0;
}
