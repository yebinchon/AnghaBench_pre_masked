
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct adfs_sb_info {unsigned int s_map_size; unsigned int s_ids_per_zone; int s_idlen; int s_map2blk; } ;
struct adfs_discrecord {int log2secsize; unsigned int log2bpmb; int zone_spare; } ;
struct adfs_discmap {unsigned int dm_startbit; unsigned int dm_endbit; int dm_startblk; int dm_bh; } ;


 unsigned int VAR_0 ;
 struct adfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct adfs_discmap* FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct super_block*,struct adfs_discmap*) ;
 unsigned int FUNC_3 (struct adfs_discrecord*) ;
 int FUNC_4 (struct super_block*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct adfs_discmap*) ;
 struct adfs_discmap* FUNC_7 (unsigned int,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct super_block*,unsigned int) ;
 unsigned int FUNC_10 (unsigned int,int ) ;

__attribute__((used)) static struct adfs_discmap *FUNC_11(struct super_block *VAR_4, struct adfs_discrecord *VAR_5)
{
 struct adfs_discmap *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;
 struct adfs_sb_info *VAR_12 = FUNC_0(VAR_4);

 VAR_9 = VAR_12->s_map_size;
 VAR_8 = (8 << VAR_5->log2secsize) - FUNC_8(VAR_5->zone_spare);
 VAR_7 = (VAR_9 >> 1) * VAR_8 -
       ((VAR_9 > 1) ? VAR_0 : 0);
 VAR_7 = FUNC_10(VAR_7, VAR_12->s_map2blk);

 VAR_12->s_ids_per_zone = VAR_8 / (VAR_12->s_idlen + 1);

 VAR_6 = FUNC_7(VAR_9, sizeof(*VAR_6), VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_4, "not enough memory");
  return FUNC_1(-VAR_2);
 }

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_7++) {
  VAR_6[VAR_11].dm_startbit = 0;
  VAR_6[VAR_11].dm_endbit = VAR_8;
  VAR_6[VAR_11].dm_startblk = VAR_11 * VAR_8 - VAR_0;
  VAR_6[VAR_11].dm_bh = FUNC_9(VAR_4, VAR_7);

  if (!VAR_6[VAR_11].dm_bh) {
   FUNC_4(VAR_4, "unable to read map");
   goto error_free;
  }
 }


 VAR_10 = VAR_11 - 1;
 VAR_6[0].dm_startblk = 0;
 VAR_6[0].dm_startbit = VAR_0;
 VAR_6[VAR_10].dm_endbit = (FUNC_3(VAR_5) >> VAR_5->log2bpmb) +
       (VAR_0 - VAR_10 * VAR_8);

 if (FUNC_2(VAR_4, VAR_6))
  return VAR_6;

 FUNC_4(VAR_4, "map corrupted");

error_free:
 while (--VAR_11 >= 0)
  FUNC_5(VAR_6[VAR_11].dm_bh);

 FUNC_6(VAR_6);
 return FUNC_1(-VAR_1);
}
