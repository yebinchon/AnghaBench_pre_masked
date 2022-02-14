
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_ino; } ;
struct hfsplus_inode_info {int extent_state; scalar_t__ cached_blocks; scalar_t__ cached_start; int cached_extents; int extents_lock; } ;
struct hfs_find_data {TYPE_2__* key; } ;
struct TYPE_3__ {int start_block; } ;
struct TYPE_4__ {TYPE_1__ ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hfs_find_data*,int ,int ,int ,int ) ;
 int FUNC_4 (struct inode*,struct hfs_find_data*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline int FUNC_8(struct hfs_find_data *VAR_4,
  struct inode *VAR_5, u32 VAR_6)
{
 struct hfsplus_inode_info *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;

 FUNC_2(!FUNC_7(&VAR_7->extents_lock));

 if (VAR_7->extent_state & VAR_0) {
  VAR_8 = FUNC_4(VAR_5, VAR_4);
  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_7->cached_extents, VAR_5->i_ino,
     VAR_6, FUNC_1(VAR_5) ?
      VAR_3 :
      VAR_2);
 if (!VAR_8) {
  VAR_7->cached_start = FUNC_5(VAR_4->key->ext.start_block);
  VAR_7->cached_blocks =
   FUNC_6(VAR_7->cached_extents);
 } else {
  VAR_7->cached_start = VAR_7->cached_blocks = 0;
  VAR_7->extent_state &= ~(VAR_0 | VAR_1);
 }
 return VAR_8;
}
