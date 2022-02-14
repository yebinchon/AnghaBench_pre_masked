
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cachefiles_cache {char* tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct cachefiles_cache *VAR_4, char *VAR_5)
{
 char *VAR_6;

 FUNC_0(",%s", VAR_5);

 if (!*VAR_5) {
  FUNC_2("Empty tag specified\n");
  return -VAR_1;
 }

 if (VAR_4->tag)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_4->tag = VAR_6;
 return 0;
}
