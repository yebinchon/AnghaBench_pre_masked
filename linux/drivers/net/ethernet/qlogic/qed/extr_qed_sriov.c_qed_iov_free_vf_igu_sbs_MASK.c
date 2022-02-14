
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qed_vf_info {int num_sbs; int* igu_sbs; } ;
struct qed_ptt {int dummy; } ;
struct TYPE_5__ {int free_cnt_iov; } ;
struct qed_igu_info {TYPE_2__ usage; TYPE_1__* entry; } ;
struct TYPE_6__ {struct qed_igu_info* p_igu_info; } ;
struct qed_hwfn {TYPE_3__ hw_info; } ;
struct TYPE_4__ {int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,struct qed_ptt*,scalar_t__) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_3,
        struct qed_ptt *VAR_4,
        struct qed_vf_info *VAR_5)
{
 struct qed_igu_info *VAR_6 = VAR_3->hw_info.p_igu_info;
 int VAR_7, VAR_8;
 u32 VAR_9, VAR_10;


 for (VAR_7 = 0; VAR_7 < VAR_5->num_sbs; VAR_7++) {
  VAR_8 = VAR_5->igu_sbs[VAR_7];
  VAR_9 = VAR_1 + sizeof(u32) * VAR_8;

  VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_9);
  FUNC_0(VAR_10, VAR_0, 0);
  FUNC_2(VAR_3, VAR_4, VAR_9, VAR_10);

  VAR_6->entry[VAR_8].status |= VAR_2;
  VAR_3->hw_info.p_igu_info->usage.free_cnt_iov++;
 }

 VAR_5->num_sbs = 0;
}
