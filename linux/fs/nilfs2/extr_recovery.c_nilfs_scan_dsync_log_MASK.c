
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct the_nilfs {int ns_blocksize; int ns_bdev; } ;
struct nilfs_segment_summary {int ss_bytes; int ss_sumbytes; int ss_nfinfo; } ;
struct nilfs_recovery_block {int list; void* blkoff; void* vblocknr; scalar_t__ blocknr; void* ino; } ;
struct nilfs_finfo {int fi_ndatablk; int fi_nblocks; int fi_ino; } ;
struct nilfs_binfo_v {int bi_blkoff; int bi_vblocknr; } ;
struct list_head {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef void* ino_t ;
typedef int __le64 ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct buffer_head* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 struct nilfs_recovery_block* FUNC_3 (int,int ) ;
 unsigned int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *,struct list_head*) ;
 void* FUNC_8 (struct the_nilfs*,struct buffer_head**,unsigned int*,int) ;
 int FUNC_9 (struct the_nilfs*,struct buffer_head**,unsigned int*,int,unsigned long) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct the_nilfs *VAR_3, sector_t VAR_4,
    struct nilfs_segment_summary *VAR_5,
    struct list_head *VAR_6)
{
 struct buffer_head *VAR_7;
 unsigned int VAR_8;
 u32 VAR_9, VAR_10;
 sector_t VAR_11;
 ino_t VAR_12;
 int VAR_13 = -VAR_0;

 VAR_9 = FUNC_5(VAR_5->ss_nfinfo);
 if (!VAR_9)
  return 0;

 VAR_10 = FUNC_5(VAR_5->ss_sumbytes);
 VAR_11 = VAR_4 + FUNC_0(VAR_10, VAR_3->ns_blocksize);
 VAR_7 = FUNC_1(VAR_3->ns_bdev, VAR_4, VAR_3->ns_blocksize);
 if (FUNC_10(!VAR_7))
  goto out;

 VAR_8 = FUNC_4(VAR_5->ss_bytes);
 for (;;) {
  unsigned long VAR_14, VAR_15, VAR_16;
  struct nilfs_finfo *VAR_17;

  VAR_17 = FUNC_8(VAR_3, &VAR_7, &VAR_8,
      sizeof(*VAR_17));
  if (FUNC_10(!VAR_17))
   goto out;

  VAR_12 = FUNC_6(VAR_17->fi_ino);
  VAR_14 = FUNC_5(VAR_17->fi_nblocks);
  VAR_15 = FUNC_5(VAR_17->fi_ndatablk);
  VAR_16 = VAR_14 - VAR_15;

  while (VAR_15-- > 0) {
   struct nilfs_recovery_block *VAR_18;
   struct nilfs_binfo_v *VAR_19;

   VAR_19 = FUNC_8(VAR_3, &VAR_7, &VAR_8,
       sizeof(*VAR_19));
   if (FUNC_10(!VAR_19))
    goto out;

   VAR_18 = FUNC_3(sizeof(*VAR_18), VAR_2);
   if (FUNC_10(!VAR_18)) {
    VAR_13 = -VAR_1;
    goto out;
   }
   VAR_18->ino = VAR_12;
   VAR_18->blocknr = VAR_11++;
   VAR_18->vblocknr = FUNC_6(VAR_19->bi_vblocknr);
   VAR_18->blkoff = FUNC_6(VAR_19->bi_blkoff);

   FUNC_7(&VAR_18->list, VAR_6);
  }
  if (--VAR_9 == 0)
   break;
  VAR_11 += VAR_16;
  FUNC_9(VAR_3, &VAR_7, &VAR_8, sizeof(__le64),
     VAR_16);
  if (FUNC_10(!VAR_7))
   goto out;
 }
 VAR_13 = 0;
 out:
 FUNC_2(VAR_7);
 return VAR_13;
}
