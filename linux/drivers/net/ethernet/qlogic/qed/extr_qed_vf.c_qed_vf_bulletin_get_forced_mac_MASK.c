
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qed_hwfn {TYPE_1__* vf_iov_info; } ;
struct qed_bulletin_content {int valid_bitmap; int mac; } ;
struct TYPE_2__ {struct qed_bulletin_content bulletin_shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ) ;

__attribute__((used)) static bool FUNC_1(struct qed_hwfn *VAR_2,
        u8 *VAR_3, u8 *VAR_4)
{
 struct qed_bulletin_content *VAR_5;

 VAR_5 = &VAR_2->vf_iov_info->bulletin_shadow;

 if (VAR_5->valid_bitmap & (1 << VAR_0)) {
  if (VAR_4)
   *VAR_4 = 1;
 } else if (VAR_5->valid_bitmap & (1 << VAR_1)) {
  if (VAR_4)
   *VAR_4 = 0;
 } else {
  return 0;
 }

 FUNC_0(VAR_3, VAR_5->mac);

 return 1;
}
