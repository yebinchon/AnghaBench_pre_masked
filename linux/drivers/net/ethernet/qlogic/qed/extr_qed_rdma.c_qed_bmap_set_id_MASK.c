
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_hwfn {int dummy; } ;
struct qed_bmap {scalar_t__ max_count; int bitmap; } ;


 int FUNC_0 (scalar_t__,int ) ;

void FUNC_1(struct qed_hwfn *VAR_0,
       struct qed_bmap *VAR_1, u32 VAR_2)
{
 if (VAR_2 >= VAR_1->max_count)
  return;

 FUNC_0(VAR_2, VAR_1->bitmap);
}
