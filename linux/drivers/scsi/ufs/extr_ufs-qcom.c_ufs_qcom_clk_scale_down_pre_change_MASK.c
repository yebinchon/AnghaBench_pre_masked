
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_qcom_host {int dummy; } ;
struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ufs_qcom_host*) ;
 int FUNC_2 (struct ufs_hba*,int ,int*) ;
 int FUNC_3 (struct ufs_hba*,int ,int) ;
 struct ufs_qcom_host* FUNC_4 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_5(struct ufs_hba *VAR_2)
{
 struct ufs_qcom_host *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;
 u32 VAR_5;

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_4 = FUNC_2(VAR_2,
       FUNC_0(VAR_0),
       &VAR_5);


 if (!VAR_4 &&
     (VAR_5 & VAR_1)) {
  VAR_5 &= ~VAR_1;
  VAR_4 = FUNC_3(VAR_2,
        FUNC_0(VAR_0),
        VAR_5);
 }

 return VAR_4;
}
