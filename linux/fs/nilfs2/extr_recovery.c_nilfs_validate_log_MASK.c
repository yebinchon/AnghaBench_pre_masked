
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef unsigned long u32 ;
struct the_nilfs {unsigned long ns_blocks_per_segment; scalar_t__ ns_blocksize_bits; } ;
struct nilfs_segment_summary {int ss_datasum; int ss_nblocks; int ss_seq; int ss_magic; } ;
struct buffer_head {int b_blocknr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct the_nilfs*,struct buffer_head*,unsigned long*,int,scalar_t__,int ,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct the_nilfs *VAR_6, u64 VAR_7,
         struct buffer_head *VAR_8,
         struct nilfs_segment_summary *VAR_9)
{
 unsigned long VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = VAR_4;
 if (FUNC_0(VAR_9->ss_magic) != VAR_0)
  goto out;

 VAR_12 = VAR_5;
 if (FUNC_1(VAR_9->ss_seq) != VAR_7)
  goto out;

 VAR_10 = FUNC_0(VAR_9->ss_nblocks);
 VAR_12 = VAR_2;
 if (FUNC_3(VAR_10 == 0 || VAR_10 > VAR_6->ns_blocks_per_segment))

  goto out;

 VAR_12 = VAR_3;
 if (FUNC_2(VAR_6, VAR_8, &VAR_11, sizeof(VAR_9->ss_datasum),
       ((u64)VAR_10 << VAR_6->ns_blocksize_bits),
       VAR_8->b_blocknr, VAR_10))
  goto out;

 VAR_12 = VAR_1;
 if (VAR_11 != FUNC_0(VAR_9->ss_datasum))
  goto out;
 VAR_12 = 0;
out:
 return VAR_12;
}
