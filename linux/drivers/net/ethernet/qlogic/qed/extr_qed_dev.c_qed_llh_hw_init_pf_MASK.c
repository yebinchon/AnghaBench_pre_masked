
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_4__ {int hw_mac_addr; } ;
struct qed_hwfn {TYPE_2__ hw_info; int rel_pf_id; struct qed_dev* cdev; } ;
struct qed_dev {int mf_bits; TYPE_1__* p_llh_info; } ;
struct TYPE_3__ {scalar_t__ num_ppfid; } ;


 int FUNC_0 (struct qed_dev*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct qed_dev*) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int VAR_1 ;
 int FUNC_3 (struct qed_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct qed_dev*,int ,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct qed_hwfn *VAR_2,
         struct qed_ptt *VAR_3)
{
 struct qed_dev *VAR_4 = VAR_2->cdev;
 u8 VAR_5, VAR_6;
 int VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_4->p_llh_info->num_ppfid; VAR_5++) {
  u32 VAR_8;

  VAR_7 = FUNC_3(VAR_4, VAR_5, &VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_8 = VAR_0 + VAR_6 * 0x4;
  FUNC_6(VAR_2, VAR_3, VAR_8, VAR_2->rel_pf_id);
 }

 if (FUNC_7(VAR_1, &VAR_4->mf_bits) &&
     !FUNC_2(VAR_2)) {
  VAR_7 = FUNC_4(VAR_4, 0,
         VAR_2->hw_info.hw_mac_addr);
  if (VAR_7)
   FUNC_0(VAR_4,
      "Failed to add an LLH filter with the primary MAC\n");
 }

 if (FUNC_1(VAR_4)) {
  VAR_7 = FUNC_5(VAR_2, VAR_3);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
