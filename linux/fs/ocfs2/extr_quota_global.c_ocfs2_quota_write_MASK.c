
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {size_t s_blocksize; size_t s_blocksize_bits; } ;
struct ocfs2_mem_dqinfo {int dqi_gqi_bh; struct inode* dqi_gqinode; } ;
struct mem_dqinfo {struct ocfs2_mem_dqinfo* dqi_priv; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; scalar_t__ b_data; } ;
typedef int ssize_t ;
typedef size_t sector_t ;
typedef size_t loff_t ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int * FUNC_6 () ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (scalar_t__,char const*,size_t) ;
 int FUNC_9 (scalar_t__,int ,size_t) ;
 int FUNC_10 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_11 (int) ;
 size_t FUNC_12 (struct super_block*,size_t) ;
 int FUNC_13 (struct inode*,size_t,int *,int *,int *) ;
 int FUNC_14 (int *,int ,struct buffer_head*,int) ;
 int FUNC_15 (int *,struct buffer_head*) ;
 int FUNC_16 (int *,struct inode*,int ) ;
 int FUNC_17 (struct inode*,int ,struct buffer_head**) ;
 int FUNC_18 (int ,struct buffer_head*) ;
 int FUNC_19 (struct inode*,int ,size_t) ;
 struct mem_dqinfo* FUNC_20 (struct super_block*,int) ;
 struct buffer_head* FUNC_21 (struct super_block*,int ) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (struct buffer_head*) ;

ssize_t FUNC_24(struct super_block *VAR_6, int VAR_7,
     const char *VAR_8, size_t VAR_9, loff_t VAR_10)
{
 struct mem_dqinfo *VAR_11 = FUNC_20(VAR_6, VAR_7);
 struct ocfs2_mem_dqinfo *VAR_12 = VAR_11->dqi_priv;
 struct inode *VAR_13 = VAR_12->dqi_gqinode;
 int VAR_14 = VAR_10 & (VAR_6->s_blocksize - 1);
 sector_t VAR_15 = VAR_10 >> VAR_6->s_blocksize_bits;
 int VAR_16 = 0, VAR_17 = 0, VAR_18;
 struct buffer_head *VAR_19 = ((void*)0);
 handle_t *VAR_20 = FUNC_6();
 u64 VAR_21, VAR_22;

 if (!VAR_20) {
  FUNC_10(VAR_2, "Quota write (off=%llu, len=%llu) cancelled "
       "because transaction was not started.\n",
       (unsigned long long)VAR_10, (unsigned long long)VAR_9);
  return -VAR_0;
 }
 if (VAR_9 > VAR_6->s_blocksize - VAR_5 - VAR_14) {
  FUNC_1(1);
  VAR_9 = VAR_6->s_blocksize - VAR_5 - VAR_14;
 }

 if (FUNC_4(VAR_13) < VAR_10 + VAR_9) {
  loff_t VAR_23 =
    FUNC_12(VAR_6, VAR_10 + VAR_9);


  VAR_16 = FUNC_19(VAR_13,
            VAR_12->dqi_gqi_bh,
            VAR_23);
  if (VAR_16 < 0)
   goto out;
  VAR_17 = 1;
 }
 VAR_16 = FUNC_13(VAR_13, VAR_15, &VAR_21, &VAR_22, ((void*)0));
 if (VAR_16) {
  FUNC_11(VAR_16);
  goto out;
 }

 if ((VAR_14 || VAR_9 < VAR_6->s_blocksize - VAR_5) &&
     !VAR_17) {
  VAR_16 = FUNC_17(VAR_13, VAR_21, &VAR_19);
  VAR_18 = VAR_4;
 } else {
  VAR_19 = FUNC_21(VAR_6, VAR_21);
  if (!VAR_19)
   VAR_16 = -VAR_1;
  VAR_18 = VAR_3;
 }
 if (VAR_16) {
  FUNC_11(VAR_16);
  goto out;
 }
 FUNC_7(VAR_19);
 if (VAR_17)
  FUNC_9(VAR_19->b_data, 0, VAR_6->s_blocksize);
 FUNC_8(VAR_19->b_data + VAR_14, VAR_8, VAR_9);
 FUNC_3(VAR_19->b_page);
 FUNC_22(VAR_19);
 FUNC_23(VAR_19);
 FUNC_18(FUNC_0(VAR_13), VAR_19);
 VAR_16 = FUNC_14(VAR_20, FUNC_0(VAR_13), VAR_19,
          VAR_18);
 if (VAR_16 < 0) {
  FUNC_2(VAR_19);
  goto out;
 }
 FUNC_15(VAR_20, VAR_19);
 FUNC_2(VAR_19);
out:
 if (VAR_16) {
  FUNC_11(VAR_16);
  return VAR_16;
 }
 FUNC_5(VAR_13);
 FUNC_16(VAR_20, VAR_13, VAR_12->dqi_gqi_bh);
 return VAR_9;
}
