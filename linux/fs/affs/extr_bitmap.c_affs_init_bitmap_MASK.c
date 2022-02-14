
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int s_blocksize; int s_id; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct affs_sb_info {int s_bmap_bits; int s_bmap_count; int s_partition_size; int s_reserved; TYPE_2__* s_root_bh; struct affs_bm_info* s_bitmap; int * s_bmap_bh; int s_last_bmap; } ;
struct affs_bm_info {void* bm_key; void* bm_free; } ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {scalar_t__ b_data; } ;
struct TYPE_3__ {int bm_flag; } ;


 TYPE_1__* FUNC_0 (struct super_block*,TYPE_2__*) ;
 struct affs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct buffer_head* FUNC_2 (struct super_block*,void*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct super_block*,struct buffer_head*) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 struct affs_bm_info* FUNC_7 (int,int ) ;
 int FUNC_8 (struct buffer_head*) ;
 void* FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (char*,int,int,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,void*,int ) ;

int FUNC_14(struct super_block *VAR_4, int *VAR_5)
{
 struct affs_bm_info *VAR_6;
 struct buffer_head *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 __be32 *VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16 = 0;
 struct affs_sb_info *VAR_17 = FUNC_1(VAR_4);

 if (*VAR_5 & VAR_3)
  return 0;

 if (!FUNC_0(VAR_4, VAR_17->s_root_bh)->bm_flag) {
  FUNC_12("Bitmap invalid - mounting %s read only\n", VAR_4->s_id);
  *VAR_5 |= VAR_3;
  return 0;
 }

 VAR_17->s_last_bmap = ~0;
 VAR_17->s_bmap_bh = ((void*)0);
 VAR_17->s_bmap_bits = VAR_4->s_blocksize * 8 - 32;
 VAR_17->s_bmap_count = (VAR_17->s_partition_size - VAR_17->s_reserved +
     VAR_17->s_bmap_bits - 1) / VAR_17->s_bmap_bits;
 VAR_10 = VAR_17->s_bmap_count * sizeof(*VAR_6);
 VAR_6 = VAR_17->s_bitmap = FUNC_7(VAR_10, VAR_2);
 if (!VAR_17->s_bitmap) {
  FUNC_11("Bitmap allocation failed\n");
  return -VAR_1;
 }

 VAR_9 = (__be32 *)VAR_17->s_root_bh->b_data;
 VAR_11 = VAR_4->s_blocksize / 4 - 49;
 VAR_12 = VAR_11 + 25;

 for (VAR_15 = VAR_17->s_bmap_count; VAR_15 > 0; VAR_6++, VAR_15--) {
  FUNC_3(VAR_8);

  VAR_6->bm_key = FUNC_5(VAR_9[VAR_11]);
  VAR_8 = FUNC_2(VAR_4, VAR_6->bm_key);
  if (!VAR_8) {
   FUNC_11("Cannot read bitmap\n");
   VAR_16 = -VAR_0;
   goto out;
  }
  if (FUNC_4(VAR_4, VAR_8)) {
   FUNC_13("Bitmap %u invalid - mounting %s read only.\n",
    VAR_6->bm_key, VAR_4->s_id);
   *VAR_5 |= VAR_3;
   goto out;
  }
  FUNC_10("read bitmap block %d: %d\n", VAR_11, VAR_6->bm_key);
  VAR_6->bm_free = FUNC_9(VAR_8->b_data + 4, VAR_4->s_blocksize - 4);




  if (++VAR_11 < VAR_12 || VAR_15 == 1)
   continue;
  if (VAR_7)
   FUNC_3(VAR_7);
  VAR_7 = FUNC_2(VAR_4, FUNC_5(VAR_9[VAR_11]));
  if (!VAR_7) {
   FUNC_11("Cannot read bitmap extension\n");
   VAR_16 = -VAR_0;
   goto out;
  }
  VAR_9 = (__be32 *)VAR_7->b_data;
  VAR_11 = 0;
  VAR_12 = VAR_4->s_blocksize / 4 - 1;
 }

 VAR_13 = (VAR_17->s_partition_size - VAR_17->s_reserved) % VAR_17->s_bmap_bits;
 VAR_14 = ~(0xFFFFFFFFU << (VAR_13 & 31));
 FUNC_10("last word: %d %d %d\n", VAR_13, VAR_13 / 32 + 1, VAR_14);
 VAR_13 = VAR_13 / 32 + 1;

 if (VAR_14) {
  u32 VAR_18, VAR_19;


  VAR_18 = FUNC_5(((__be32 *)VAR_8->b_data)[VAR_13]);
  VAR_19 = VAR_18 & VAR_14;

   ((__be32 *)VAR_8->b_data)[VAR_13] = FUNC_6(VAR_19);
 }
 while (++VAR_13 < VAR_4->s_blocksize / 4)
  ((__be32 *)VAR_8->b_data)[VAR_13] = 0;
 ((__be32 *)VAR_8->b_data)[0] = 0;
 ((__be32 *)VAR_8->b_data)[0] = FUNC_6(-FUNC_4(VAR_4, VAR_8));
 FUNC_8(VAR_8);


 VAR_6--;
 VAR_6->bm_free = FUNC_9(VAR_8->b_data + 4, VAR_4->s_blocksize - 4);

out:
 FUNC_3(VAR_8);
 FUNC_3(VAR_7);
 return VAR_16;
}
