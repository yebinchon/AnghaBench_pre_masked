
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (char**,struct dentry*,char*,int ,int ) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static char *FUNC_3(struct dentry *VAR_1, char *VAR_2, ssize_t VAR_3)
{
 char *VAR_4;
 char *VAR_5 = FUNC_1(&VAR_4, VAR_1, VAR_2, VAR_3,
         VAR_0);
 if (!FUNC_0(VAR_5)) {
  char *VAR_6 = FUNC_2(VAR_5, VAR_4);
  if (VAR_6)
   return VAR_6;
 }
 return VAR_5;
}
