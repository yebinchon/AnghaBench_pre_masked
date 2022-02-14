
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct qed_dev {int dummy; } ;
typedef enum qed_chain_cnt_type { ____Placeholder_qed_chain_cnt_type } qed_chain_cnt_type ;


 int FUNC_0 (struct qed_dev*,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct qed_dev *VAR_5,
        enum qed_chain_cnt_type VAR_6,
        size_t VAR_7, u32 VAR_8)
{
 u64 VAR_9 = FUNC_1(VAR_7) * VAR_8;







 if ((VAR_6 == VAR_1 &&
      VAR_9 > ((u32)VAR_3 + 1)) ||
     (VAR_6 == VAR_2 && VAR_9 > VAR_4)) {
  FUNC_0(VAR_5,
     "The actual chain size (0x%llx) is larger than the maximal possible value\n",
     VAR_9);
  return -VAR_0;
 }

 return 0;
}
