
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct inode {int i_sb; int i_ino; } ;
struct dentry {int dummy; } ;
typedef int ntfs_inode ;
struct TYPE_11__ {TYPE_5__* attr; } ;
typedef TYPE_3__ ntfs_attr_search_ctx ;
struct TYPE_9__ {int value_length; int value_offset; } ;
struct TYPE_10__ {TYPE_1__ resident; } ;
struct TYPE_13__ {int non_resident; int length; TYPE_2__ data; } ;
struct TYPE_12__ {int parent_directory; } ;
typedef int MFT_RECORD ;
typedef TYPE_4__ FILE_NAME_ATTR ;
typedef TYPE_5__ ATTR_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_0 (int *) ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned long FUNC_3 (int ) ;
 int * FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,int *,int ,int ,int ,int *,int ,TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (int ,unsigned long) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static struct dentry *FUNC_18(struct dentry *VAR_4)
{
 struct inode *VAR_5 = FUNC_5(VAR_4);
 ntfs_inode *VAR_6 = FUNC_4(VAR_5);
 MFT_RECORD *VAR_7;
 ntfs_attr_search_ctx *VAR_8;
 ATTR_RECORD *VAR_9;
 FILE_NAME_ATTR *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 FUNC_13("Entering for inode 0x%lx.", VAR_5->i_ino);

 VAR_7 = FUNC_9(VAR_6);
 if (FUNC_2(VAR_7))
  return FUNC_0(VAR_7);

 VAR_8 = FUNC_10(VAR_6, VAR_7);
 if (FUNC_16(!VAR_8)) {
  FUNC_17(VAR_6);
  return FUNC_1(-VAR_3);
 }
try_next:
 VAR_12 = FUNC_11(VAR_0, ((void*)0), 0, VAR_1, 0, ((void*)0),
   0, VAR_8);
 if (FUNC_16(VAR_12)) {
  FUNC_12(VAR_8);
  FUNC_17(VAR_6);
  if (VAR_12 == -VAR_2)
   FUNC_14(VAR_5->i_sb, "Inode 0x%lx does not have a "
     "file name attribute.  Run chkdsk.",
     VAR_5->i_ino);
  return FUNC_1(VAR_12);
 }
 VAR_9 = VAR_8->attr;
 if (FUNC_16(VAR_9->non_resident))
  goto try_next;
 VAR_10 = (FILE_NAME_ATTR *)((u8 *)VAR_9 +
   FUNC_7(VAR_9->data.resident.value_offset));
 if (FUNC_16((u8 *)VAR_10 + FUNC_8(VAR_9->data.resident.value_length) >
   (u8*)VAR_9 + FUNC_8(VAR_9->length)))
  goto try_next;

 VAR_11 = FUNC_3(VAR_10->parent_directory);

 FUNC_12(VAR_8);
 FUNC_17(VAR_6);

 return FUNC_6(FUNC_15(VAR_5->i_sb, VAR_11));
}
