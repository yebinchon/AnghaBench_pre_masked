
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_ctx {int clone_roots_cnt; TYPE_1__* clone_roots; struct btrfs_root* parent_root; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (struct btrfs_root*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct send_ctx *VAR_1)
{
 struct btrfs_root *VAR_2 = VAR_1->parent_root;
 int VAR_3;
 int VAR_4;

 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3)
   return VAR_3;
  FUNC_1(VAR_2, VAR_0, 0, VAR_0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->clone_roots_cnt; VAR_4++) {
  VAR_2 = VAR_1->clone_roots[VAR_4].root;
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3)
   return VAR_3;
  FUNC_1(VAR_2, VAR_0, 0, VAR_0);
 }

 return 0;
}
