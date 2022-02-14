
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct buffer_head {unsigned int b_blocknr; int (* b_end_io ) (struct buffer_head*,int) ;int b_bdev; struct buffer_head* b_this_page; } ;
typedef unsigned char sector_t ;
typedef unsigned char s64 ;
struct TYPE_13__ {unsigned char vcn; scalar_t__ length; } ;
typedef TYPE_3__ runlist_element ;
struct TYPE_14__ {unsigned char cluster_size_bits; unsigned char cluster_size_mask; TYPE_8__* sb; } ;
typedef TYPE_4__ ntfs_volume ;
struct TYPE_12__ {int lock; TYPE_3__* rl; } ;
struct TYPE_15__ {unsigned int allocated_size; unsigned char initialized_size; TYPE_2__ runlist; int type; int mft_no; int size_lock; TYPE_4__* vol; } ;
typedef TYPE_5__ ntfs_inode ;
typedef unsigned char loff_t ;
typedef unsigned char VCN ;
struct TYPE_16__ {unsigned int s_blocksize; unsigned char s_blocksize_bits; int s_bdev; } ;
struct TYPE_11__ {struct inode* host; } ;
typedef unsigned int LCN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 unsigned char VAR_7 ;
 int FUNC_3 (struct page*) ;
 int VAR_8 ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct page*,unsigned int,int ) ;
 int FUNC_10 (int *) ;
 unsigned char FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*,int) ;
 int FUNC_15 (TYPE_8__*,char*,int ,int ,unsigned long long,unsigned int,char*,int) ;
 int FUNC_16 (TYPE_5__*,unsigned char) ;
 unsigned int FUNC_17 (TYPE_3__*,unsigned char) ;
 struct buffer_head* FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (int ,int ,struct buffer_head*) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct page*,int,unsigned int) ;

