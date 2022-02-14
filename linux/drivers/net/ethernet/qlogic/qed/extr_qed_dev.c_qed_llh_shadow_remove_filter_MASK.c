
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qed_llh_filter {int dummy; } qed_llh_filter ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct qed_dev*,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (struct qed_dev*,scalar_t__,union qed_llh_filter*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct qed_dev *VAR_2,
        u8 VAR_3,
        union qed_llh_filter *VAR_4,
        u8 *VAR_5, u32 *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;


 if (*VAR_5 == VAR_1) {
  FUNC_0(VAR_2, "Failed to find a filter in the LLH shadow\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_2, VAR_3, *VAR_5,
           VAR_6);
}
