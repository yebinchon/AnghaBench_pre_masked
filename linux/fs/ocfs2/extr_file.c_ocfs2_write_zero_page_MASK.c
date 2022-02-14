
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct ocfs2_dinode {int i_ctime_nsec; int i_mtime_nsec; void* i_ctime; void* i_mtime; void* i_size; } ;
struct TYPE_3__ {int tv_sec; int tv_nsec; } ;
struct inode {int i_blkbits; int i_sb; TYPE_1__ i_mtime; TYPE_1__ i_ctime; int i_blocks; struct address_space* i_mapping; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct address_space {int dummy; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct page*,unsigned int,int ,int ) ;
 int FUNC_6 (struct page*,unsigned int,unsigned int) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int) ;
 TYPE_1__ FUNC_9 (struct inode*) ;
 struct page* FUNC_10 (struct address_space*,unsigned long,int ) ;
 unsigned int FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int *) ;
 int VAR_4 ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int *,struct buffer_head*) ;
 int FUNC_18 (int *,struct inode*,int) ;
 int * FUNC_19 (struct inode*,struct buffer_head*,int,int) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (unsigned long long,unsigned long long,unsigned long long,unsigned long,unsigned int,unsigned int) ;
 int FUNC_22 (struct page*) ;

__attribute__((used)) static int FUNC_23(struct inode *VAR_5, u64 VAR_6,
     u64 VAR_7, struct buffer_head *VAR_8)
{
 struct address_space *VAR_9 = VAR_5->i_mapping;
 struct page *VAR_10;
 unsigned long VAR_11 = VAR_6 >> VAR_2;
 handle_t *VAR_12;
 int VAR_13 = 0;
 unsigned VAR_14, VAR_15, VAR_16, VAR_17;
 struct ocfs2_dinode *VAR_18 = (struct ocfs2_dinode *)VAR_8->b_data;

 FUNC_0(VAR_6 >= VAR_7);
 FUNC_0(VAR_7 > (((u64)VAR_11 + 1) << VAR_2));
 FUNC_0(VAR_6 & (VAR_5->i_blkbits - 1));

 VAR_12 = FUNC_19(VAR_5, VAR_8,
            VAR_6,
            VAR_7 - VAR_6);
 if (FUNC_1(VAR_12)) {
  VAR_13 = FUNC_4(VAR_12);
  goto out;
 }

 VAR_10 = FUNC_10(VAR_9, VAR_11, VAR_1);
 if (!VAR_10) {
  VAR_13 = -VAR_0;
  FUNC_14(VAR_13);
  goto out_commit_trans;
 }


 VAR_14 = VAR_6 & (VAR_3 - 1);
 VAR_15 = VAR_7 & (VAR_3 - 1);
 if (!VAR_15)
  VAR_15 = VAR_3;

 FUNC_21(
   (unsigned long long)FUNC_2(VAR_5)->ip_blkno,
   (unsigned long long)VAR_6,
   (unsigned long long)VAR_7,
   VAR_11, VAR_14, VAR_15);


 for (VAR_16 = VAR_14; VAR_16 < VAR_15;
      VAR_16 = VAR_17) {
  VAR_17 = VAR_16 + FUNC_11(VAR_5);






  VAR_13 = FUNC_5(VAR_10, VAR_16 + 1, 0,
       VAR_4);
  if (VAR_13 < 0) {
   FUNC_14(VAR_13);
   goto out_unlock;
  }



  VAR_13 = FUNC_6(VAR_10, VAR_16 + 1,
      VAR_16 + 1);
  if (VAR_13 < 0)
   FUNC_14(VAR_13);
  else
   VAR_13 = 0;
 }






 FUNC_13(VAR_5, VAR_7);
 VAR_5->i_blocks = FUNC_16(VAR_5);
 VAR_18->i_size = FUNC_8((u64)FUNC_12(VAR_5));
 VAR_5->i_mtime = VAR_5->i_ctime = FUNC_9(VAR_5);
 VAR_18->i_mtime = VAR_18->i_ctime = FUNC_8(VAR_5->i_mtime.tv_sec);
 VAR_18->i_ctime_nsec = FUNC_7(VAR_5->i_mtime.tv_nsec);
 VAR_18->i_mtime_nsec = VAR_18->i_ctime_nsec;
 if (VAR_12) {
  FUNC_17(VAR_12, VAR_8);
  FUNC_18(VAR_12, VAR_5, 1);
 }

out_unlock:
 FUNC_22(VAR_10);
 FUNC_20(VAR_10);
out_commit_trans:
 if (VAR_12)
  FUNC_15(FUNC_3(VAR_5->i_sb), VAR_12);
out:
 return VAR_13;
}
