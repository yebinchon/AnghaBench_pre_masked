
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qed_llh_filter {int dummy; } qed_llh_filter ;
typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct qed_llh_info {struct qed_llh_filter_info** pp_filters; } ;
struct qed_llh_filter_info {int b_enabled; int type; scalar_t__ ref_cnt; int filter; } ;
struct qed_dev {struct qed_llh_info* p_llh_info; } ;
typedef enum qed_llh_filter_type { ____Placeholder_qed_llh_filter_type } qed_llh_filter_type ;


 int FUNC_0 (int *,union qed_llh_filter*,int) ;
 int FUNC_1 (struct qed_dev*,size_t,size_t,char*) ;

__attribute__((used)) static int
FUNC_2(struct qed_dev *VAR_0,
       u8 VAR_1,
       u8 VAR_2,
       enum qed_llh_filter_type VAR_3,
       union qed_llh_filter *VAR_4, u32 *VAR_5)
{
 struct qed_llh_info *VAR_6 = VAR_0->p_llh_info;
 struct qed_llh_filter_info *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, "add");
 if (VAR_8)
  return VAR_8;

 VAR_7 = VAR_6->pp_filters[VAR_1];
 if (!VAR_7[VAR_2].ref_cnt) {
  VAR_7[VAR_2].b_enabled = 1;
  VAR_7[VAR_2].type = VAR_3;
  FUNC_0(&VAR_7[VAR_2].filter, VAR_4,
         sizeof(VAR_7[VAR_2].filter));
 }

 *VAR_5 = ++VAR_7[VAR_2].ref_cnt;

 return 0;
}
