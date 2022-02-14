
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int hw_init_done; } ;
struct cau_sb_entry {int params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_hwfn*,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,int ,int,int *) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__,int,int *) ;

int FUNC_4(struct qed_hwfn *VAR_4, struct qed_ptt *VAR_5,
     u8 VAR_6, u16 VAR_7, bool VAR_8)
{
 struct cau_sb_entry VAR_9;
 int VAR_10;

 if (!VAR_4->hw_init_done) {
  FUNC_0(VAR_4, "hardware not initialized yet\n");
  return -VAR_3;
 }

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_0 +
          VAR_7 * sizeof(u64),
          (u64)(uintptr_t)&VAR_9, 2, ((void*)0));
 if (VAR_10) {
  FUNC_0(VAR_4, "dmae_grc2host failed %d\n", VAR_10);
  return VAR_10;
 }

 if (VAR_8)
  FUNC_1(VAR_9.params, VAR_2, VAR_6);
 else
  FUNC_1(VAR_9.params, VAR_1, VAR_6);

 VAR_10 = FUNC_3(VAR_4, VAR_5,
          (u64)(uintptr_t)&VAR_9,
          VAR_0 +
          VAR_7 * sizeof(u64), 2, ((void*)0));
 if (VAR_10) {
  FUNC_0(VAR_4, "dmae_host2grc failed %d\n", VAR_10);
  return VAR_10;
 }

 return VAR_10;
}
