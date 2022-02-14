
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct qed_sb_info {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {size_t num_hwfns; struct qed_hwfn* hwfns; } ;
typedef enum qed_sb_type { ____Placeholder_qed_sb_type } qed_sb_type ;


 int FUNC_0 (struct qed_dev*,int ,char*,int,size_t,size_t) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 int VAR_0 ;
 struct qed_hwfn* FUNC_2 (struct qed_dev*) ;
 int VAR_1 ;
 int FUNC_3 (struct qed_hwfn*,struct qed_sb_info*,size_t) ;

__attribute__((used)) static u32 FUNC_4(struct qed_dev *VAR_2,
     struct qed_sb_info *VAR_3,
     u16 VAR_4,
     enum qed_sb_type VAR_5)
{
 struct qed_hwfn *VAR_6;
 u16 VAR_7;
 u32 VAR_8;


 if (VAR_5 == VAR_1) {
  VAR_6 = &VAR_2->hwfns[VAR_4 % VAR_2->num_hwfns];
  VAR_7 = VAR_4 / VAR_2->num_hwfns;
 } else {
  VAR_6 = FUNC_2(VAR_2);
  VAR_7 = VAR_4;
 }

 FUNC_0(VAR_2, VAR_0,
     "hwfn [%d] <--[init]-- SB %04x [0x%04x upper]\n",
     FUNC_1(VAR_6) ? 0 : 1, VAR_7, VAR_4);

 VAR_8 = FUNC_3(VAR_6, VAR_3, VAR_7);

 return VAR_8;
}
