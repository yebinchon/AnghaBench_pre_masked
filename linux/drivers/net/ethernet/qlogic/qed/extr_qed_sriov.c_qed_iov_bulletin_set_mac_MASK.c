
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ is_trusted_configured; } ;
struct TYPE_5__ {TYPE_1__* p_virt; } ;
struct qed_vf_info {TYPE_3__ p_vf_info; TYPE_2__ bulletin; scalar_t__ b_malicious; } ;
struct qed_hwfn {int cdev; } ;
struct TYPE_4__ {int valid_bitmap; int mac; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_vf_info*,int) ;
 struct qed_vf_info* FUNC_5 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct qed_hwfn *VAR_4, u8 *VAR_5, int VAR_6)
{
 struct qed_vf_info *VAR_7;
 u64 VAR_8;

 VAR_7 = FUNC_5(VAR_4, (u16)VAR_6, 1);
 if (!VAR_7) {
  FUNC_1(VAR_4->cdev, "Can not set MAC, invalid vfid [%d]\n",
     VAR_6);
  return -VAR_0;
 }

 if (VAR_7->b_malicious) {
  FUNC_1(VAR_4->cdev, "Can't set MAC to malicious VF [%d]\n",
     VAR_6);
  return -VAR_0;
 }

 if (VAR_7->bulletin.p_virt->valid_bitmap & FUNC_0(VAR_1)) {
  FUNC_2(VAR_4, VAR_2,
      "Can not set MAC, Forced MAC is configured\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_3);
 FUNC_3(VAR_7->bulletin.p_virt->mac, VAR_5);

 VAR_7->bulletin.p_virt->valid_bitmap |= VAR_8;

 if (VAR_7->p_vf_info.is_trusted_configured)
  FUNC_4(VAR_4, VAR_7, VAR_8);

 return 0;
}
