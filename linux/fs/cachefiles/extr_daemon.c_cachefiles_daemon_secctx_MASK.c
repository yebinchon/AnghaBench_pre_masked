
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cachefiles_cache {char* secctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct cachefiles_cache *VAR_3, char *VAR_4)
{
 char *VAR_5;

 FUNC_0(",%s", VAR_4);

 if (!*VAR_4) {
  FUNC_2("Empty security context specified\n");
  return -VAR_0;
 }

 if (VAR_3->secctx) {
  FUNC_2("Second security context specified\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_3->secctx = VAR_5;
 return 0;
}
