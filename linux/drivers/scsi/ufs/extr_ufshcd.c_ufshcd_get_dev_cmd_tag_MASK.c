
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {unsigned long lrb_in_use; int nutrs; } ;


 int FUNC_0 (unsigned long*,int) ;
 scalar_t__ FUNC_1 (int,unsigned long*) ;

__attribute__((used)) static bool FUNC_2(struct ufs_hba *VAR_0, int *VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;
 unsigned long VAR_4;

 if (!VAR_1)
  goto out;

 do {
  VAR_4 = ~VAR_0->lrb_in_use;
  VAR_2 = FUNC_0(&VAR_4, VAR_0->nutrs);
  if (VAR_2 >= VAR_0->nutrs)
   goto out;
 } while (FUNC_1(VAR_2, &VAR_0->lrb_in_use));

 *VAR_1 = VAR_2;
 VAR_3 = 1;
out:
 return VAR_3;
}
