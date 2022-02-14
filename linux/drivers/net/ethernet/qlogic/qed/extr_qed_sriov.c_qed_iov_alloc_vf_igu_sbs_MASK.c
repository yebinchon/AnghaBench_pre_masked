
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct qed_vf_info {int abs_vf_id; int* igu_sbs; scalar_t__ num_sbs; } ;
struct qed_ptt {int dummy; } ;
struct qed_igu_block {int igu_sb_id; int status; } ;
struct TYPE_6__ {TYPE_2__* p_igu_info; } ;
struct qed_hwfn {int rel_pf_id; TYPE_3__ hw_info; } ;
struct cau_sb_entry {int dummy; } ;
struct TYPE_4__ {int free_cnt_iov; } ;
struct TYPE_5__ {TYPE_1__ usage; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__,int,int *) ;
 struct qed_igu_block* FUNC_2 (struct qed_hwfn*,int) ;
 int FUNC_3 (struct qed_hwfn*,struct cau_sb_entry*,int ,int,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,int ) ;

__attribute__((used)) static u8 FUNC_5(struct qed_hwfn *VAR_7,
       struct qed_ptt *VAR_8,
       struct qed_vf_info *VAR_9, u16 VAR_10)
{
 struct qed_igu_block *VAR_11;
 struct cau_sb_entry VAR_12;
 int VAR_13 = 0;
 u32 VAR_14 = 0;

 if (VAR_10 > VAR_7->hw_info.p_igu_info->usage.free_cnt_iov)
  VAR_10 = VAR_7->hw_info.p_igu_info->usage.free_cnt_iov;
 VAR_7->hw_info.p_igu_info->usage.free_cnt_iov -= VAR_10;

 FUNC_0(VAR_14, VAR_1, VAR_9->abs_vf_id);
 FUNC_0(VAR_14, VAR_3, 1);
 FUNC_0(VAR_14, VAR_2, 0);

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  VAR_11 = FUNC_2(VAR_7, 0);
  VAR_9->igu_sbs[VAR_13] = VAR_11->igu_sb_id;
  VAR_11->status &= ~VAR_6;
  FUNC_0(VAR_14, VAR_4, VAR_13);

  FUNC_4(VAR_7, VAR_8,
         VAR_5 +
         sizeof(u32) * VAR_11->igu_sb_id, VAR_14);


  FUNC_3(VAR_7, &VAR_12,
          VAR_7->rel_pf_id, VAR_9->abs_vf_id, 1);

  FUNC_1(VAR_7, VAR_8,
      (u64)(uintptr_t)&VAR_12,
      VAR_0 +
      VAR_11->igu_sb_id * sizeof(u64), 2, ((void*)0));
 }

 VAR_9->num_sbs = (u8) VAR_10;

 return VAR_9->num_sbs;
}
