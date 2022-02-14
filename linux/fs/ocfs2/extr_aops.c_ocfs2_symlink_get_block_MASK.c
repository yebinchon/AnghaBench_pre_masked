
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {int sb; } ;
struct TYPE_9__ {TYPE_1__* l_recs; } ;
struct TYPE_10__ {TYPE_2__ i_list; } ;
struct ocfs2_dinode {TYPE_3__ id2; int i_clusters; } ;
struct inode {TYPE_4__* i_sb; } ;
struct buffer_head {int b_size; scalar_t__ b_data; int b_page; } ;
typedef int sector_t ;
struct TYPE_12__ {scalar_t__ ip_blkno; } ;
struct TYPE_11__ {int s_blocksize_bits; } ;
struct TYPE_8__ {int e_blkno; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_1 (struct inode*) ;
 struct ocfs2_super* FUNC_2 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct buffer_head*,TYPE_4__*,int) ;
 int FUNC_11 (void*,scalar_t__,int) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (TYPE_4__*,int ) ;
 int FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*,struct buffer_head**) ;
 struct buffer_head* FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (unsigned long long,unsigned long long,struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_4, sector_t VAR_5,
       struct buffer_head *VAR_6, int VAR_7)
{
 int VAR_8 = -VAR_0;
 int VAR_9;
 struct ocfs2_dinode *VAR_10 = ((void*)0);
 struct buffer_head *VAR_11 = ((void*)0);
 struct buffer_head *VAR_12 = ((void*)0);
 struct ocfs2_super *VAR_13 = FUNC_2(VAR_4->i_sb);
 void *VAR_14;

 FUNC_20(
   (unsigned long long)FUNC_1(VAR_4)->ip_blkno,
   (unsigned long long)VAR_5, VAR_6, VAR_7);

 FUNC_0(FUNC_15(VAR_4));

 if ((VAR_5 << VAR_4->i_sb->s_blocksize_bits) > VAR_3 + 1) {
  FUNC_12(VAR_2, "block offset > PATH_MAX: %llu",
       (unsigned long long)VAR_5);
  goto bail;
 }

 VAR_9 = FUNC_17(VAR_4, &VAR_11);
 if (VAR_9 < 0) {
  FUNC_13(VAR_9);
  goto bail;
 }
 VAR_10 = (struct ocfs2_dinode *) VAR_11->b_data;

 if ((u64)VAR_5 >= FUNC_14(VAR_4->i_sb,
          FUNC_8(VAR_10->i_clusters))) {
  VAR_8 = -VAR_1;
  FUNC_12(VAR_2, "block offset is outside the allocated size: "
       "%llu\n", (unsigned long long)VAR_5);
  goto bail;
 }



 if (!FUNC_5(VAR_6) && FUNC_16(VAR_4)) {
  u64 VAR_15 = FUNC_9(VAR_10->id2.i_list.l_recs[0].e_blkno) +
       VAR_5;
  VAR_12 = FUNC_18(VAR_13->sb, VAR_15);
  if (!VAR_12) {
   VAR_8 = -VAR_1;
   FUNC_12(VAR_2, "couldn't getblock for symlink!\n");
   goto bail;
  }





  if (FUNC_4(VAR_12)
      && FUNC_16(VAR_4)) {
   VAR_14 = FUNC_6(VAR_6->b_page);
   if (!VAR_14) {
    FUNC_12(VAR_2, "couldn't kmap!\n");
    goto bail;
   }
   FUNC_11(VAR_14 + (VAR_6->b_size * VAR_5),
          VAR_12->b_data,
          VAR_6->b_size);
   FUNC_7(VAR_14);
   FUNC_19(VAR_6);
  }
  FUNC_3(VAR_12);
 }

 FUNC_10(VAR_6, VAR_4->i_sb,
        FUNC_9(VAR_10->id2.i_list.l_recs[0].e_blkno) + VAR_5);

 VAR_8 = 0;

bail:
 FUNC_3(VAR_11);

 return VAR_8;
}
