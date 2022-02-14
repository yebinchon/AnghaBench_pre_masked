
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qed_llh_filter {int dummy; } qed_llh_filter ;
typedef size_t u8 ;
struct qed_llh_info {struct qed_llh_filter_info** pp_filters; } ;
struct qed_llh_filter_info {int filter; } ;
struct qed_dev {struct qed_llh_info* p_llh_info; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (union qed_llh_filter*,int *,int) ;
 int FUNC_1 (struct qed_dev*,size_t,int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct qed_dev *VAR_2,
        u8 VAR_3,
        union qed_llh_filter *VAR_4, u8 *VAR_5)
{
 struct qed_llh_info *VAR_6 = VAR_2->p_llh_info;
 struct qed_llh_filter_info *VAR_7;
 int VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_1(VAR_2, VAR_3, 0, "search");
 if (VAR_8)
  return VAR_8;

 *VAR_5 = VAR_1;

 VAR_7 = VAR_6->pp_filters[VAR_3];
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (!FUNC_0(VAR_4, &VAR_7[VAR_9].filter,
       sizeof(*VAR_4))) {
   *VAR_5 = VAR_9;
   break;
  }
 }

 return 0;
}
