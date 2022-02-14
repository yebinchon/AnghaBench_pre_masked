
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef unsigned int ino_t ;
typedef int DEFINE_SPINLOCK ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct super_block*,unsigned int) ;

ino_t FUNC_3(struct super_block *VAR_0, ino_t VAR_1)
{





 static DEFINE_SPINLOCK(VAR_2);
 static unsigned int VAR_3;
 ino_t VAR_4;

 FUNC_0(&VAR_2);
 do {
  if (VAR_3 <= VAR_1)
   VAR_3 = VAR_1 + 1;
  VAR_4 = VAR_3++;
 } while (!FUNC_2(VAR_0, VAR_4));
 FUNC_1(&VAR_2);

 return VAR_4;
}
