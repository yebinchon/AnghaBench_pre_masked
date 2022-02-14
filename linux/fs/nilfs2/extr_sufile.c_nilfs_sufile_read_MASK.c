
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {size_t s_blocksize; } ;
struct nilfs_sufile_info {scalar_t__ allocmin; scalar_t__ allocmax; int ncleansegs; } ;
struct nilfs_sufile_header {int sh_ncleansegs; } ;
struct nilfs_inode {int dummy; } ;
struct inode {int i_state; } ;
struct buffer_head {int b_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct nilfs_sufile_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 struct inode* FUNC_7 (struct super_block*,int *,int ) ;
 int FUNC_8 (struct inode*,int ,int) ;
 int FUNC_9 (struct inode*,size_t,int) ;
 int FUNC_10 (struct super_block*,int ,char*,size_t) ;
 int FUNC_11 (struct inode*,struct nilfs_inode*) ;
 int FUNC_12 (struct inode*,struct buffer_head**) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct inode*) ;

int FUNC_16(struct super_block *VAR_7, size_t VAR_8,
        struct nilfs_inode *VAR_9, struct inode **VAR_10)
{
 struct inode *VAR_11;
 struct nilfs_sufile_info *VAR_12;
 struct buffer_head *VAR_13;
 struct nilfs_sufile_header *VAR_14;
 void *VAR_15;
 int VAR_16;

 if (VAR_8 > VAR_7->s_blocksize) {
  FUNC_10(VAR_7, VAR_3,
     "too large segment usage size: %zu bytes", VAR_8);
  return -VAR_0;
 } else if (VAR_8 < VAR_5) {
  FUNC_10(VAR_7, VAR_3,
     "too small segment usage size: %zu bytes", VAR_8);
  return -VAR_0;
 }

 VAR_11 = FUNC_7(VAR_7, ((void*)0), VAR_6);
 if (FUNC_14(!VAR_11))
  return -VAR_1;
 if (!(VAR_11->i_state & VAR_2))
  goto out;

 VAR_16 = FUNC_8(VAR_11, VAR_4, sizeof(*VAR_12));
 if (VAR_16)
  goto failed;

 FUNC_9(VAR_11, VAR_8,
     sizeof(struct nilfs_sufile_header));

 VAR_16 = FUNC_11(VAR_11, VAR_9);
 if (VAR_16)
  goto failed;

 VAR_16 = FUNC_12(VAR_11, &VAR_13);
 if (VAR_16)
  goto failed;

 VAR_12 = FUNC_0(VAR_11);
 VAR_15 = FUNC_4(VAR_13->b_page);
 VAR_14 = VAR_15 + FUNC_1(VAR_13);
 VAR_12->ncleansegs = FUNC_6(VAR_14->sh_ncleansegs);
 FUNC_5(VAR_15);
 FUNC_2(VAR_13);

 VAR_12->allocmax = FUNC_13(VAR_11) - 1;
 VAR_12->allocmin = 0;

 FUNC_15(VAR_11);
 out:
 *VAR_10 = VAR_11;
 return 0;
 failed:
 FUNC_3(VAR_11);
 return VAR_16;
}
