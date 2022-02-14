
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_notifier {int dummy; } ;
struct mm_struct {int dummy; } ;
struct gru_mm_struct {struct mmu_notifier ms_notifier; int ms_wait_queue; int ms_asid_lock; } ;


 int VAR_0 ;
 struct mmu_notifier* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct gru_mm_struct* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct mmu_notifier *FUNC_5(struct mm_struct *VAR_3)
{
 struct gru_mm_struct *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 FUNC_1(VAR_2);
 FUNC_4(&VAR_4->ms_asid_lock);
 FUNC_2(&VAR_4->ms_wait_queue);

 return &VAR_4->ms_notifier;
}
