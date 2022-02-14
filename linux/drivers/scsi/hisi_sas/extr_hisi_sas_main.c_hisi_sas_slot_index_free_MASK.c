
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_hba {int lock; TYPE_1__* hw; } ;
struct TYPE_2__ {scalar_t__ slot_index_alloc; } ;


 int VAR_0 ;
 int FUNC_0 (struct hisi_hba*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1->hw->slot_index_alloc ||
     VAR_2 >= VAR_0) {
  FUNC_1(&VAR_1->lock, VAR_3);
  FUNC_0(VAR_1, VAR_2);
  FUNC_2(&VAR_1->lock, VAR_3);
 }
}
