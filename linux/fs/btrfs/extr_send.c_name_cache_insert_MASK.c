
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_cache_entry {int list; int radix_list; scalar_t__ ino; } ;
struct send_ctx {int name_cache_size; struct name_cache_entry name_cache_list; int name_cache; } ;
struct list_head {int list; int radix_list; scalar_t__ ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct name_cache_entry*) ;
 int FUNC_1 (struct name_cache_entry*) ;
 struct name_cache_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct name_cache_entry*) ;
 int FUNC_4 (int *,scalar_t__,struct name_cache_entry*) ;
 struct name_cache_entry* FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct send_ctx *VAR_2,
        struct name_cache_entry *VAR_3)
{
 int VAR_4 = 0;
 struct list_head *VAR_5;

 VAR_5 = FUNC_5(&VAR_2->name_cache,
   (unsigned long)VAR_3->ino);
 if (!VAR_5) {
  VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
  if (!VAR_5) {
   FUNC_1(VAR_3);
   return -VAR_0;
  }
  FUNC_0(VAR_5);

  VAR_4 = FUNC_4(&VAR_2->name_cache, VAR_3->ino, VAR_5);
  if (VAR_4 < 0) {
   FUNC_1(VAR_5);
   FUNC_1(VAR_3);
   return VAR_4;
  }
 }
 FUNC_3(&VAR_3->radix_list, VAR_5);
 FUNC_3(&VAR_3->list, &VAR_2->name_cache_list);
 VAR_2->name_cache_size++;

 return VAR_4;
}
