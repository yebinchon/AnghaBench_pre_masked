
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_host {int hba; } ;
struct reset_controller_dev {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 struct ufs_qcom_host* FUNC_1 (struct reset_controller_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(struct reset_controller_dev *VAR_0, unsigned long VAR_1)
{
 struct ufs_qcom_host *VAR_2 = FUNC_1(VAR_0);


 FUNC_0(VAR_1);
 FUNC_2(VAR_2->hba);

 FUNC_3(1000, 1100);
 return 0;
}
