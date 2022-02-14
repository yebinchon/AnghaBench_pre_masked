
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_17__ {TYPE_5__* ntfs_ino; TYPE_1__* mrec; TYPE_8__* attr; } ;
typedef TYPE_6__ ntfs_attr_search_ctx ;
struct TYPE_13__ {int flags; int value_length; int value_offset; } ;
struct TYPE_14__ {TYPE_2__ resident; } ;
struct TYPE_19__ {TYPE_3__ data; scalar_t__ flags; scalar_t__ non_resident; int length; } ;
struct TYPE_18__ {int parent_directory; } ;
struct TYPE_16__ {TYPE_4__* vol; } ;
struct TYPE_15__ {int sb; } ;
struct TYPE_12__ {int bytes_in_use; int link_count; } ;
typedef TYPE_7__ FILE_NAME_ATTR ;
typedef TYPE_8__ ATTR_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int ,int ,int *,int ,TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(ntfs_attr_search_ctx *VAR_5)
{
 int VAR_6, VAR_7;


 FUNC_4(VAR_5);


 VAR_6 = FUNC_1(VAR_5->mrec->link_count);


 while (!(VAR_7 = FUNC_3(VAR_0, ((void*)0), 0, 0, 0, ((void*)0), 0,
   VAR_5))) {
  FILE_NAME_ATTR *VAR_8;
  ATTR_RECORD *VAR_9 = VAR_5->attr;
  u8 *VAR_10, *VAR_11;

  VAR_6--;




  VAR_10 = (u8*)VAR_9 + FUNC_2(VAR_9->length);
  if (VAR_10 < (u8*)VAR_5->mrec || (u8*)VAR_10 > (u8*)VAR_5->mrec +
    FUNC_2(VAR_5->mrec->bytes_in_use)) {
err_corrupt_attr:
   FUNC_5(VAR_5->ntfs_ino->vol->sb, "Corrupt file name "
     "attribute. You should run chkdsk.");
   return -VAR_1;
  }
  if (VAR_9->non_resident) {
   FUNC_5(VAR_5->ntfs_ino->vol->sb, "Non-resident file "
     "name. You should run chkdsk.");
   return -VAR_1;
  }
  if (VAR_9->flags) {
   FUNC_5(VAR_5->ntfs_ino->vol->sb, "File name with "
     "invalid flags. You should run "
     "chkdsk.");
   return -VAR_1;
  }
  if (!(VAR_9->data.resident.flags & VAR_4)) {
   FUNC_5(VAR_5->ntfs_ino->vol->sb, "Unindexed file "
     "name. You should run chkdsk.");
   return -VAR_1;
  }
  VAR_8 = (FILE_NAME_ATTR*)((u8*)VAR_9 +
    FUNC_1(VAR_9->data.resident.value_offset));
  VAR_11 = (u8*)VAR_9 + FUNC_2(VAR_9->data.resident.value_length);
  if (VAR_11 < (u8*)VAR_9 || VAR_11 > VAR_10)
   goto err_corrupt_attr;

  if (FUNC_0(VAR_8->parent_directory) == VAR_3)
   return 1;
 }
 if (FUNC_6(VAR_7 != -VAR_2))
  return VAR_7;
 if (FUNC_6(VAR_6)) {
  FUNC_5(VAR_5->ntfs_ino->vol->sb, "Inode hard link count "
    "doesn't match number of name attributes. You "
    "should run chkdsk.");
  return -VAR_1;
 }
 return 0;
}
