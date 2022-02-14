
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct hfs_find_data {int entryoffset; int bnode; TYPE_1__* search_key; } ;
struct TYPE_8__ {int fdCreator; int fdType; } ;
struct hfs_cat_file {TYPE_2__ UsrWds; } ;
typedef int ssize_t ;
struct TYPE_9__ {struct hfs_cat_file file; } ;
typedef TYPE_3__ hfs_cat_rec ;
typedef enum hfs_xattr_type { ____Placeholder_hfs_xattr_type } hfs_xattr_type ;
struct TYPE_11__ {int cat_key; } ;
struct TYPE_10__ {int cat_tree; } ;
struct TYPE_7__ {int cat; } ;


 int VAR_0 ;
 int VAR_1 ;

 TYPE_6__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_5__* FUNC_2 (int ) ;

 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__*,int ,int) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (struct hfs_find_data*) ;
 int FUNC_7 (int ,struct hfs_find_data*) ;
 int FUNC_8 (void*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_9(struct inode *VAR_2, enum hfs_xattr_type VAR_3,
         void *VAR_4, size_t VAR_5)
{
 struct hfs_find_data VAR_6;
 hfs_cat_rec VAR_7;
 struct hfs_cat_file *VAR_8;
 ssize_t VAR_9 = 0;

 if (!FUNC_3(VAR_2->i_mode) || FUNC_1(VAR_2))
  return -VAR_0;

 if (VAR_5) {
  VAR_9 = FUNC_7(FUNC_2(VAR_2->i_sb)->cat_tree, &VAR_6);
  if (VAR_9)
   return VAR_9;
  VAR_6.search_key->cat = FUNC_0(VAR_2)->cat_key;
  VAR_9 = FUNC_5(&VAR_6);
  if (VAR_9)
   goto out;
  FUNC_4(VAR_6.bnode, &VAR_7, VAR_6.entryoffset,
    sizeof(struct hfs_cat_file));
 }
 VAR_8 = &VAR_7.file;

 switch (VAR_3) {
 case 128:
  if (VAR_5 >= 4) {
   FUNC_8(VAR_4, &VAR_8->UsrWds.fdType, 4);
   VAR_9 = 4;
  } else
   VAR_9 = VAR_5 ? -VAR_1 : 4;
  break;

 case 129:
  if (VAR_5 >= 4) {
   FUNC_8(VAR_4, &VAR_8->UsrWds.fdCreator, 4);
   VAR_9 = 4;
  } else
   VAR_9 = VAR_5 ? -VAR_1 : 4;
  break;
 }

out:
 if (VAR_5)
  FUNC_6(&VAR_6);
 return VAR_9;
}
