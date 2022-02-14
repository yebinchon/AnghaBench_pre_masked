
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cachefiles_cache {scalar_t__ frun_percent; scalar_t__ fcull_percent; scalar_t__ fstop_percent; scalar_t__ brun_percent; scalar_t__ bcull_percent; scalar_t__ bstop_percent; scalar_t__ tag; int flags; int rootdirname; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,char*) ;
 int FUNC_2 (struct cachefiles_cache*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct cachefiles_cache *VAR_5, char *VAR_6)
{
 FUNC_1("{%u,%u,%u,%u,%u,%u},%s",
        VAR_5->frun_percent,
        VAR_5->fcull_percent,
        VAR_5->fstop_percent,
        VAR_5->brun_percent,
        VAR_5->bcull_percent,
        VAR_5->bstop_percent,
        VAR_6);


 FUNC_0(VAR_5->fstop_percent >= 0 &&
        VAR_5->fstop_percent < VAR_5->fcull_percent &&
        VAR_5->fcull_percent < VAR_5->frun_percent &&
        VAR_5->frun_percent < 100);

 FUNC_0(VAR_5->bstop_percent >= 0 &&
        VAR_5->bstop_percent < VAR_5->bcull_percent &&
        VAR_5->bcull_percent < VAR_5->brun_percent &&
        VAR_5->brun_percent < 100);

 if (*VAR_6) {
  FUNC_4("'bind' command doesn't take an argument\n");
  return -VAR_2;
 }

 if (!VAR_5->rootdirname) {
  FUNC_4("No cache directory specified\n");
  return -VAR_2;
 }


 if (FUNC_5(VAR_0, &VAR_5->flags)) {
  FUNC_4("Cache already bound\n");
  return -VAR_1;
 }


 if (!VAR_5->tag) {


  VAR_5->tag = FUNC_3("CacheFiles", VAR_4);
  if (!VAR_5->tag)
   return -VAR_3;
 }


 return FUNC_2(VAR_5);
}
