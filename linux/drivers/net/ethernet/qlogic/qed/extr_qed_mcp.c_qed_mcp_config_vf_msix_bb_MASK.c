
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* cdev; } ;
struct TYPE_2__ {scalar_t__ num_hwfns; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct qed_hwfn*) ;
 int VAR_7 ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_8,
     struct qed_ptt *VAR_9, u8 VAR_10, u8 VAR_11)
{
 u32 VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 int VAR_15;


 if (!FUNC_2(VAR_8))
  return 0;
 VAR_11 *= VAR_8->cdev->num_hwfns;

 VAR_13 |= (VAR_10 << VAR_3) &
   VAR_2;
 VAR_13 |= (VAR_11 << VAR_1) &
   VAR_0;

 VAR_15 = FUNC_3(VAR_8, VAR_9, VAR_4, VAR_13,
    &VAR_12, &VAR_14);

 if (VAR_12 != VAR_6) {
  FUNC_0(VAR_8, "VF[%d]: MFW failed to set MSI-X\n", VAR_10);
  VAR_15 = -VAR_5;
 } else {
  FUNC_1(VAR_8, VAR_7,
      "Requested 0x%02x MSI-x interrupts from VF 0x%02x\n",
      VAR_11, VAR_10);
 }

 return VAR_15;
}
