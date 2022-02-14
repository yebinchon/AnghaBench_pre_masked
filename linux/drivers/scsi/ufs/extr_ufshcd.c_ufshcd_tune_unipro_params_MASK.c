
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dev_quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ufs_hba*,int ,int) ;
 scalar_t__ FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*) ;
 int FUNC_6 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_7(struct ufs_hba *VAR_3)
{
 if (FUNC_2(VAR_3)) {
  FUNC_5(VAR_3);
  FUNC_4(VAR_3);
 }

 if (VAR_3->dev_quirks & VAR_2)

  FUNC_1(VAR_3, FUNC_0(VAR_0), 10);

 if (VAR_3->dev_quirks & VAR_1)
  FUNC_3(VAR_3);

 FUNC_6(VAR_3);
}
