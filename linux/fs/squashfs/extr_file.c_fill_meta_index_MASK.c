
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long long u64 ;
struct squashfs_sb_info {int block_log; long long inode_table; } ;
struct meta_index {int offset; int entries; struct meta_entry* meta_entry; scalar_t__ inode_number; } ;
struct meta_entry {long long index_block; int offset; long long data_block; } ;
struct inode {TYPE_2__* i_sb; } ;
struct TYPE_4__ {struct squashfs_sb_info* s_fs_info; } ;
struct TYPE_3__ {long long block_list_start; int offset; long long start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (int) ;
 struct meta_index* FUNC_2 (struct inode*,int,int) ;
 int FUNC_3 (struct inode*) ;
 struct meta_index* FUNC_4 (struct inode*,int,int) ;
 long long FUNC_5 (TYPE_2__*,int,long long*,int*) ;
 int FUNC_6 (struct inode*,struct meta_index*) ;
 TYPE_1__* FUNC_7 (struct inode*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2, int VAR_3,
  u64 *VAR_4, int *VAR_5, u64 *VAR_6)
{
 struct squashfs_sb_info *VAR_7 = VAR_2->i_sb->s_fs_info;
 int VAR_8 = FUNC_1(FUNC_3(VAR_2) >> VAR_7->block_log);
 int VAR_9 = 0;
 struct meta_index *VAR_10;
 struct meta_entry *VAR_11;
 u64 VAR_12 = FUNC_7(VAR_2)->block_list_start;
 int VAR_13 = FUNC_7(VAR_2)->offset;
 u64 VAR_14 = FUNC_7(VAR_2)->start;
 int VAR_15, VAR_16;




 VAR_3 /= VAR_1 * VAR_8;

 while (VAR_9 < VAR_3) {
  VAR_10 = FUNC_4(VAR_2, VAR_9 + 1, VAR_3);

  if (VAR_10 == ((void*)0)) {
   VAR_10 = FUNC_2(VAR_2, VAR_9 + 1, VAR_8);
   if (VAR_10 == ((void*)0))
    goto all_done;
  } else {
   VAR_9 = VAR_3 < VAR_10->offset + VAR_10->entries ? VAR_3 :
    VAR_10->offset + VAR_10->entries - 1;
   VAR_11 = &VAR_10->meta_entry[VAR_9 - VAR_10->offset];
   VAR_12 = VAR_11->index_block +
    VAR_7->inode_table;
   VAR_13 = VAR_11->offset;
   VAR_14 = VAR_11->data_block;
   FUNC_0("get_meta_index: offset %d, meta->offset %d, "
    "meta->entries %d\n", VAR_9, VAR_10->offset,
    VAR_10->entries);
   FUNC_0("get_meta_index: index_block 0x%llx, offset 0x%x"
    " data_block 0x%llx\n", VAR_12,
    VAR_13, VAR_14);
  }






  for (VAR_16 = VAR_10->offset + VAR_10->entries; VAR_16 <= VAR_3 &&
    VAR_16 < VAR_10->offset + VAR_0; VAR_16++) {
   int VAR_17 = VAR_8 * VAR_1;
   long long VAR_18 = FUNC_5(VAR_2->i_sb, VAR_17,
     &VAR_12, &VAR_13);

   if (VAR_18 < 0) {
    if (VAR_10->entries == 0)




     VAR_10->inode_number = 0;
    VAR_15 = VAR_18;
    goto failed;
   }

   VAR_14 += VAR_18;
   VAR_11 = &VAR_10->meta_entry[VAR_16 - VAR_10->offset];
   VAR_11->index_block = VAR_12 -
    VAR_7->inode_table;
   VAR_11->offset = VAR_13;
   VAR_11->data_block = VAR_14;
   VAR_10->entries++;
   VAR_9++;
  }

  FUNC_0("get_meta_index: meta->offset %d, meta->entries %d\n",
    VAR_10->offset, VAR_10->entries);

  FUNC_6(VAR_2, VAR_10);
 }

all_done:
 *VAR_4 = VAR_12;
 *VAR_5 = VAR_13;
 *VAR_6 = VAR_14;




 return VAR_9 * VAR_1 * VAR_8;

failed:
 FUNC_6(VAR_2, VAR_10);
 return VAR_15;
}
