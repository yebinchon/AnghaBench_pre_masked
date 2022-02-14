
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct super_block {int dummy; } ;
struct adfs_sb_info {int s_map_size; unsigned int s_ids_per_zone; int s_map2blk; } ;


 unsigned int VAR_0 ;
 struct adfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*,unsigned int,unsigned int,...) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct adfs_sb_info*,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (int,int ) ;

int FUNC_6(struct super_block *VAR_2, u32 VAR_3, unsigned int VAR_4)
{
 struct adfs_sb_info *VAR_5 = FUNC_0(VAR_2);
 unsigned int VAR_6, VAR_7;
 int VAR_8;





 if (VAR_3 == VAR_0)
  VAR_6 = VAR_5->s_map_size >> 1;
 else
  VAR_6 = VAR_3 / VAR_5->s_ids_per_zone;

 if (VAR_6 >= VAR_5->s_map_size)
  goto bad_fragment;


 VAR_7 = FUNC_5(VAR_4, -VAR_5->s_map2blk);

 FUNC_2(&VAR_1);
 VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_3, VAR_7);
 FUNC_3(&VAR_1);

 if (VAR_8 > 0) {
  unsigned int VAR_9;


  VAR_9 = VAR_4 - FUNC_5(VAR_7, VAR_5->s_map2blk);
  return VAR_9 + FUNC_5(VAR_8, VAR_5->s_map2blk);
 }

 FUNC_1(VAR_2, "fragment 0x%04x at offset %d not found in map",
     VAR_3, VAR_4);
 return 0;

bad_fragment:
 FUNC_1(VAR_2, "invalid fragment 0x%04x (zone = %d, max = %d)",
     VAR_3, VAR_6, VAR_5->s_map_size);
 return 0;
}
