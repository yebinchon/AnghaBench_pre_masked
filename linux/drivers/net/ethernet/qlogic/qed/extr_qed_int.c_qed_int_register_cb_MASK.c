
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {TYPE_1__* sb_virt; } ;
struct qed_sb_sp_info {TYPE_2__ sb_info; TYPE_3__* pi_info_arr; } ;
struct qed_hwfn {struct qed_sb_sp_info* p_sp_sb; } ;
typedef scalar_t__ qed_int_comp_cb_t ;
typedef int __le16 ;
struct TYPE_6__ {void* cookie; scalar_t__ comp_cb; } ;
struct TYPE_4__ {int * pi_array; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;

int FUNC_1(struct qed_hwfn *VAR_1,
   qed_int_comp_cb_t VAR_2,
   void *VAR_3, u8 *VAR_4, __le16 **VAR_5)
{
 struct qed_sb_sp_info *VAR_6 = VAR_1->p_sp_sb;
 int VAR_7 = -VAR_0;
 u8 VAR_8;


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->pi_info_arr); VAR_8++) {
  if (VAR_6->pi_info_arr[VAR_8].comp_cb)
   continue;

  VAR_6->pi_info_arr[VAR_8].comp_cb = VAR_2;
  VAR_6->pi_info_arr[VAR_8].cookie = VAR_3;
  *VAR_4 = VAR_8;
  *VAR_5 = &VAR_6->sb_info.sb_virt->pi_array[VAR_8];
  VAR_7 = 0;
  break;
 }

 return VAR_7;
}
