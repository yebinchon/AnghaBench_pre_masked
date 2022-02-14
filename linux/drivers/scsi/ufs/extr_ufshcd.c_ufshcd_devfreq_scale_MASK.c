
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_hba*) ;
 int FUNC_1 (struct ufs_hba*) ;
 int FUNC_2 (struct ufs_hba*,int) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*,int) ;
 int FUNC_5 (struct ufs_hba*,int) ;
 int FUNC_6 (struct ufs_hba*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct ufs_hba *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;


 FUNC_2(VAR_1, 0);

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;


 if (!VAR_2) {
  VAR_3 = FUNC_5(VAR_1, 0);
  if (VAR_3)
   goto out;
 }

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3) {
  if (!VAR_2)
   FUNC_5(VAR_1, 1);
  goto out;
 }


 if (VAR_2) {
  VAR_3 = FUNC_5(VAR_1, 1);
  if (VAR_3) {
   FUNC_4(VAR_1, 0);
   goto out;
  }
 }

 VAR_3 = FUNC_6(VAR_1, VAR_2, VAR_0);

out:
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 return VAR_3;
}
