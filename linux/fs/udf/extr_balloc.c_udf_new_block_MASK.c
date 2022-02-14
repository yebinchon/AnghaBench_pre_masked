
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
typedef scalar_t__ udf_pblk_t ;
struct TYPE_3__ {int s_table; int s_bitmap; } ;
struct udf_part_map {int s_partition_flags; TYPE_1__ s_uspace; } ;
struct super_block {int s_blocksize; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {struct udf_part_map* s_partmaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct inode*,int ) ;
 scalar_t__ FUNC_2 (struct super_block*,int ,size_t,int ,int*) ;
 scalar_t__ FUNC_3 (struct super_block*,int ,size_t,int ,int*) ;

inline udf_pblk_t FUNC_4(struct super_block *VAR_3,
    struct inode *VAR_4,
    uint16_t VAR_5, uint32_t VAR_6, int *VAR_7)
{
 struct udf_part_map *VAR_8 = &FUNC_0(VAR_3)->s_partmaps[VAR_5];
 udf_pblk_t VAR_9;

 if (VAR_8->s_partition_flags & VAR_1)
  VAR_9 = FUNC_2(VAR_3,
          VAR_8->s_uspace.s_bitmap,
          VAR_5, VAR_6, VAR_7);
 else if (VAR_8->s_partition_flags & VAR_2)
  VAR_9 = FUNC_3(VAR_3,
         VAR_8->s_uspace.s_table,
         VAR_5, VAR_6, VAR_7);
 else {
  *VAR_7 = -VAR_0;
  return 0;
 }
 if (VAR_4 && VAR_9)
  FUNC_1(VAR_4, VAR_3->s_blocksize);
 return VAR_9;
}
