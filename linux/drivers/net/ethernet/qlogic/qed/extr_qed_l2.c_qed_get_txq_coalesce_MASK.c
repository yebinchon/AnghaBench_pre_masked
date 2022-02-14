
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int queue_id; } ;
struct qed_queue_cid {int sb_igu_id; TYPE_1__ abs; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct cau_sb_entry {int params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,int ,int,int *) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int) ;

int FUNC_5(struct qed_hwfn *VAR_6,
    struct qed_ptt *VAR_7,
    struct qed_queue_cid *VAR_8, u16 *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 struct cau_sb_entry VAR_13;
 u8 VAR_14;
 int VAR_15;

 VAR_15 = FUNC_3(VAR_6, VAR_7, VAR_1 +
          VAR_8->sb_igu_id * sizeof(u64),
          (u64)(uintptr_t)&VAR_13, 2, ((void*)0));
 if (VAR_15) {
  FUNC_0(VAR_6, "dmae_grc2host failed %d\n", VAR_15);
  return VAR_15;
 }

 VAR_14 = FUNC_1(VAR_13.params, VAR_2);

 VAR_11 = VAR_0 +
    FUNC_2(VAR_8->abs.queue_id);
 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_11);

 VAR_12 = FUNC_1(VAR_10, VAR_4);
 if (!VAR_12)
  return -VAR_5;

 VAR_10 = FUNC_1(VAR_10, VAR_3);
 *VAR_9 = (u16)(VAR_10 << VAR_14);

 return 0;
}
