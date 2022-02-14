
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct waiting_dir_move {scalar_t__ orphanized; } ;
struct send_ctx {int parent_root; } ;
struct fs_path {int reversed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct send_ctx*,int ,int ,int *,int *,struct fs_path*) ;
 int FUNC_1 (struct fs_path*,struct fs_path*) ;
 struct fs_path* FUNC_2 () ;
 int FUNC_3 (struct fs_path*) ;
 int FUNC_4 (struct fs_path*) ;
 int FUNC_5 (struct fs_path*) ;
 int FUNC_6 (struct send_ctx*,int ,int ,struct fs_path*) ;
 int FUNC_7 (int ,int ,int *,int *,struct fs_path*) ;
 struct waiting_dir_move* FUNC_8 (struct send_ctx*,int ) ;
 scalar_t__ FUNC_9 (struct send_ctx*,int ) ;

__attribute__((used)) static int FUNC_10(struct send_ctx *VAR_2, u64 VAR_3, u64 VAR_4,
   struct fs_path *VAR_5)
{
 int VAR_6 = 0;
 struct fs_path *VAR_7 = ((void*)0);
 u64 VAR_8 = 0;
 u64 VAR_9 = 0;
 int VAR_10 = 0;

 VAR_7 = FUNC_2();
 if (!VAR_7) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_5->reversed = 1;
 FUNC_4(VAR_5);

 while (!VAR_10 && VAR_3 != VAR_0) {
  struct waiting_dir_move *VAR_11;

  FUNC_4(VAR_7);

  if (FUNC_9(VAR_2, VAR_3)) {
   VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_7);
   if (VAR_6 < 0)
    goto out;
   VAR_6 = FUNC_1(VAR_5, VAR_7);
   break;
  }

  VAR_11 = FUNC_8(VAR_2, VAR_3);
  if (VAR_11 && VAR_11->orphanized) {
   VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_7);
   VAR_10 = 1;
  } else if (VAR_11) {
   VAR_6 = FUNC_7(VAR_2->parent_root, VAR_3,
         &VAR_8, &VAR_9, VAR_7);
  } else {
   VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4,
       &VAR_8,
       &VAR_9, VAR_7);
   if (VAR_6)
    VAR_10 = 1;
  }

  if (VAR_6 < 0)
   goto out;

  VAR_6 = FUNC_1(VAR_5, VAR_7);
  if (VAR_6 < 0)
   goto out;

  VAR_3 = VAR_8;
  VAR_4 = VAR_9;
 }

out:
 FUNC_3(VAR_7);
 if (!VAR_6)
  FUNC_5(VAR_5);
 return VAR_6;
}
