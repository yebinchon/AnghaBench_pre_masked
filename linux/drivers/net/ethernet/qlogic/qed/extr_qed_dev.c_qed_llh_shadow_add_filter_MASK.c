
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qed_llh_filter {int dummy; } qed_llh_filter ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct qed_dev {int dummy; } ;
typedef enum qed_llh_filter_type { ____Placeholder_qed_llh_filter_type } qed_llh_filter_type ;


 int FUNC_0 (struct qed_dev*,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct qed_dev*,scalar_t__,scalar_t__,int,union qed_llh_filter*,int *) ;
 int FUNC_2 (struct qed_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct qed_dev*,scalar_t__,union qed_llh_filter*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(struct qed_dev *VAR_2,
     u8 VAR_3,
     enum qed_llh_filter_type VAR_4,
     union qed_llh_filter *VAR_5,
     u8 *VAR_6, u32 *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;


 if (*VAR_6 == VAR_1) {
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_6);
  if (VAR_8)
   return VAR_8;
 }


 if (*VAR_6 == VAR_1) {
  FUNC_0(VAR_2,
     "Failed to find an empty LLH filter to utilize [ppfid %d]\n",
     VAR_3);
  return -VAR_0;
 }

 return FUNC_1(VAR_2, VAR_3, *VAR_6, VAR_4,
        VAR_5, VAR_7);
}
