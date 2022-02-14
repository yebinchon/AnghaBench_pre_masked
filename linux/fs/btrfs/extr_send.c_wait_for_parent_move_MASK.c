
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct send_ctx {scalar_t__ cur_ino; int deleted_refs; int new_refs; int cur_inode_gen; int parent_root; int send_root; } ;
struct recorded_ref {scalar_t__ dir; scalar_t__ dir_gen; } ;
struct fs_path {int start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct send_ctx*,scalar_t__,int ,scalar_t__,int *,int *,int const) ;
 struct fs_path* FUNC_1 () ;
 int FUNC_2 (struct fs_path*) ;
 int FUNC_3 (struct fs_path*) ;
 int FUNC_4 (struct fs_path*) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__*,scalar_t__*,struct fs_path*) ;
 int FUNC_6 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 int FUNC_7 (int ,scalar_t__,int ,scalar_t__,struct fs_path*) ;
 scalar_t__ FUNC_8 (struct send_ctx*,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct send_ctx *VAR_3,
    struct recorded_ref *VAR_4,
    const bool VAR_5)
{
 int VAR_6 = 0;
 u64 VAR_7 = VAR_4->dir;
 u64 VAR_8 = VAR_4->dir_gen;
 u64 VAR_9, VAR_10;
 struct fs_path *VAR_11 = ((void*)0);
 struct fs_path *VAR_12 = ((void*)0);
 int VAR_13, VAR_14;

 VAR_12 = FUNC_1();
 VAR_11 = FUNC_1();
 if (!VAR_12 || !VAR_11) {
  VAR_6 = -VAR_2;
  goto out;
 }
 while (VAR_7 > VAR_0) {
  u64 VAR_15;

  if (FUNC_8(VAR_3, VAR_7)) {
   VAR_6 = FUNC_7(VAR_3->parent_root,
       VAR_3->cur_ino, VAR_3->cur_inode_gen,
       VAR_7, VAR_11);
   if (VAR_6)
    break;
  }

  FUNC_4(VAR_11);
  FUNC_4(VAR_12);

  VAR_6 = FUNC_5(VAR_3->send_root, VAR_7, &VAR_10,
        &VAR_15, VAR_12);
  if (VAR_6 < 0)
   goto out;
  VAR_6 = FUNC_5(VAR_3->parent_root, VAR_7, &VAR_9,
        ((void*)0), VAR_11);
  if (VAR_6 < 0 && VAR_6 != -VAR_1) {
   goto out;
  } else if (VAR_6 == -VAR_1) {
   VAR_6 = 0;
   break;
  }

  VAR_13 = FUNC_3(VAR_11);
  VAR_14 = FUNC_3(VAR_12);
  if (VAR_7 > VAR_3->cur_ino &&
      (VAR_9 != VAR_10 || VAR_13 != VAR_14 ||
       FUNC_9(VAR_11->start, VAR_12->start, VAR_13))) {
   u64 VAR_16;

   VAR_6 = FUNC_6(VAR_3->parent_root, VAR_7, ((void*)0),
          &VAR_16, ((void*)0), ((void*)0), ((void*)0),
          ((void*)0));
   if (VAR_6 < 0)
    goto out;
   if (VAR_8 == VAR_16) {
    VAR_6 = 1;
    break;
   }
  }
  VAR_7 = VAR_10;
  VAR_8 = VAR_15;
 }

out:
 FUNC_2(VAR_11);
 FUNC_2(VAR_12);

 if (VAR_6 == 1) {
  VAR_6 = FUNC_0(VAR_3,
        VAR_3->cur_ino,
        VAR_3->cur_inode_gen,
        VAR_7,
        &VAR_3->new_refs,
        &VAR_3->deleted_refs,
        VAR_5);
  if (!VAR_6)
   VAR_6 = 1;
 }

 return VAR_6;
}
