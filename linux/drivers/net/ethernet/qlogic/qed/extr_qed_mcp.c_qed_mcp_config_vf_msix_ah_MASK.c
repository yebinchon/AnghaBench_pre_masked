
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_4,
     struct qed_ptt *VAR_5, u8 VAR_6)
{
 u32 VAR_7 = 0, VAR_8 = VAR_6, VAR_9 = 0;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_0,
    VAR_8, &VAR_7, &VAR_9);

 if (VAR_7 != VAR_2) {
  FUNC_0(VAR_4, "MFW failed to set MSI-X for VFs\n");
  VAR_10 = -VAR_1;
 } else {
  FUNC_1(VAR_4, VAR_3,
      "Requested 0x%02x MSI-x interrupts for VFs\n", VAR_6);
 }

 return VAR_10;
}
