
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {struct btrfs_root* send_root; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ offset; int type; int objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_3 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int ) ;
 int FUNC_5 (struct btrfs_path*,int *,struct btrfs_key*,int ,struct send_ctx*) ;
 int FUNC_6 (struct send_ctx*,int) ;

__attribute__((used)) static int FUNC_7(struct send_ctx *VAR_4)
{
 int VAR_5;
 struct btrfs_root *VAR_6 = VAR_4->send_root;
 struct btrfs_key VAR_7;
 struct btrfs_path *VAR_8;
 struct extent_buffer *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0();
 if (!VAR_8)
  return -VAR_3;

 VAR_7.objectid = VAR_1;
 VAR_7.type = VAR_2;
 VAR_7.offset = 0;

 VAR_5 = FUNC_4(VAR_6, &VAR_7, VAR_8, 1, 0);
 if (VAR_5 < 0)
  goto out;
 if (VAR_5)
  goto out_finish;

 while (1) {
  VAR_9 = VAR_8->nodes[0];
  VAR_10 = VAR_8->slots[0];
  FUNC_2(VAR_9, &VAR_7, VAR_10);

  VAR_5 = FUNC_5(VAR_8, ((void*)0), &VAR_7,
     VAR_0, VAR_4);
  if (VAR_5 < 0)
   goto out;

  VAR_5 = FUNC_3(VAR_6, VAR_8);
  if (VAR_5 < 0)
   goto out;
  if (VAR_5) {
   VAR_5 = 0;
   break;
  }
 }

out_finish:
 VAR_5 = FUNC_6(VAR_4, 1);

out:
 FUNC_1(VAR_8);
 return VAR_5;
}
