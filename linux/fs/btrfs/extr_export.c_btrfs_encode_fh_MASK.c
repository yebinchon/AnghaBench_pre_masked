
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct inode {int i_generation; } ;
struct btrfs_fid {scalar_t__ root_objectid; scalar_t__ parent_root_objectid; int parent_gen; int parent_objectid; int gen; int objectid; } ;
struct TYPE_6__ {int objectid; } ;
struct TYPE_9__ {TYPE_3__* root; TYPE_1__ location; } ;
struct TYPE_7__ {scalar_t__ objectid; } ;
struct TYPE_8__ {TYPE_2__ root_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_7, u32 *VAR_8, int *VAR_9,
      struct inode *VAR_10)
{
 struct btrfs_fid *VAR_11 = (struct btrfs_fid *)VAR_8;
 int VAR_12 = *VAR_9;
 int VAR_13;

 if (VAR_10 && (VAR_12 < VAR_0)) {
  *VAR_9 = VAR_0;
  return VAR_6;
 } else if (VAR_12 < VAR_2) {
  *VAR_9 = VAR_2;
  return VAR_6;
 }

 VAR_12 = VAR_2;
 VAR_13 = VAR_3;

 VAR_11->objectid = FUNC_1(FUNC_0(VAR_7));
 VAR_11->root_objectid = FUNC_0(VAR_7)->root->root_key.objectid;
 VAR_11->gen = VAR_7->i_generation;

 if (VAR_10) {
  u64 VAR_14;

  VAR_11->parent_objectid = FUNC_0(VAR_10)->location.objectid;
  VAR_11->parent_gen = VAR_10->i_generation;
  VAR_14 = FUNC_0(VAR_10)->root->root_key.objectid;

  if (VAR_14 != VAR_11->root_objectid) {
   VAR_11->parent_root_objectid = VAR_14;
   VAR_12 = VAR_1;
   VAR_13 = VAR_5;
  } else {
   VAR_12 = VAR_0;
   VAR_13 = VAR_4;
  }
 }

 *VAR_9 = VAR_12;
 return VAR_13;
}
