
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct hfs_find_data {int entrylength; int entryoffset; int bnode; TYPE_1__* tree; int search_key; } ;
typedef int hfs_extent_rec ;
struct TYPE_4__ {int flags; int cached_extents; int cached_start; } ;
struct TYPE_3__ {scalar_t__ depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct hfs_find_data*) ;
 int FUNC_5 (struct hfs_find_data*,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_5, struct hfs_find_data *VAR_6)
{
 int VAR_7;

 FUNC_6(VAR_6->search_key, VAR_5->i_ino, FUNC_0(VAR_5)->cached_start,
     FUNC_1(VAR_5) ? VAR_2 : VAR_1);
 VAR_7 = FUNC_4(VAR_6);
 if (FUNC_0(VAR_5)->flags & VAR_4) {
  if (VAR_7 != -VAR_0)
   return VAR_7;

  VAR_7 = FUNC_2(VAR_6->tree, VAR_6->tree->depth + 1);
  if (VAR_7)
   return VAR_7;
  FUNC_5(VAR_6, FUNC_0(VAR_5)->cached_extents, sizeof(hfs_extent_rec));
  FUNC_0(VAR_5)->flags &= ~(VAR_3|VAR_4);
 } else {
  if (VAR_7)
   return VAR_7;
  FUNC_3(VAR_6->bnode, FUNC_0(VAR_5)->cached_extents, VAR_6->entryoffset, VAR_6->entrylength);
  FUNC_0(VAR_5)->flags &= ~VAR_3;
 }
 return 0;
}