__attribute__((used)) static int FUNC_30(struct page *VAR_9)
{
 loff_t VAR_10;
 VCN VAR_11;
 LCN VAR_12;
 s64 VAR_13;
 struct inode *VAR_14;
 ntfs_inode *VAR_15;
 ntfs_volume *VAR_16;
 runlist_element *VAR_17;
 struct buffer_head *VAR_18, *VAR_19, *VAR_20[VAR_6];
 sector_t VAR_21, VAR_22, VAR_23;
 unsigned long VAR_24;
 unsigned int VAR_25, VAR_26;
 int VAR_27, VAR_28;
 unsigned char VAR_29;

 VAR_14 = VAR_9->mapping->host;
 VAR_15 = FUNC_2(VAR_14);
 VAR_16 = VAR_15->vol;


 FUNC_0(!VAR_15->runlist.rl && !VAR_15->mft_no && !FUNC_1(VAR_15));

 VAR_25 = VAR_16->sb->s_blocksize;
 VAR_29 = VAR_16->sb->s_blocksize_bits;

 if (!FUNC_19(VAR_9)) {
  FUNC_9(VAR_9, VAR_25, 0);
  if (FUNC_26(!FUNC_19(VAR_9))) {
   FUNC_27(VAR_9);
   return -VAR_2;
  }
 }
 VAR_18 = VAR_19 = FUNC_18(VAR_9);
 FUNC_0(!VAR_18);
 VAR_21 = (s64)VAR_9->index << (VAR_7 - VAR_29);
 FUNC_20(&VAR_15->size_lock, VAR_24);
 VAR_22 = (VAR_15->allocated_size + VAR_25 - 1) >> VAR_29;
 VAR_13 = VAR_15->initialized_size;
 VAR_10 = FUNC_11(VAR_14);
 FUNC_21(&VAR_15->size_lock, VAR_24);
 if (FUNC_26(VAR_13 > VAR_10)) {

  VAR_13 = VAR_10;
 }
 VAR_23 = (VAR_13 + VAR_25 - 1) >> VAR_29;


 VAR_17 = ((void*)0);
 VAR_28 = VAR_27 = 0;
 do {
  int VAR_30 = 0;

  if (FUNC_26(FUNC_7(VAR_18)))
   continue;
  if (FUNC_26(FUNC_6(VAR_18))) {
   VAR_20[VAR_28++] = VAR_18;
   continue;
  }
  VAR_18->b_bdev = VAR_16->sb->s_bdev;

  if (VAR_21 < VAR_22) {
   bool VAR_31 = 0;


   VAR_11 = (VCN)VAR_21 << VAR_29 >>
     VAR_16->cluster_size_bits;
   VAR_26 = ((VCN)VAR_21 << VAR_29) &
     VAR_16->cluster_size_mask;
   if (!VAR_17) {
lock_retry_remap:
    FUNC_10(&VAR_15->runlist.lock);
    VAR_17 = VAR_15->runlist.rl;
   }
   if (FUNC_12(VAR_17 != ((void*)0))) {

    while (VAR_17->length && VAR_17[1].vcn <= VAR_11)
     VAR_17++;
    VAR_12 = FUNC_17(VAR_17, VAR_11);
   } else
    VAR_12 = VAR_5;

   if (VAR_12 >= 0) {

    VAR_18->b_blocknr = ((VAR_12 << VAR_16->cluster_size_bits)
      + VAR_26) >> VAR_29;
    FUNC_23(VAR_18);

    if (VAR_21 < VAR_23) {
     VAR_20[VAR_28++] = VAR_18;
     continue;
    }

    goto handle_zblock;
   }

   if (VAR_12 == VAR_4)
    goto handle_hole;

   if (!VAR_31 && VAR_12 == VAR_5) {
    VAR_31 = 1;




    FUNC_28(&VAR_15->runlist.lock);
    VAR_30 = FUNC_16(VAR_15, VAR_11);
    if (FUNC_12(!VAR_30))
     goto lock_retry_remap;
    VAR_17 = ((void*)0);
   } else if (!VAR_17)
    FUNC_28(&VAR_15->runlist.lock);





   if (VAR_30 == -VAR_1 || VAR_12 == VAR_3) {
    VAR_30 = 0;
    goto handle_hole;
   }

   if (!VAR_30)
    VAR_30 = -VAR_0;
   VAR_18->b_blocknr = -1;
   FUNC_4(VAR_9);
   FUNC_15(VAR_16->sb, "Failed to read from inode 0x%lx, "
     "attribute type 0x%x, vcn 0x%llx, "
     "offset 0x%x because its location on "
     "disk could not be determined%s "
     "(error code %i).", VAR_15->mft_no,
     VAR_15->type, (unsigned long long)VAR_11,
     VAR_26, VAR_31 ? " even after "
     "retrying" : "", VAR_30);
  }





handle_hole:
  VAR_18->b_blocknr = -1UL;
  FUNC_8(VAR_18);
handle_zblock:
  FUNC_29(VAR_9, VAR_27 * VAR_25, VAR_25);
  if (FUNC_12(!VAR_30))
   FUNC_24(VAR_18);
 } while (VAR_27++, VAR_21++, (VAR_18 = VAR_18->b_this_page) != VAR_19);


 if (VAR_17)
  FUNC_28(&VAR_15->runlist.lock);


 if (VAR_28) {
  struct buffer_head *VAR_32;


  for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++) {
   VAR_32 = VAR_20[VAR_27];
   FUNC_13(VAR_32);
   VAR_32->b_end_io = FUNC_14;
   FUNC_22(VAR_32);
  }

  for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++) {
   VAR_32 = VAR_20[VAR_27];
   if (FUNC_12(!FUNC_7(VAR_32)))
    FUNC_25(VAR_8, 0, VAR_32);
   else
    FUNC_14(VAR_32, 1);
  }
  return 0;
 }

 if (FUNC_12(!FUNC_3(VAR_9)))
  FUNC_5(VAR_9);
 else
  VAR_28 = -VAR_0;
 FUNC_27(VAR_9);
 return VAR_28;
}
