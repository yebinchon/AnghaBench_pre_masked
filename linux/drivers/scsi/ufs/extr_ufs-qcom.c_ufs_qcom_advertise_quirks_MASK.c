
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int major; int minor; int step; } ;
struct ufs_qcom_host {TYPE_1__ hw_ver; } ;
struct ufs_hba {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ufs_qcom_host*) ;
 struct ufs_qcom_host* FUNC_1 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_2(struct ufs_hba *VAR_6)
{
 struct ufs_qcom_host *VAR_7 = FUNC_1(VAR_6);

 if (VAR_7->hw_ver.major == 0x01) {
  VAR_6->quirks |= VAR_4
       | VAR_2
       | VAR_5;

  if (VAR_7->hw_ver.minor == 0x0001 && VAR_7->hw_ver.step == 0x0001)
   VAR_6->quirks |= VAR_0;

  VAR_6->quirks |= VAR_1;
 }

 if (VAR_7->hw_ver.major == 0x2) {
  VAR_6->quirks |= VAR_3;

  if (!FUNC_0(VAR_7))

   VAR_6->quirks |= (VAR_4
    | VAR_5
    | VAR_2);
 }
}
