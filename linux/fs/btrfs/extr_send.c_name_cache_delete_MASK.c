
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_ctx {int name_cache; int name_cache_size; TYPE_1__* send_root; } ;
struct name_cache_entry {scalar_t__ ino; int list; int radix_list; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int fs_info; } ;


 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct list_head*) ;
 int FUNC_4 (int *,unsigned long) ;
 struct list_head* FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct send_ctx *VAR_0,
         struct name_cache_entry *VAR_1)
{
 struct list_head *VAR_2;

 VAR_2 = FUNC_5(&VAR_0->name_cache,
   (unsigned long)VAR_1->ino);
 if (!VAR_2) {
  FUNC_0(VAR_0->send_root->fs_info,
       "name_cache_delete lookup failed ino %llu cache size %d, leaking memory",
   VAR_1->ino, VAR_0->name_cache_size);
 }

 FUNC_2(&VAR_1->radix_list);
 FUNC_2(&VAR_1->list);
 VAR_0->name_cache_size--;




 if (VAR_2 && FUNC_3(VAR_2)) {
  FUNC_4(&VAR_0->name_cache, (unsigned long)VAR_1->ino);
  FUNC_1(VAR_2);
 }
}
