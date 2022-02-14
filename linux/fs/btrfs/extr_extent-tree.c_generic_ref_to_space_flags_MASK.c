
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ root; } ;
struct btrfs_ref {scalar_t__ type; TYPE_1__ tree_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static u64 FUNC_0(struct btrfs_ref *VAR_5)
{
 if (VAR_5->type == VAR_4) {
  if (VAR_5->tree_ref.root == VAR_3)
   return VAR_2;
  else
   return VAR_1;
 }
 return VAR_0;
}
