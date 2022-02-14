
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dentry*,int ,char**,int) ;
 int FUNC_3 (char*,char*) ;
 int * FUNC_4 (char*,char) ;
 char* FUNC_5 (char*,char) ;

char *FUNC_6(struct dentry *VAR_3, int VAR_4)
{
 int VAR_5;
 char *VAR_6, *VAR_7, *VAR_8 = ((void*)0);

 VAR_5 = FUNC_2(VAR_3, VAR_2, &VAR_8, VAR_4 + 1);
 if (VAR_5 == -VAR_1)
  return ((void*)0);
 if (VAR_5 < 0)
  return FUNC_0(VAR_5);
 if (VAR_5 == 0)
  goto invalid;

 if (VAR_8[0] == '/') {
  for (VAR_6 = VAR_8; *VAR_6++ == '/'; VAR_6 = VAR_7) {
   VAR_7 = FUNC_5(VAR_6, '/');
   if (VAR_6 == VAR_7)
    goto invalid;
  }
 } else {
  if (FUNC_4(VAR_8, '/') != ((void*)0))
   goto invalid;
 }

 return VAR_8;
invalid:
 FUNC_3("overlayfs: invalid redirect (%s)\n", VAR_8);
 VAR_5 = -VAR_0;
 FUNC_1(VAR_8);
 return FUNC_0(VAR_5);
}
