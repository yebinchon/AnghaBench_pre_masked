
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct qed_ll2_info {int mutex; scalar_t__ b_active; } ;
struct qed_hwfn {struct qed_ll2_info* p_ll2_info; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct qed_ll2_info *FUNC_2(struct qed_hwfn *VAR_1,
          u8 VAR_2,
          bool VAR_3,
          bool VAR_4)
{
 struct qed_ll2_info *VAR_5, *VAR_6 = ((void*)0);

 if (VAR_2 >= VAR_0)
  return ((void*)0);

 if (!VAR_1->p_ll2_info)
  return ((void*)0);

 VAR_5 = &VAR_1->p_ll2_info[VAR_2];

 if (VAR_4) {
  if (VAR_3)
   FUNC_0(&VAR_5->mutex);
  if (VAR_5->b_active)
   VAR_6 = VAR_5;
  if (VAR_3)
   FUNC_1(&VAR_5->mutex);
 } else {
  VAR_6 = VAR_5;
 }

 return VAR_6;
}
