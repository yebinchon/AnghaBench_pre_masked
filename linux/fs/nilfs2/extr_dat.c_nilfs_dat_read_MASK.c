
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {size_t s_blocksize; } ;
struct nilfs_inode {int dummy; } ;
struct TYPE_2__ {int mi_sem; } ;
struct nilfs_dat_info {int shadow; int palloc_cache; TYPE_1__ mi; } ;
struct lock_class_key {int dummy; } ;
struct inode {int i_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nilfs_dat_info* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,struct lock_class_key*) ;
 struct inode* FUNC_3 (struct super_block*,int *,int ) ;
 int FUNC_4 (struct inode*,int ,int) ;
 int FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (struct super_block*,int ,char*,size_t) ;
 int FUNC_7 (struct inode*,size_t) ;
 int FUNC_8 (struct inode*,int *) ;
 int FUNC_9 (struct inode*,struct nilfs_inode*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct inode*) ;

int FUNC_12(struct super_block *VAR_7, size_t VAR_8,
     struct nilfs_inode *VAR_9, struct inode **VAR_10)
{
 static struct lock_class_key VAR_11;
 struct inode *VAR_12;
 struct nilfs_dat_info *VAR_13;
 int VAR_14;

 if (VAR_8 > VAR_7->s_blocksize) {
  FUNC_6(VAR_7, VAR_3, "too large DAT entry size: %zu bytes",
     VAR_8);
  return -VAR_0;
 } else if (VAR_8 < VAR_6) {
  FUNC_6(VAR_7, VAR_3, "too small DAT entry size: %zu bytes",
     VAR_8);
  return -VAR_0;
 }

 VAR_12 = FUNC_3(VAR_7, ((void*)0), VAR_4);
 if (FUNC_10(!VAR_12))
  return -VAR_1;
 if (!(VAR_12->i_state & VAR_2))
  goto out;

 VAR_14 = FUNC_4(VAR_12, VAR_5, sizeof(*VAR_13));
 if (VAR_14)
  goto failed;

 VAR_14 = FUNC_7(VAR_12, VAR_8);
 if (VAR_14)
  goto failed;

 VAR_13 = FUNC_0(VAR_12);
 FUNC_2(&VAR_13->mi.mi_sem, &VAR_11);
 FUNC_8(VAR_12, &VAR_13->palloc_cache);
 FUNC_5(VAR_12, &VAR_13->shadow);

 VAR_14 = FUNC_9(VAR_12, VAR_9);
 if (VAR_14)
  goto failed;

 FUNC_11(VAR_12);
 out:
 *VAR_10 = VAR_12;
 return 0;
 failed:
 FUNC_1(VAR_12);
 return VAR_14;
}
