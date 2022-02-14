
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {TYPE_1__* p_virt; } ;
struct qed_vf_info {TYPE_2__ bulletin; } ;
struct qed_hwfn {int dummy; } ;
struct TYPE_3__ {int valid_bitmap; int pvid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct qed_vf_info* FUNC_1 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static u16
FUNC_2(struct qed_hwfn *VAR_1, u16 VAR_2)
{
 struct qed_vf_info *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, 1);
 if (!VAR_3 || !VAR_3->bulletin.p_virt)
  return 0;

 if (!(VAR_3->bulletin.p_virt->valid_bitmap & FUNC_0(VAR_0)))
  return 0;

 return VAR_3->bulletin.p_virt->pvid;
}
