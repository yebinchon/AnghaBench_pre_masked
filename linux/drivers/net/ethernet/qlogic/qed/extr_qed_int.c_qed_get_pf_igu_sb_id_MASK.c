
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct qed_igu_block {int status; size_t vector_number; int is_pf; } ;
struct TYPE_4__ {TYPE_1__* p_igu_info; } ;
struct qed_hwfn {TYPE_2__ hw_info; int cdev; } ;
struct TYPE_3__ {struct qed_igu_block* entry; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_1 ;

__attribute__((used)) static u16 FUNC_1(struct qed_hwfn *VAR_2, u16 VAR_3)
{
 struct qed_igu_block *VAR_4;
 u16 VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->cdev);
      VAR_5++) {
  VAR_4 = &VAR_2->hw_info.p_igu_info->entry[VAR_5];

  if (!(VAR_4->status & VAR_0) ||
      !VAR_4->is_pf ||
      VAR_4->vector_number != VAR_3)
   continue;

  return VAR_5;
 }

 return VAR_1;
}
