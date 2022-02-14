
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int major; } ;
struct ufs_qcom_host {int caps; TYPE_1__ hw_ver; } ;
struct ufs_hba {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ufs_qcom_host* FUNC_0 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_1(struct ufs_hba *VAR_6)
{
 struct ufs_qcom_host *VAR_7 = FUNC_0(VAR_6);

 VAR_6->caps |= VAR_1 | VAR_3;
 VAR_6->caps |= VAR_2;
 VAR_6->caps |= VAR_0;

 if (VAR_7->hw_ver.major >= 0x2) {
  VAR_7->caps = VAR_4 |
        VAR_5;
 }
}
