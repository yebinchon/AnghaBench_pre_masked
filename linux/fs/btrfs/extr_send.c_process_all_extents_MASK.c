
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
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_5 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_6 (struct send_ctx*,struct btrfs_path*,struct btrfs_key*) ;

__attribute__((used)) static int FUNC_7(struct send_ctx *VAR_2)
{
 int VAR_3;
 struct btrfs_root *VAR_4;
 struct btrfs_path *VAR_5;
 struct btrfs_key VAR_6;
 struct btrfs_key VAR_7;
 struct extent_buffer *VAR_8;
 int VAR_9;

 VAR_4 = VAR_2->send_root;
 VAR_5 = FUNC_0();
 if (!VAR_5)
  return -VAR_1;

 VAR_6.objectid = VAR_2->cmp_key->objectid;
 VAR_6.type = VAR_0;
 VAR_6.offset = 0;
 VAR_3 = FUNC_5(((void*)0), VAR_4, &VAR_6, VAR_5, 0, 0);
 if (VAR_3 < 0)
  goto out;

 while (1) {
  VAR_8 = VAR_5->nodes[0];
  VAR_9 = VAR_5->slots[0];

  if (VAR_9 >= FUNC_2(VAR_8)) {
   VAR_3 = FUNC_4(VAR_4, VAR_5);
   if (VAR_3 < 0) {
    goto out;
   } else if (VAR_3 > 0) {
    VAR_3 = 0;
    break;
   }
   continue;
  }

  FUNC_3(VAR_8, &VAR_7, VAR_9);

  if (VAR_7.objectid != VAR_6.objectid ||
      VAR_7.type != VAR_6.type) {
   VAR_3 = 0;
   goto out;
  }

  VAR_3 = FUNC_6(VAR_2, VAR_5, &VAR_7);
  if (VAR_3 < 0)
   goto out;

  VAR_5->slots[0]++;
 }

out:
 FUNC_1(VAR_5);
 return VAR_3;
}
