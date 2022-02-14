
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct dentry*,char*,int) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (char**,int*,char*,int) ;

char *FUNC_5(struct dentry *VAR_1, char *VAR_2, int VAR_3)
{
 char *VAR_4 = ((void*)0);
 char *VAR_5;

 if (FUNC_3(VAR_1)) {
  VAR_4 = VAR_2 + VAR_3;
  if (FUNC_4(&VAR_4, &VAR_3, "//deleted", 10) != 0)
   goto Elong;
  VAR_3++;
 }
 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (!FUNC_1(VAR_5) && VAR_4)
  *VAR_4 = '/';
 return VAR_5;
Elong:
 return FUNC_0(-VAR_0);
}
