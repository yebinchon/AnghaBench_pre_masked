
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct virtualAllocationTable20 {int lengthHeader; } ;
struct udf_sb_info {int s_last_block; TYPE_5__* s_vat_inode; struct udf_part_map* s_partmaps; } ;
struct TYPE_9__ {int s_start_offset; int s_num_entries; } ;
struct TYPE_10__ {TYPE_3__ s_virtual; } ;
struct udf_part_map {scalar_t__ s_partition_type; TYPE_4__ s_type_specific; } ;
struct TYPE_8__ {scalar_t__ i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; TYPE_2__ i_ext; } ;
struct super_block {int s_blocksize_bits; TYPE_1__* s_bdev; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
struct TYPE_11__ {int i_size; } ;
struct TYPE_7__ {int bd_inode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct udf_inode_info* FUNC_0 (TYPE_5__*) ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,unsigned long,unsigned long) ;
 struct buffer_head* FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (struct super_block*,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_4, int VAR_5, int VAR_6)
{
 struct udf_sb_info *VAR_7 = FUNC_1(VAR_4);
 struct udf_part_map *VAR_8 = &VAR_7->s_partmaps[VAR_5];
 struct buffer_head *VAR_9 = ((void*)0);
 struct udf_inode_info *VAR_10;
 uint32_t VAR_11;
 struct virtualAllocationTable20 *VAR_12;
 sector_t VAR_13 = FUNC_3(VAR_4->s_bdev->bd_inode) >>
     VAR_4->s_blocksize_bits;

 FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7->s_last_block);
 if (!VAR_7->s_vat_inode &&
     VAR_7->s_last_block != VAR_13 - 1) {
  FUNC_5("Failed to read VAT inode from the last recorded block (%lu), retrying with the last block of the device (%lu).\n",
     (unsigned long)VAR_7->s_last_block,
     (unsigned long)VAR_13 - 1);
  FUNC_8(VAR_4, VAR_5, VAR_6, VAR_13 - 1);
 }
 if (!VAR_7->s_vat_inode)
  return -VAR_0;

 if (VAR_8->s_partition_type == VAR_2) {
  VAR_8->s_type_specific.s_virtual.s_start_offset = 0;
  VAR_8->s_type_specific.s_virtual.s_num_entries =
   (VAR_7->s_vat_inode->i_size - 36) >> 2;
 } else if (VAR_8->s_partition_type == VAR_3) {
  VAR_10 = FUNC_0(VAR_7->s_vat_inode);
  if (VAR_10->i_alloc_type != VAR_1) {
   VAR_11 = FUNC_7(VAR_7->s_vat_inode, 0);
   VAR_9 = FUNC_6(VAR_4, VAR_11);
   if (!VAR_9)
    return -VAR_0;
   VAR_12 = (struct virtualAllocationTable20 *)VAR_9->b_data;
  } else {
   VAR_12 = (struct virtualAllocationTable20 *)
       VAR_10->i_ext.i_data;
  }

  VAR_8->s_type_specific.s_virtual.s_start_offset =
   FUNC_4(VAR_12->lengthHeader);
  VAR_8->s_type_specific.s_virtual.s_num_entries =
   (VAR_7->s_vat_inode->i_size -
    VAR_8->s_type_specific.s_virtual.
     s_start_offset) >> 2;
  FUNC_2(VAR_9);
 }
 return 0;
}
