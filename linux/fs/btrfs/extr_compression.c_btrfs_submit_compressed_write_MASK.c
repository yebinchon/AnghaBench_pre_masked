
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u64 ;
struct page {int * mapping; } ;
struct inode {int * i_mapping; int i_sb; } ;
struct compressed_bio {unsigned long start; unsigned long len; unsigned long compressed_len; unsigned long nr_pages; int pending_bios; int * orig_bio; struct page** compressed_pages; scalar_t__ mirror_num; struct inode* inode; scalar_t__ errors; } ;
struct btrfs_fs_info {TYPE_1__* fs_devices; } ;
struct block_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ bi_size; } ;
struct bio {unsigned int bi_opf; void* bi_status; void* bi_end_io; struct compressed_bio* bi_private; TYPE_2__ bi_iter; } ;
typedef void* blk_status_t ;
struct TYPE_6__ {int flags; } ;
struct TYPE_4__ {struct block_device* latest_bdev; } ;


 void* VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int FUNC_2 (unsigned long) ;
 unsigned long VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (int) ;
 unsigned long FUNC_4 (struct bio*,struct page*,unsigned long,int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,struct block_device*) ;
 struct bio* FUNC_7 (unsigned long) ;
 int FUNC_8 (struct page*,unsigned long,struct bio*,int ) ;
 void* FUNC_9 (struct btrfs_fs_info*,struct bio*,int ) ;
 void* FUNC_10 (struct inode*,struct bio*,unsigned long,int) ;
 int FUNC_11 (struct btrfs_fs_info*,char*,unsigned long,unsigned long,int) ;
 void* FUNC_12 (struct btrfs_fs_info*,struct bio*,int ,int) ;
 struct btrfs_fs_info* FUNC_13 (int ) ;
 int FUNC_14 (struct btrfs_fs_info*,unsigned long) ;
 int FUNC_15 () ;
 void* VAR_6 ;
 struct compressed_bio* FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;

blk_status_t FUNC_19(struct inode *VAR_7, u64 VAR_8,
     unsigned long VAR_9, u64 VAR_10,
     unsigned long VAR_11,
     struct page **VAR_12,
     unsigned long VAR_13,
     unsigned int VAR_14)
{
 struct btrfs_fs_info *VAR_15 = FUNC_13(VAR_7->i_sb);
 struct bio *VAR_16 = ((void*)0);
 struct compressed_bio *VAR_17;
 unsigned long VAR_18;
 int VAR_19 = 0;
 struct page *VAR_20;
 u64 VAR_21 = VAR_10;
 struct block_device *VAR_22;
 blk_status_t VAR_23;
 int VAR_24 = FUNC_0(VAR_7)->flags & VAR_1;

 FUNC_3(!FUNC_2(VAR_8));
 VAR_17 = FUNC_16(FUNC_14(VAR_15, VAR_11), VAR_3);
 if (!VAR_17)
  return VAR_0;
 FUNC_18(&VAR_17->pending_bios, 0);
 VAR_17->errors = 0;
 VAR_17->inode = VAR_7;
 VAR_17->start = VAR_8;
 VAR_17->len = VAR_9;
 VAR_17->mirror_num = 0;
 VAR_17->compressed_pages = VAR_12;
 VAR_17->compressed_len = VAR_11;
 VAR_17->orig_bio = ((void*)0);
 VAR_17->nr_pages = VAR_13;

 VAR_22 = VAR_15->fs_devices->latest_bdev;

 VAR_16 = FUNC_7(VAR_21);
 FUNC_6(VAR_16, VAR_22);
 VAR_16->bi_opf = VAR_5 | VAR_14;
 VAR_16->bi_private = VAR_17;
 VAR_16->bi_end_io = VAR_6;
 FUNC_18(&VAR_17->pending_bios, 1);


 VAR_18 = VAR_11;
 for (VAR_19 = 0; VAR_19 < VAR_17->nr_pages; VAR_19++) {
  int VAR_25 = 0;

  VAR_20 = VAR_12[VAR_19];
  VAR_20->mapping = VAR_7->i_mapping;
  if (VAR_16->bi_iter.bi_size)
   VAR_25 = FUNC_8(VAR_20, VAR_4, VAR_16,
         0);

  VAR_20->mapping = ((void*)0);
  if (VAR_25 || FUNC_4(VAR_16, VAR_20, VAR_4, 0) <
      VAR_4) {






   FUNC_17(&VAR_17->pending_bios);
   VAR_23 = FUNC_9(VAR_15, VAR_16,
        VAR_2);
   FUNC_1(VAR_23);

   if (!VAR_24) {
    VAR_23 = FUNC_10(VAR_7, VAR_16, VAR_8, 1);
    FUNC_1(VAR_23);
   }

   VAR_23 = FUNC_12(VAR_15, VAR_16, 0, 1);
   if (VAR_23) {
    VAR_16->bi_status = VAR_23;
    FUNC_5(VAR_16);
   }

   VAR_16 = FUNC_7(VAR_21);
   FUNC_6(VAR_16, VAR_22);
   VAR_16->bi_opf = VAR_5 | VAR_14;
   VAR_16->bi_private = VAR_17;
   VAR_16->bi_end_io = VAR_6;
   FUNC_4(VAR_16, VAR_20, VAR_4, 0);
  }
  if (VAR_18 < VAR_4) {
   FUNC_11(VAR_15,
     "bytes left %lu compress len %lu nr %lu",
          VAR_18, VAR_17->compressed_len, VAR_17->nr_pages);
  }
  VAR_18 -= VAR_4;
  VAR_21 += VAR_4;
  FUNC_15();
 }

 VAR_23 = FUNC_9(VAR_15, VAR_16, VAR_2);
 FUNC_1(VAR_23);

 if (!VAR_24) {
  VAR_23 = FUNC_10(VAR_7, VAR_16, VAR_8, 1);
  FUNC_1(VAR_23);
 }

 VAR_23 = FUNC_12(VAR_15, VAR_16, 0, 1);
 if (VAR_23) {
  VAR_16->bi_status = VAR_23;
  FUNC_5(VAR_16);
 }

 return 0;
}
