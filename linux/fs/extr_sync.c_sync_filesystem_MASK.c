
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_umount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct super_block*) ;

int FUNC_4(struct super_block *VAR_0)
{
 int VAR_1;





 FUNC_0(!FUNC_2(&VAR_0->s_umount));




 if (FUNC_3(VAR_0))
  return 0;

 VAR_1 = FUNC_1(VAR_0, 0);
 if (VAR_1 < 0)
  return VAR_1;
 return FUNC_1(VAR_0, 1);
}
