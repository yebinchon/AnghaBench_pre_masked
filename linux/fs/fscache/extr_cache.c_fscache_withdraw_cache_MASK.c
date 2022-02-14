
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fscache_cache {TYPE_2__* tag; int kobj; int object_list; int object_count; TYPE_1__* ops; int link; int flags; } ;
struct TYPE_4__ {int flags; int * cache; int name; } ;
struct TYPE_3__ {int (* dissociate_pages ) (struct fscache_cache*) ;int (* sync_cache ) (struct fscache_cache*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct fscache_cache*,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (struct fscache_cache*) ;
 int FUNC_18 (struct fscache_cache*) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int) ;

void FUNC_22(struct fscache_cache *VAR_7)
{
 FUNC_2(VAR_2);

 FUNC_4("");

 FUNC_16("Withdrawing cache \"%s\"\n",
    VAR_7->tag->name);


 if (FUNC_19(VAR_0, &VAR_7->flags))
  FUNC_1();

 FUNC_8(&VAR_3);
 FUNC_14(&VAR_7->link);
 VAR_7->tag->cache = ((void*)0);
 FUNC_20(&VAR_3);



 FUNC_10(&VAR_6);
 VAR_7->ops->sync_cache(VAR_7);
 FUNC_11(&VAR_6);



 FUNC_10(&VAR_5);
 VAR_7->ops->dissociate_pages(VAR_7);
 FUNC_11(&VAR_5);




 FUNC_3("destroy");

 FUNC_12(VAR_7, &VAR_2);



 FUNC_3("wait for finish");
 FUNC_21(VAR_4,
     FUNC_6(&VAR_7->object_count) == 0);
 FUNC_3("wait for clearance");
 FUNC_21(VAR_4,
     FUNC_15(&VAR_7->object_list));
 FUNC_3("cleared");
 FUNC_0(FUNC_15(&VAR_2));

 FUNC_13(VAR_7->kobj);

 FUNC_7(VAR_1, &VAR_7->tag->flags);
 FUNC_9(VAR_7->tag);
 VAR_7->tag = ((void*)0);

 FUNC_5("");
}
