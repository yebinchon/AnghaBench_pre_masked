
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_hwfn {int dummy; } ;
struct qed_bmap {scalar_t__ max_count; int name; int bitmap; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

int FUNC_3(struct qed_hwfn *VAR_2,
      struct qed_bmap *VAR_3, u32 *VAR_4)
{
 *VAR_4 = FUNC_2(VAR_3->bitmap, VAR_3->max_count);
 if (*VAR_4 >= VAR_3->max_count)
  return -VAR_0;

 FUNC_1(*VAR_4, VAR_3->bitmap);

 FUNC_0(VAR_2, VAR_1, "%s bitmap: allocated id %d\n",
     VAR_3->name, *VAR_4);

 return 0;
}
