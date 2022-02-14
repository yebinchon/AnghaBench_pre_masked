
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct qed_igu_block {int status; } ;
struct TYPE_4__ {TYPE_1__* p_igu_info; } ;
struct qed_hwfn {TYPE_2__ hw_info; int cdev; } ;
struct TYPE_3__ {struct qed_igu_block* entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;

struct qed_igu_block *FUNC_1(struct qed_hwfn *VAR_3, bool VAR_4)
{
 struct qed_igu_block *VAR_5;
 u16 VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->cdev);
      VAR_6++) {
  VAR_5 = &VAR_3->hw_info.p_igu_info->entry[VAR_6];

  if (!(VAR_5->status & VAR_2) ||
      !(VAR_5->status & VAR_0))
   continue;

  if (!!(VAR_5->status & VAR_1) == VAR_4)
   return VAR_5;
 }

 return ((void*)0);
}
