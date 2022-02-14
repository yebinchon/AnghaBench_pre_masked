
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int nutmrs; int tm_slots_in_use; } ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int,int *) ;

__attribute__((used)) static bool FUNC_2(struct ufs_hba *VAR_0, int *VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;

 if (!VAR_1)
  goto out;

 do {
  VAR_2 = FUNC_0(&VAR_0->tm_slots_in_use, VAR_0->nutmrs);
  if (VAR_2 >= VAR_0->nutmrs)
   goto out;
 } while (FUNC_1(VAR_2, &VAR_0->tm_slots_in_use));

 *VAR_1 = VAR_2;
 VAR_3 = 1;
out:
 return VAR_3;
}
