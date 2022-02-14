
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct qed_ptt {int dummy; } ;
struct qed_igu_info {size_t igu_dsb_id; struct qed_igu_block* entry; } ;
struct qed_igu_block {int status; int is_pf; } ;
struct TYPE_2__ {int opaque_fid; struct qed_igu_info* p_igu_info; } ;
struct qed_hwfn {TYPE_1__ hw_info; int cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,size_t,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;

void FUNC_4(struct qed_hwfn *VAR_5,
         struct qed_ptt *VAR_6,
         bool VAR_7, bool VAR_8)
{
 struct qed_igu_info *VAR_9 = VAR_5->hw_info.p_igu_info;
 struct qed_igu_block *VAR_10;
 u16 VAR_11 = 0;
 u32 VAR_12 = 0;

 VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_0);
 VAR_12 |= VAR_2;
 VAR_12 &= ~VAR_1;
 FUNC_3(VAR_5, VAR_6, VAR_0, VAR_12);

 for (VAR_11 = 0;
      VAR_11 < FUNC_0(VAR_5->cdev); VAR_11++) {
  VAR_10 = &VAR_9->entry[VAR_11];

  if (!(VAR_10->status & VAR_4) ||
      !VAR_10->is_pf ||
      (VAR_10->status & VAR_3))
   continue;

  FUNC_1(VAR_5, VAR_6, VAR_11,
      VAR_5->hw_info.opaque_fid,
      VAR_7);
 }

 if (VAR_8)
  FUNC_1(VAR_5, VAR_6,
      VAR_9->igu_dsb_id,
      VAR_5->hw_info.opaque_fid,
      VAR_7);
}
