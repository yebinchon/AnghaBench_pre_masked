
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_vf_info {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_filter_ucast {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_vf_info*,struct qed_filter_ucast*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_vf_info*,struct qed_filter_ucast*) ;

__attribute__((used)) static int
FUNC_2(struct qed_hwfn *VAR_2,
     struct qed_vf_info *VAR_3,
     struct qed_filter_ucast *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4->type == VAR_0) {
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 if (VAR_4->type == VAR_1)
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
