
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_ctx {TYPE_1__* cmp_key; struct btrfs_root* send_root; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_5 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_6 (struct btrfs_root*,struct btrfs_path*,int ,struct send_ctx*) ;

__attribute__((used)) static int FUNC_7(struct send_ctx *VAR_3)
{
 int VAR_4;
 struct btrfs_root *VAR_5;
 struct btrfs_path *VAR_6;
 struct btrfs_key VAR_7;
 struct btrfs_key VAR_8;
 struct extent_buffer *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_0();
 if (!VAR_6)
  return -VAR_1;

 VAR_5 = VAR_3->send_root;

 VAR_7.objectid = VAR_3->cmp_key->objectid;
 VAR_7.type = VAR_0;
 VAR_7.offset = 0;
 VAR_4 = FUNC_5(((void*)0), VAR_5, &VAR_7, VAR_6, 0, 0);
 if (VAR_4 < 0)
  goto out;

 while (1) {
  VAR_9 = VAR_6->nodes[0];
  VAR_10 = VAR_6->slots[0];
  if (VAR_10 >= FUNC_2(VAR_9)) {
   VAR_4 = FUNC_4(VAR_5, VAR_6);
   if (VAR_4 < 0) {
    goto out;
   } else if (VAR_4 > 0) {
    VAR_4 = 0;
    break;
   }
   continue;
  }

  FUNC_3(VAR_9, &VAR_8, VAR_10);
  if (VAR_8.objectid != VAR_7.objectid ||
      VAR_8.type != VAR_7.type) {
   VAR_4 = 0;
   goto out;
  }

  VAR_4 = FUNC_6(VAR_5, VAR_6, VAR_2, VAR_3);
  if (VAR_4 < 0)
   goto out;

  VAR_6->slots[0]++;
 }

out:
 FUNC_1(VAR_6);
 return VAR_4;
}
