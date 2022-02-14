
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_super {int s_clustersize_bits; int sys_root_inode; } ;
struct ocfs2_group_desc {int bg_bits; int bg_blkno; int bg_next_group; } ;
struct TYPE_6__ {int i_total; } ;
struct TYPE_7__ {TYPE_2__ bitmap1; } ;
struct ocfs2_chain_list {struct ocfs2_chain_rec* cl_recs; int cl_next_free_rec; } ;
struct TYPE_5__ {struct ocfs2_chain_list i_chain; } ;
struct ocfs2_dinode {TYPE_3__ id1; TYPE_1__ id2; } ;
struct ocfs2_chain_rec {int c_blkno; } ;
struct inode {TYPE_4__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int namebuf ;
struct TYPE_8__ {int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ,int*) ;
 int FUNC_8 (struct ocfs2_super*,int,int,struct buffer_head**) ;
 int FUNC_9 (char*,int,int,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_3,
      u64 VAR_4,
      int VAR_5, int VAR_6,
      int *VAR_7,
      struct buffer_head **VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = 0;
 u64 VAR_12;
 char VAR_13[40];

 struct ocfs2_super *VAR_14 = FUNC_0(VAR_3->i_sb);
 struct buffer_head *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 struct ocfs2_chain_list *VAR_17;
 struct ocfs2_chain_rec *VAR_18;
 struct ocfs2_dinode *VAR_19;
 struct ocfs2_group_desc *VAR_20;

 FUNC_9(VAR_13, sizeof(VAR_13), VAR_5, VAR_6);
 VAR_9 = FUNC_7(VAR_14->sys_root_inode, VAR_13,
      FUNC_10(VAR_13), &VAR_12);
 if (VAR_9) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_9 = FUNC_8(VAR_14, VAR_12, 1, &VAR_15);
 if (VAR_9) {
  FUNC_6(VAR_9);
  goto out;
 }

 VAR_19 = (struct ocfs2_dinode *)VAR_15->b_data;
 VAR_17 = &(VAR_19->id2.i_chain);
 VAR_18 = &(VAR_17->cl_recs[0]);

 if (VAR_5 == VAR_2)
  VAR_11 = VAR_14->s_clustersize_bits -
     VAR_3->i_sb->s_blocksize_bits;



 if ((VAR_4 < FUNC_4(VAR_18->c_blkno)) ||
     (VAR_4 >= ((u64)FUNC_3(VAR_19->id1.bitmap1.i_total) <<
    VAR_11))) {
  VAR_9 = -VAR_0;
  goto out;
 }

 for (VAR_10 = 0; VAR_10 < FUNC_2(VAR_17->cl_next_free_rec); VAR_10++) {

  VAR_18 = &(VAR_17->cl_recs[VAR_10]);
  if (!VAR_18)
   continue;

  VAR_20 = ((void*)0);

  do {
   if (!VAR_20)
    VAR_12 = FUNC_4(VAR_18->c_blkno);
   else
    VAR_12 = FUNC_4(VAR_20->bg_next_group);

   if (VAR_16) {
    FUNC_1(VAR_16);
    VAR_16 = ((void*)0);
   }

   VAR_9 = FUNC_8(VAR_14, VAR_12, 1, &VAR_16);
   if (VAR_9) {
    FUNC_6(VAR_9);
    goto out;
   }

   VAR_20 = (struct ocfs2_group_desc *)VAR_16->b_data;

   if (VAR_4 < (FUNC_4(VAR_20->bg_blkno) +
      FUNC_2(VAR_20->bg_bits))) {

    *VAR_8 = VAR_16;
    *VAR_7 = (VAR_4 - VAR_12) >>
       VAR_11;
    FUNC_5(0, "find the victim group: #%llu, "
         "total_bits: %u, vict_bit: %u\n",
         VAR_12, FUNC_2(VAR_20->bg_bits),
         *VAR_7);
    goto out;
   }

  } while (FUNC_4(VAR_20->bg_next_group));
 }

 VAR_9 = -VAR_0;
out:
 FUNC_1(VAR_15);




 return VAR_9;
}
