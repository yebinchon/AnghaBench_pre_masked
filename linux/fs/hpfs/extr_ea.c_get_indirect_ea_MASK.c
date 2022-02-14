
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef int secno ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ,int,int ,int,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4(struct super_block *VAR_1, int VAR_2, secno VAR_3, int VAR_4)
{
 char *VAR_5;
 if (!(VAR_5 = FUNC_2(VAR_4 + 1, VAR_0))) {
  FUNC_3("out of memory for EA\n");
  return ((void*)0);
 }
 if (FUNC_0(VAR_1, VAR_3, VAR_2, 0, VAR_4, VAR_5)) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }
 VAR_5[VAR_4] = 0;
 return VAR_5;
}
