
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct qed_sb_sp_info {TYPE_1__* pi_info_arr; } ;
struct qed_hwfn {struct qed_sb_sp_info* p_sp_sb; } ;
struct TYPE_2__ {int * cookie; int * comp_cb; } ;


 int VAR_0 ;

int FUNC_0(struct qed_hwfn *VAR_1, u8 VAR_2)
{
 struct qed_sb_sp_info *VAR_3 = VAR_1->p_sp_sb;

 if (VAR_3->pi_info_arr[VAR_2].comp_cb == ((void*)0))
  return -VAR_0;

 VAR_3->pi_info_arr[VAR_2].comp_cb = ((void*)0);
 VAR_3->pi_info_arr[VAR_2].cookie = ((void*)0);

 return 0;
}
