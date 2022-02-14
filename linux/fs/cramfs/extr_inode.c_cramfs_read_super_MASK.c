
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_context {int sb_flags; } ;
struct TYPE_4__ {scalar_t__ files; scalar_t__ blocks; } ;
struct TYPE_3__ {int mode; int offset; } ;
struct cramfs_super {scalar_t__ magic; int flags; int size; TYPE_2__ fsid; TYPE_1__ root; } ;
struct cramfs_sb_info {int size; scalar_t__ magic; int flags; scalar_t__ files; scalar_t__ blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct cramfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct super_block*,int,int) ;
 int FUNC_3 (struct fs_context*,char*,...) ;
 int FUNC_4 (struct fs_context*,char*) ;
 int FUNC_5 (struct cramfs_super*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_9, struct fs_context *VAR_10,
        struct cramfs_super *VAR_11)
{
 struct cramfs_sb_info *VAR_12 = FUNC_0(VAR_9);
 unsigned long VAR_13;
 bool VAR_14 = VAR_10->sb_flags & VAR_7;


 VAR_12->size = VAR_6;


 FUNC_6(&VAR_8);
 FUNC_5(VAR_11, FUNC_2(VAR_9, 0, sizeof(*VAR_11)), sizeof(*VAR_11));
 FUNC_7(&VAR_8);


 if (VAR_11->magic != VAR_2) {

  if (VAR_11->magic == VAR_3) {
   if (!VAR_14)
    FUNC_3(VAR_10, "cramfs: wrong endianness");
   return -VAR_5;
  }


  FUNC_6(&VAR_8);
  FUNC_5(VAR_11,
         FUNC_2(VAR_9, 512, sizeof(*VAR_11)),
         sizeof(*VAR_11));
  FUNC_7(&VAR_8);
  if (VAR_11->magic != VAR_2) {
   if (VAR_11->magic == VAR_3 && !VAR_14)
    FUNC_3(VAR_10, "cramfs: wrong endianness");
   else if (!VAR_14)
    FUNC_3(VAR_10, "cramfs: wrong magic");
   return -VAR_5;
  }
 }


 if (VAR_11->flags & ~VAR_4) {
  FUNC_3(VAR_10, "cramfs: unsupported filesystem features");
  return -VAR_5;
 }


 if (!FUNC_1(VAR_11->root.mode)) {
  FUNC_3(VAR_10, "cramfs: root is not a directory");
  return -VAR_5;
 }

 VAR_11->root.mode |= 0555;

 VAR_13 = VAR_11->root.offset << 2;
 if (VAR_11->flags & VAR_0) {
  VAR_12->size = VAR_11->size;
  VAR_12->blocks = VAR_11->fsid.blocks;
  VAR_12->files = VAR_11->fsid.files;
 } else {
  VAR_12->size = 1<<28;
  VAR_12->blocks = 0;
  VAR_12->files = 0;
 }
 VAR_12->magic = VAR_11->magic;
 VAR_12->flags = VAR_11->flags;
 if (VAR_13 == 0)
  FUNC_4(VAR_10, "cramfs: empty filesystem");
 else if (!(VAR_11->flags & VAR_1) &&
   ((VAR_13 != sizeof(struct cramfs_super)) &&
    (VAR_13 != 512 + sizeof(struct cramfs_super))))
 {
  FUNC_3(VAR_10, "cramfs: bad root offset %lu", VAR_13);
  return -VAR_5;
 }

 return 0;
}
