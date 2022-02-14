
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct qed_sb_info {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; } ;
struct qed_dev {size_t num_hwfns; struct qed_hwfn* hwfns; } ;
typedef enum qed_sb_type { ____Placeholder_qed_sb_type } qed_sb_type ;
typedef int dma_addr_t ;


 int FUNC_0 (struct qed_dev*,int ,char*,int,size_t,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 struct qed_hwfn* FUNC_3 (struct qed_dev*) ;
 int VAR_2 ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,struct qed_sb_info*,void*,int ,size_t) ;
 struct qed_ptt* FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static u32 FUNC_7(struct qed_dev *VAR_3,
         struct qed_sb_info *VAR_4,
         void *VAR_5,
         dma_addr_t VAR_6, u16 VAR_7,
         enum qed_sb_type VAR_8)
{
 struct qed_hwfn *VAR_9;
 struct qed_ptt *VAR_10;
 u16 VAR_11;
 u32 VAR_12;


 if (VAR_8 == VAR_2) {
  VAR_9 = &VAR_3->hwfns[VAR_7 % VAR_3->num_hwfns];
  VAR_11 = VAR_7 / VAR_3->num_hwfns;
 } else {
  VAR_9 = FUNC_3(VAR_3);
  VAR_11 = VAR_7;
 }

 FUNC_0(VAR_3, VAR_1,
     "hwfn [%d] <--[init]-- SB %04x [0x%04x upper]\n",
     FUNC_1(VAR_9) ? 0 : 1, VAR_11, VAR_7);

 if (FUNC_2(VAR_9->cdev)) {
  VAR_10 = FUNC_5(VAR_9);
  if (!VAR_10)
   return -VAR_0;

  VAR_12 = FUNC_4(VAR_9, VAR_10, VAR_4, VAR_5,
         VAR_6, VAR_11);
  FUNC_6(VAR_9, VAR_10);
 } else {
  VAR_12 = FUNC_4(VAR_9, ((void*)0), VAR_4, VAR_5,
         VAR_6, VAR_11);
 }

 return VAR_12;
}
