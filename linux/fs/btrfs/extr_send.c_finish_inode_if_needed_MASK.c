
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct send_ctx {scalar_t__ send_progress; scalar_t__ cur_ino; scalar_t__ cur_inode_next_write_offset; scalar_t__ cur_inode_size; scalar_t__ cur_inode_last_extent; int cur_inode_gen; int cur_inode_mode; int parent_root; scalar_t__ cur_inode_new; int send_root; TYPE_1__* cmp_key; scalar_t__ cur_inode_deleted; scalar_t__ ignore_cur_inode; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct send_ctx*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*,int *,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_4 (struct send_ctx*,scalar_t__) ;
 int FUNC_5 (struct send_ctx*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct send_ctx*) ;
 int FUNC_7 (struct send_ctx*,int,int*,int*) ;
 int FUNC_8 (struct send_ctx*,scalar_t__,int ,scalar_t__) ;
 int FUNC_9 (struct send_ctx*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct send_ctx*,scalar_t__) ;
 int FUNC_11 (struct send_ctx*,scalar_t__,int ,scalar_t__) ;
 int FUNC_12 (struct send_ctx*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_13(struct send_ctx *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 u64 VAR_3;
 u64 VAR_4;
 u64 VAR_5;
 u64 VAR_6;
 u64 VAR_7;
 u64 VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 1;
 int VAR_12 = 0;
 int VAR_13 = 0;

 if (VAR_0->ignore_cur_inode)
  return 0;

 VAR_2 = FUNC_7(VAR_0, VAR_1, &VAR_12,
           &VAR_13);
 if (VAR_2 < 0)
  goto out;
 if (VAR_13 && !VAR_12)
  VAR_0->send_progress = VAR_0->cur_ino + 1;

 if (VAR_0->cur_ino == 0 || VAR_0->cur_inode_deleted)
  goto out;
 if (!VAR_1 && VAR_0->cmp_key->objectid == VAR_0->cur_ino)
  goto out;

 VAR_2 = FUNC_3(VAR_0->send_root, VAR_0->cur_ino, ((void*)0), ((void*)0),
   &VAR_3, &VAR_4, &VAR_5, ((void*)0));
 if (VAR_2 < 0)
  goto out;

 if (!VAR_0->parent_root || VAR_0->cur_inode_new) {
  VAR_10 = 1;
  if (!FUNC_0(VAR_0->cur_inode_mode))
   VAR_9 = 1;
  if (VAR_0->cur_inode_next_write_offset == VAR_0->cur_inode_size)
   VAR_11 = 0;
 } else {
  u64 VAR_14;

  VAR_2 = FUNC_3(VAR_0->parent_root, VAR_0->cur_ino,
    &VAR_14, ((void*)0), &VAR_6, &VAR_7,
    &VAR_8, ((void*)0));
  if (VAR_2 < 0)
   goto out;

  if (VAR_4 != VAR_7 || VAR_5 != VAR_8)
   VAR_10 = 1;
  if (!FUNC_0(VAR_0->cur_inode_mode) && VAR_3 != VAR_6)
   VAR_9 = 1;
  if ((VAR_14 == VAR_0->cur_inode_size) ||
      (VAR_0->cur_inode_size > VAR_14 &&
       VAR_0->cur_inode_next_write_offset == VAR_0->cur_inode_size))
   VAR_11 = 0;
 }

 if (FUNC_1(VAR_0->cur_inode_mode)) {
  if (FUNC_6(VAR_0)) {
   if (VAR_0->cur_inode_last_extent == (u64)-1 ||
       VAR_0->cur_inode_last_extent <
       VAR_0->cur_inode_size) {
    VAR_2 = FUNC_4(VAR_0, (u64)-1);
    if (VAR_2)
     goto out;
   }
   if (VAR_0->cur_inode_last_extent <
       VAR_0->cur_inode_size) {
    VAR_2 = FUNC_10(VAR_0, VAR_0->cur_inode_size);
    if (VAR_2)
     goto out;
   }
  }
  if (VAR_11) {
   VAR_2 = FUNC_11(VAR_0, VAR_0->cur_ino,
         VAR_0->cur_inode_gen,
         VAR_0->cur_inode_size);
   if (VAR_2 < 0)
    goto out;
  }
 }

 if (VAR_10) {
  VAR_2 = FUNC_9(VAR_0, VAR_0->cur_ino, VAR_0->cur_inode_gen,
    VAR_4, VAR_5);
  if (VAR_2 < 0)
   goto out;
 }
 if (VAR_9) {
  VAR_2 = FUNC_8(VAR_0, VAR_0->cur_ino, VAR_0->cur_inode_gen,
    VAR_3);
  if (VAR_2 < 0)
   goto out;
 }





 if (!FUNC_5(VAR_0, VAR_0->cur_ino)) {
  VAR_2 = FUNC_2(VAR_0);
  if (VAR_2)
   goto out;







  VAR_0->send_progress = VAR_0->cur_ino + 1;
  VAR_2 = FUNC_12(VAR_0, VAR_0->cur_ino, VAR_0->cur_inode_gen);
  if (VAR_2 < 0)
   goto out;
 }

out:
 return VAR_2;
}
