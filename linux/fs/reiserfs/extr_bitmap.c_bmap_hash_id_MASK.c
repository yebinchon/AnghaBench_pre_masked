
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int dummy; } ;


 unsigned long FUNC_0 (char*,int) ;
 unsigned int FUNC_1 (struct super_block*) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_0, u32 VAR_1)
{
 char *VAR_2 = ((void*)0);
 unsigned long VAR_3;
 unsigned VAR_4;

 if (VAR_1 <= 2) {
  VAR_4 = 1;
 } else {
  VAR_2 = (char *)(&VAR_1);
  VAR_3 = FUNC_0(VAR_2, 4);
  VAR_4 = VAR_3 % FUNC_1(VAR_0);
  if (!VAR_4)
   VAR_4 = 1;
 }

 if (VAR_4 >= FUNC_1(VAR_0))
  VAR_4 = 0;
 return VAR_4;
}
