
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int uic_link_state; int auto_bkops_enabled; } ;
typedef enum uic_link_state { ____Placeholder_uic_link_state } uic_link_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ufs_hba*,int) ;
 int FUNC_1 (struct ufs_hba*) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_4(struct ufs_hba *VAR_2,
     enum uic_link_state VAR_3,
     int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3 == VAR_2->uic_link_state)
  return 0;

 if (VAR_3 == VAR_0) {
  VAR_5 = FUNC_3(VAR_2);
  if (!VAR_5)
   FUNC_1(VAR_2);
  else
   goto out;
 }




 else if ((VAR_3 == VAR_1) &&
     (!VAR_4 || (VAR_4 &&
      !VAR_2->auto_bkops_enabled))) {







  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5)
   goto out;




  FUNC_0(VAR_2, 1);




  FUNC_2(VAR_2);
 }

out:
 return VAR_5;
}
