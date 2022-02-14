
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct send_ctx {scalar_t__ send_progress; int parent_root; int send_root; } ;
struct name_cache_entry {int need_later_update; scalar_t__ parent_ino; scalar_t__ parent_gen; int ret; int name; scalar_t__ name_len; scalar_t__ gen; scalar_t__ ino; } ;
struct fs_path {scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct send_ctx*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct fs_path*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct fs_path*) ;
 int FUNC_3 (struct fs_path*) ;
 int FUNC_4 (struct send_ctx*,scalar_t__,scalar_t__,struct fs_path*) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__*,scalar_t__*,struct fs_path*) ;
 int FUNC_6 (struct send_ctx*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct name_cache_entry*) ;
 struct name_cache_entry* FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (struct send_ctx*) ;
 int FUNC_10 (struct send_ctx*,struct name_cache_entry*) ;
 int FUNC_11 (struct send_ctx*,struct name_cache_entry*) ;
 struct name_cache_entry* FUNC_12 (struct send_ctx*,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct send_ctx*,struct name_cache_entry*) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct send_ctx *VAR_2,
         u64 VAR_3, u64 VAR_4,
         u64 *VAR_5,
         u64 *VAR_6,
         struct fs_path *VAR_7)
{
 int VAR_8;
 int VAR_9;
 struct name_cache_entry *VAR_10 = ((void*)0);






 VAR_10 = FUNC_12(VAR_2, VAR_3, VAR_4);
 if (VAR_10) {
  if (VAR_3 < VAR_2->send_progress && VAR_10->need_later_update) {
   FUNC_10(VAR_2, VAR_10);
   FUNC_7(VAR_10);
   VAR_10 = ((void*)0);
  } else {
   FUNC_13(VAR_2, VAR_10);
   *VAR_5 = VAR_10->parent_ino;
   *VAR_6 = VAR_10->parent_gen;
   VAR_8 = FUNC_1(VAR_7, VAR_10->name, VAR_10->name_len);
   if (VAR_8 < 0)
    goto out;
   VAR_8 = VAR_10->ret;
   goto out;
  }
 }






 VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4);
 if (VAR_8 < 0)
  goto out;

 if (!VAR_8) {
  VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_7);
  if (VAR_8 < 0)
   goto out;
  VAR_8 = 1;
  goto out_cache;
 }





 if (VAR_3 < VAR_2->send_progress)
  VAR_8 = FUNC_5(VAR_2->send_root, VAR_3,
        VAR_5, VAR_6, VAR_7);
 else
  VAR_8 = FUNC_5(VAR_2->parent_root, VAR_3,
        VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0)
  goto out;





 VAR_8 = FUNC_0(VAR_2, *VAR_5, *VAR_6, VAR_3, VAR_4,
   VAR_7->start, VAR_7->end - VAR_7->start);
 if (VAR_8 < 0)
  goto out;
 if (VAR_8) {
  FUNC_3(VAR_7);
  VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_7);
  if (VAR_8 < 0)
   goto out;
  VAR_8 = 1;
 }

out_cache:



 VAR_10 = FUNC_8(sizeof(*VAR_10) + FUNC_2(VAR_7) + 1, VAR_1);
 if (!VAR_10) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_10->ino = VAR_3;
 VAR_10->gen = VAR_4;
 VAR_10->parent_ino = *VAR_5;
 VAR_10->parent_gen = *VAR_6;
 VAR_10->name_len = FUNC_2(VAR_7);
 VAR_10->ret = VAR_8;
 FUNC_14(VAR_10->name, VAR_7->start);

 if (VAR_3 < VAR_2->send_progress)
  VAR_10->need_later_update = 0;
 else
  VAR_10->need_later_update = 1;

 VAR_9 = FUNC_11(VAR_2, VAR_10);
 if (VAR_9 < 0)
  VAR_8 = VAR_9;
 FUNC_9(VAR_2);

out:
 return VAR_8;
}
