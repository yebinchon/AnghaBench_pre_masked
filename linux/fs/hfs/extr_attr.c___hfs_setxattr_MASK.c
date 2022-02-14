
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct hfs_find_data {int entryoffset; int bnode; TYPE_1__* search_key; } ;
struct TYPE_9__ {int fdCreator; int fdType; } ;
struct hfs_cat_file {TYPE_2__ UsrWds; } ;
struct TYPE_10__ {struct hfs_cat_file file; } ;
typedef TYPE_3__ hfs_cat_rec ;
typedef enum hfs_xattr_type { ____Placeholder_hfs_xattr_type } hfs_xattr_type ;
struct TYPE_12__ {int cat_key; } ;
struct TYPE_11__ {int cat_tree; } ;
struct TYPE_8__ {int cat; } ;


 int VAR_0 ;
 int VAR_1 ;

 TYPE_7__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_6__* FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__*,int ,int) ;
 int FUNC_5 (int ,TYPE_3__*,int ,int) ;
 int FUNC_6 (struct hfs_find_data*) ;
 int FUNC_7 (struct hfs_find_data*) ;
 int FUNC_8 (int ,struct hfs_find_data*) ;
 int FUNC_9 (int *,void const*,int) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_2, enum hfs_xattr_type VAR_3,
     const void *VAR_4, size_t VAR_5, int VAR_6)
{
 struct hfs_find_data VAR_7;
 hfs_cat_rec VAR_8;
 struct hfs_cat_file *VAR_9;
 int VAR_10;

 if (!FUNC_3(VAR_2->i_mode) || FUNC_1(VAR_2))
  return -VAR_0;

 VAR_10 = FUNC_8(FUNC_2(VAR_2->i_sb)->cat_tree, &VAR_7);
 if (VAR_10)
  return VAR_10;
 VAR_7.search_key->cat = FUNC_0(VAR_2)->cat_key;
 VAR_10 = FUNC_6(&VAR_7);
 if (VAR_10)
  goto out;
 FUNC_4(VAR_7.bnode, &VAR_8, VAR_7.entryoffset,
   sizeof(struct hfs_cat_file));
 VAR_9 = &VAR_8.file;

 switch (VAR_3) {
 case 128:
  if (VAR_5 == 4)
   FUNC_9(&VAR_9->UsrWds.fdType, VAR_4, 4);
  else
   VAR_10 = -VAR_1;
  break;

 case 129:
  if (VAR_5 == 4)
   FUNC_9(&VAR_9->UsrWds.fdCreator, VAR_4, 4);
  else
   VAR_10 = -VAR_1;
  break;
 }

 if (!VAR_10)
  FUNC_5(VAR_7.bnode, &VAR_8, VAR_7.entryoffset,
    sizeof(struct hfs_cat_file));
out:
 FUNC_7(&VAR_7);
 return VAR_10;
}
