
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {TYPE_1__* p_virt; } ;
struct qed_vf_info {TYPE_2__ bulletin; scalar_t__ b_malicious; } ;
struct qed_hwfn {int cdev; } ;
struct TYPE_3__ {int valid_bitmap; scalar_t__ pvid; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_vf_info*,int) ;
 struct qed_vf_info* FUNC_2 (struct qed_hwfn*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_1,
          u16 VAR_2, int VAR_3)
{
 struct qed_vf_info *VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_2(VAR_1, (u16) VAR_3, 1);
 if (!VAR_4) {
  FUNC_0(VAR_1->cdev,
     "Can not set forced MAC, invalid vfid [%d]\n", VAR_3);
  return;
 }

 if (VAR_4->b_malicious) {
  FUNC_0(VAR_1->cdev,
     "Can't set forced vlan to malicious VF [%d]\n", VAR_3);
  return;
 }

 VAR_5 = 1 << VAR_0;
 VAR_4->bulletin.p_virt->pvid = VAR_2;
 if (VAR_2)
  VAR_4->bulletin.p_virt->valid_bitmap |= VAR_5;
 else
  VAR_4->bulletin.p_virt->valid_bitmap &= ~VAR_5;

 FUNC_1(VAR_1, VAR_4, VAR_5);
}
