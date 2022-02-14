
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_suballoc_result {scalar_t__ sr_bit_offset; scalar_t__ sr_bits; } ;
struct ocfs2_group_desc {int bg_bits; int bg_blkno; scalar_t__ bg_free_bits_count; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {unsigned int ip_clusters; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct ocfs2_super* FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ocfs2_super*,struct buffer_head*,scalar_t__,unsigned int,struct ocfs2_suballoc_result*) ;
 unsigned int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct ocfs2_super*,scalar_t__) ;
 int FUNC_10 (unsigned long long,unsigned long long) ;
 int FUNC_11 (unsigned long long,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_1,
          struct buffer_head *VAR_2,
          u32 VAR_3, u32 VAR_4,
          u64 VAR_5,
          struct ocfs2_suballoc_result *VAR_6)
{
 int VAR_7 = -VAR_0;
 int VAR_8;
 u64 VAR_9;
 struct ocfs2_group_desc *VAR_10 = (struct ocfs2_group_desc *) VAR_2->b_data;
 struct ocfs2_super *VAR_11 = FUNC_2(VAR_1->i_sb);
 unsigned int VAR_12, VAR_13;

 FUNC_0(!FUNC_8(VAR_1));

 if (VAR_10->bg_free_bits_count) {
  VAR_12 = FUNC_3(VAR_10->bg_bits);







  VAR_13 = FUNC_6(VAR_1->i_sb,
         FUNC_4(VAR_10->bg_blkno));
  if ((VAR_13 + VAR_12) >
      FUNC_1(VAR_1)->ip_clusters) {
   VAR_12 = FUNC_1(VAR_1)->ip_clusters - VAR_13;
   FUNC_11(
    (unsigned long long)FUNC_4(VAR_10->bg_blkno),
    FUNC_3(VAR_10->bg_bits),
    FUNC_1(VAR_1)->ip_clusters, VAR_12);
  }

  VAR_8 = FUNC_5(VAR_11,
       VAR_2, VAR_3,
       VAR_12, VAR_6);
  if (VAR_8)
   return VAR_8;

  if (VAR_5) {
   VAR_9 = FUNC_7(VAR_1->i_sb,
         VAR_13 +
         VAR_6->sr_bit_offset +
         VAR_6->sr_bits);
   FUNC_10(
    (unsigned long long)VAR_9,
    (unsigned long long)VAR_5);
   if (VAR_9 > VAR_5)
    return -VAR_0;
  }





  if (VAR_4 <= VAR_6->sr_bits)
   VAR_7 = 0;
  else if (VAR_6->sr_bits) {




   FUNC_9(VAR_11, VAR_6->sr_bits);
  }
 }

 return VAR_7;
}
