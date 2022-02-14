
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct super_block {int dummy; } ;
struct qnx6_sb_info {int s_mount_opt; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct qnx6_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (char**,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(char *VAR_3, struct super_block *VAR_4)
{
 char *VAR_5;
 struct qnx6_sb_info *VAR_6 = FUNC_0(VAR_4);
 substring_t VAR_7[VAR_0];

 if (!VAR_3)
  return 1;

 while ((VAR_5 = FUNC_3(&VAR_3, ",")) != ((void*)0)) {
  int VAR_8;
  if (!*VAR_5)
   continue;

  VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_7);
  switch (VAR_8) {
  case 128:
   FUNC_2(VAR_6->s_mount_opt, VAR_1);
   break;
  default:
   return 0;
  }
 }
 return 1;
}
