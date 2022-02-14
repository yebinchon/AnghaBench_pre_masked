
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int is_powered; scalar_t__ devfreq; } ;


 scalar_t__ FUNC_0 (struct ufs_hba*) ;
 int FUNC_1 (struct ufs_hba*,int) ;
 int FUNC_2 (struct ufs_hba*,int) ;
 int FUNC_3 (struct ufs_hba*,int) ;
 int FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_6(struct ufs_hba *VAR_0)
{
 if (VAR_0->is_powered) {
  FUNC_5(VAR_0);
  FUNC_3(VAR_0, 0);
  FUNC_4(VAR_0);
  if (FUNC_0(VAR_0))
   if (VAR_0->devfreq)
    FUNC_4(VAR_0);
  FUNC_1(VAR_0, 0);
  FUNC_2(VAR_0, 0);
  VAR_0->is_powered = 0;
 }
}
