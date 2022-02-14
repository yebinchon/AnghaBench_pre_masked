
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct qed_llh_info {struct qed_llh_filter_info** pp_filters; } ;
struct qed_llh_filter_info {scalar_t__ ref_cnt; } ;
struct qed_dev {struct qed_llh_info* p_llh_info; } ;
typedef int p_filters ;


 int FUNC_0 (struct qed_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_llh_filter_info*,int ,int) ;
 int FUNC_2 (struct qed_dev*,size_t,size_t,char*) ;

__attribute__((used)) static int
FUNC_3(struct qed_dev *VAR_1,
          u8 VAR_2, u8 VAR_3, u32 *VAR_4)
{
 struct qed_llh_info *VAR_5 = VAR_1->p_llh_info;
 struct qed_llh_filter_info *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, "remove");
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_5->pp_filters[VAR_2];
 if (!VAR_6[VAR_3].ref_cnt) {
  FUNC_0(VAR_1,
     "LLH shadow: trying to remove a filter with ref_cnt=0\n");
  return -VAR_0;
 }

 *VAR_4 = --VAR_6[VAR_3].ref_cnt;
 if (!VAR_6[VAR_3].ref_cnt)
  FUNC_1(&VAR_6[VAR_3],
         0, sizeof(VAR_6[VAR_3]));

 return 0;
}
