
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {char* s_fs_info; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct dentry*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static char *FUNC_7(struct dentry *VAR_1, char *VAR_2)
{
 char *VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_0);
 char *VAR_4;
 size_t VAR_5;

 VAR_4 = VAR_1->d_sb->s_fs_info;
 VAR_5 = FUNC_6(VAR_4);
 if (FUNC_1(VAR_3)) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }





 FUNC_0(VAR_3 + FUNC_6(VAR_3) + 1 != VAR_2 + VAR_0);

 FUNC_5(VAR_2, VAR_4, VAR_0);
 if (VAR_5 > VAR_3 - VAR_2) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 if (VAR_3 > VAR_2 + VAR_5)
  FUNC_4(VAR_2 + VAR_5, VAR_3);

 return VAR_2;
}
