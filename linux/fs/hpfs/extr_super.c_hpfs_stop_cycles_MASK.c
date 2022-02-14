
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int FUNC_0 (struct super_block*,char*,int,char*) ;

int FUNC_1(struct super_block *VAR_0, int VAR_1, int *VAR_2, int *VAR_3,
  char *VAR_4)
{
 if (*VAR_3 && *VAR_2 == VAR_1) {
  FUNC_0(VAR_0, "cycle detected on key %08x in %s", VAR_1, VAR_4);
  return 1;
 }
 (*VAR_3)++;
 if (!((*VAR_3 - 1) & *VAR_3)) *VAR_2 = VAR_1;
 return 0;
}
