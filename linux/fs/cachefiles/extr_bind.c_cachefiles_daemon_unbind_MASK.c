
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int identifier; } ;
struct cachefiles_cache {int tag; int secctx; int rootdirname; int mnt; int graveyard; TYPE_1__ cache; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct cachefiles_cache *VAR_1)
{
 FUNC_0("");

 if (FUNC_7(VAR_0, &VAR_1->flags)) {
  FUNC_6("File cache on %s unregistering\n",
   VAR_1->cache.identifier);

  FUNC_3(&VAR_1->cache);
 }

 FUNC_2(VAR_1->graveyard);
 FUNC_5(VAR_1->mnt);

 FUNC_4(VAR_1->rootdirname);
 FUNC_4(VAR_1->secctx);
 FUNC_4(VAR_1->tag);

 FUNC_1("");
}
