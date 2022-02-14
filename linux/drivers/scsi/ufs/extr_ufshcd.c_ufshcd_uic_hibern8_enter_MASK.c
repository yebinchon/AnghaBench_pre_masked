
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_1(struct ufs_hba *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 for (VAR_4 = VAR_1; VAR_4 > 0; VAR_4--) {
  VAR_3 = FUNC_0(VAR_2);
  if (!VAR_3 || VAR_3 == -VAR_0)
   goto out;
 }
out:
 return VAR_3;
}
