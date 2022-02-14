
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct hfsplus_inode_info {int extent_state; int flags; int cached_extents; int cached_start; int extents_lock; } ;
struct hfs_find_data {int entrylength; int entryoffset; int bnode; TYPE_1__* tree; int search_key; } ;
typedef int hfsplus_extent_rec ;
struct TYPE_2__ {scalar_t__ depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct hfs_find_data*,int ) ;
 int FUNC_6 (struct hfs_find_data*,int ,int) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_7,
  struct hfs_find_data *VAR_8)
{
 struct hfsplus_inode_info *VAR_9 = FUNC_0(VAR_7);
 int VAR_10;

 FUNC_2(!FUNC_8(&VAR_9->extents_lock));

 FUNC_7(VAR_8->search_key, VAR_7->i_ino, VAR_9->cached_start,
         FUNC_1(VAR_7) ?
    VAR_5 : VAR_4);

 VAR_10 = FUNC_5(VAR_8, VAR_6);
 if (VAR_9->extent_state & VAR_2) {
  if (VAR_10 != -VAR_0)
   return VAR_10;

  VAR_10 = FUNC_3(VAR_8->tree, VAR_8->tree->depth + 1);
  if (VAR_10)
   return VAR_10;
  FUNC_6(VAR_8, VAR_9->cached_extents,
    sizeof(hfsplus_extent_rec));
  VAR_9->extent_state &= ~(VAR_1 | VAR_2);
 } else {
  if (VAR_10)
   return VAR_10;
  FUNC_4(VAR_8->bnode, VAR_9->cached_extents,
    VAR_8->entryoffset, VAR_8->entrylength);
  VAR_9->extent_state &= ~VAR_1;
 }







 FUNC_9(VAR_3, &VAR_9->flags);

 return 0;
}
