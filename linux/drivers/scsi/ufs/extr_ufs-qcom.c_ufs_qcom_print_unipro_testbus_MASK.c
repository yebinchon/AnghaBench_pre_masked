
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int select_minor; int select_major; } ;
struct ufs_qcom_host {TYPE_1__ testbus; } ;
struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,int ,int,int,int *,int,int) ;
 int FUNC_3 (struct ufs_qcom_host*) ;
 struct ufs_qcom_host* FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*,int ) ;

__attribute__((used)) static void FUNC_6(struct ufs_hba *VAR_5)
{
 struct ufs_qcom_host *VAR_6 = FUNC_4(VAR_5);
 u32 *VAR_7 = ((void*)0);
 int VAR_8, VAR_9 = 256, VAR_10 = VAR_9 * sizeof(u32);

 VAR_7 = FUNC_1(VAR_10, VAR_1);
 if (!VAR_7)
  return;

 VAR_6->testbus.select_major = VAR_3;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_6->testbus.select_minor = VAR_8;
  FUNC_3(VAR_6);
  VAR_7[VAR_8] = FUNC_5(VAR_5, VAR_4);
 }
 FUNC_2(VAR_2, "UNIPRO_TEST_BUS ", VAR_0,
   16, 4, VAR_7, VAR_10, 0);
 FUNC_0(VAR_7);
}
