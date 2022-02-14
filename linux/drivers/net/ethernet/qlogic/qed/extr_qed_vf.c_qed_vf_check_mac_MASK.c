
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
 scalar_t__ FUNC_0 (int ,int *) ;

bool FUNC_1(struct qed_hwfn *VAR_1, u8 *VAR_2)
{
 struct qed_bulletin_content *VAR_3;

 VAR_3 = &VAR_1->vf_iov_info->bulletin_shadow;
 if (!(VAR_3->valid_bitmap & (1 << VAR_0)))
  return 1;


 if (FUNC_0(VAR_3->mac, VAR_2))
  return 0;

 return 0;
}
