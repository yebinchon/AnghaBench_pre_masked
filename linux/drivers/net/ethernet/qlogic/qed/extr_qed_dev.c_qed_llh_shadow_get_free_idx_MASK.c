
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct qed_llh_info {struct qed_llh_filter_info** pp_filters; } ;
struct qed_llh_filter_info {int b_enabled; } ;
struct qed_dev {struct qed_llh_info* p_llh_info; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct qed_dev*,size_t,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct qed_dev *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 struct qed_llh_info *VAR_5 = VAR_2->p_llh_info;
 struct qed_llh_filter_info *VAR_6;
 int VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_0(VAR_2, VAR_3, 0, "get_free_idx");
 if (VAR_7)
  return VAR_7;

 *VAR_4 = VAR_1;

 VAR_6 = VAR_5->pp_filters[VAR_3];
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (!VAR_6[VAR_8].b_enabled) {
   *VAR_4 = VAR_8;
   break;
  }
 }

 return 0;
}
