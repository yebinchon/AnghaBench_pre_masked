
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct TYPE_3__ {int s_table; int s_bitmap; } ;
struct udf_part_map {int s_partition_flags; TYPE_1__ s_uspace; } ;
struct super_block {int s_blocksize_bits; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {struct udf_part_map* s_partmaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct super_block*,int ,size_t,int ,int ) ;
 int FUNC_3 (struct super_block*,int ,size_t,int ,int ) ;

inline int FUNC_4(struct super_block *VAR_2,
          struct inode *VAR_3,
          uint16_t VAR_4, uint32_t VAR_5,
          uint32_t VAR_6)
{
 struct udf_part_map *VAR_7 = &FUNC_0(VAR_2)->s_partmaps[VAR_4];
 int VAR_8;

 if (VAR_7->s_partition_flags & VAR_0)
  VAR_8 = FUNC_2(VAR_2,
             VAR_7->s_uspace.s_bitmap,
             VAR_4, VAR_5,
             VAR_6);
 else if (VAR_7->s_partition_flags & VAR_1)
  VAR_8 = FUNC_3(VAR_2,
            VAR_7->s_uspace.s_table,
            VAR_4, VAR_5,
            VAR_6);
 else
  return 0;

 if (VAR_3 && VAR_8 > 0)
  FUNC_1(VAR_3, VAR_8 << VAR_2->s_blocksize_bits);
 return VAR_8;
}
