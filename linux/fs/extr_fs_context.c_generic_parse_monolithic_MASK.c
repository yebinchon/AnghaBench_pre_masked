
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {int security; } ;


 int FUNC_0 (char*,int *) ;
 char* FUNC_1 (char*,char) ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 (char**,char*) ;
 int FUNC_4 (struct fs_context*,char*,char*,size_t) ;

int FUNC_5(struct fs_context *VAR_0, void *VAR_1)
{
 char *VAR_2 = VAR_1, *VAR_3;
 int VAR_4 = 0;

 if (!VAR_2)
  return 0;

 VAR_4 = FUNC_0(VAR_2, &VAR_0->security);
 if (VAR_4)
  return VAR_4;

 while ((VAR_3 = FUNC_3(&VAR_2, ",")) != ((void*)0)) {
  if (*VAR_3) {
   size_t VAR_5 = 0;
   char *VAR_6 = FUNC_1(VAR_3, '=');

   if (VAR_6) {
    if (VAR_6 == VAR_3)
     continue;
    *VAR_6++ = 0;
    VAR_5 = FUNC_2(VAR_6);
   }
   VAR_4 = FUNC_4(VAR_0, VAR_3, VAR_6, VAR_5);
   if (VAR_4 < 0)
    break;
  }
 }

 return VAR_4;
}
