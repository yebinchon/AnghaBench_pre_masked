
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddcb_queue {size_t ddcb_act; int ddcb_lock; struct ddcb* ddcb_vaddr; } ;
struct genwqe_dev {struct ddcb_queue queue; } ;
struct ddcb {int icrc_hsi_shi_32; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ddcb_queue*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct genwqe_dev *VAR_1)
{
 unsigned long VAR_2;
 struct ddcb *VAR_3;
 struct ddcb_queue *VAR_4 = &VAR_1->queue;

 FUNC_1(&VAR_4->ddcb_lock, VAR_2);

 if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_4->ddcb_lock, VAR_2);
  return 0;
 }

 VAR_3 = &VAR_4->ddcb_vaddr[VAR_4->ddcb_act];
 if (VAR_3->icrc_hsi_shi_32 & VAR_0) {
  FUNC_2(&VAR_4->ddcb_lock, VAR_2);
  return 1;
 }

 FUNC_2(&VAR_4->ddcb_lock, VAR_2);
 return 0;
}
