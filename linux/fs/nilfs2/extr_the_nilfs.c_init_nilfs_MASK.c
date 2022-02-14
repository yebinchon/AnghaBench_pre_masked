
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_blocksize; int ns_sem; int ns_mount_state; int ns_next_generation; int ns_blocksize_bits; } ;
struct super_block {int s_blocksize; int s_blocksize_bits; int s_maxbytes; int s_bdev; } ;
struct nilfs_super_block {int s_state; int s_log_block_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct super_block*,struct nilfs_super_block*) ;
 int FUNC_6 (struct the_nilfs*,struct super_block*,int,struct nilfs_super_block**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct super_block*,int ,char*,...) ;
 int FUNC_9 (struct the_nilfs*) ;
 int FUNC_10 (struct the_nilfs*,struct nilfs_super_block*) ;
 int FUNC_11 (struct the_nilfs*,struct nilfs_super_block*) ;
 int FUNC_12 (struct super_block*,struct nilfs_super_block*,char*) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (struct super_block*,int) ;
 int FUNC_15 (struct super_block*,int) ;
 int FUNC_16 (struct the_nilfs*) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct the_nilfs *VAR_5, struct super_block *VAR_6, char *VAR_7)
{
 struct nilfs_super_block *VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_1(&VAR_5->ns_sem);

 VAR_9 = FUNC_14(VAR_6, VAR_4);
 if (!VAR_9) {
  FUNC_8(VAR_6, VAR_2, "unable to set blocksize");
  VAR_10 = -VAR_1;
  goto out;
 }
 VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_9, &VAR_8);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_12(VAR_6, VAR_8, VAR_7);
 if (VAR_10)
  goto failed_sbh;

 VAR_10 = FUNC_5(VAR_6, VAR_8);
 if (VAR_10)
  goto failed_sbh;

 VAR_9 = VAR_0 << FUNC_4(VAR_8->s_log_block_size);
 if (VAR_9 < VAR_4 ||
     VAR_9 > VAR_3) {
  FUNC_8(VAR_6, VAR_2,
     "couldn't mount because of unsupported filesystem blocksize %d",
     VAR_9);
  VAR_10 = -VAR_1;
  goto failed_sbh;
 }
 if (VAR_6->s_blocksize != VAR_9) {
  int VAR_11 = FUNC_0(VAR_6->s_bdev);

  if (VAR_9 < VAR_11) {
   FUNC_8(VAR_6, VAR_2,
      "blocksize %d too small for device (sector-size = %d)",
      VAR_9, VAR_11);
   VAR_10 = -VAR_1;
   goto failed_sbh;
  }
  FUNC_9(VAR_5);
  FUNC_15(VAR_6, VAR_9);

  VAR_10 = FUNC_6(VAR_5, VAR_6, VAR_9, &VAR_8);
  if (VAR_10)
   goto out;




 }
 VAR_5->ns_blocksize_bits = VAR_6->s_blocksize_bits;
 VAR_5->ns_blocksize = VAR_9;

 FUNC_2(&VAR_5->ns_next_generation,
    sizeof(VAR_5->ns_next_generation));

 VAR_10 = FUNC_10(VAR_5, VAR_8);
 if (VAR_10)
  goto failed_sbh;

 VAR_6->s_maxbytes = FUNC_7(VAR_6->s_blocksize_bits);

 VAR_5->ns_mount_state = FUNC_3(VAR_8->s_state);

 VAR_10 = FUNC_11(VAR_5, VAR_8);
 if (VAR_10)
  goto failed_sbh;

 VAR_10 = FUNC_13(VAR_6);
 if (VAR_10)
  goto failed_sbh;

 FUNC_16(VAR_5);
 VAR_10 = 0;
 out:
 FUNC_17(&VAR_5->ns_sem);
 return VAR_10;

 failed_sbh:
 FUNC_9(VAR_5);
 goto out;
}
