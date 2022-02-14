
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {scalar_t__ ns_blocksize_bits; scalar_t__ ns_nsegments; int ns_sufile; int ns_sem; int ns_sbsize; int ns_segctor_sem; int ns_blocks_per_segment; } ;
struct super_block {TYPE_1__* s_bdev; struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {void* s_nsegments; void* s_dev_size; int s_state; } ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct nilfs_super_block**) ;
 int FUNC_8 (struct nilfs_super_block*,struct nilfs_super_block*,int ) ;
 int FUNC_9 (struct super_block*,int ) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct super_block*,scalar_t__) ;
 struct nilfs_super_block** FUNC_12 (struct super_block*,int ) ;
 int FUNC_13 (struct nilfs_super_block*,struct the_nilfs*) ;
 int FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int ,int ,scalar_t__) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct super_block *VAR_4, __u64 VAR_5)
{
 struct the_nilfs *VAR_6 = VAR_4->s_fs_info;
 struct nilfs_super_block **VAR_7;
 __u64 VAR_8, VAR_9;
 loff_t VAR_10;
 int VAR_11;

 VAR_11 = -VAR_1;
 VAR_8 = FUNC_5(VAR_4->s_bdev->bd_inode);
 if (VAR_5 > VAR_8)
  goto out;






 FUNC_4(&VAR_6->ns_segctor_sem);

 VAR_10 = FUNC_0(VAR_5);
 VAR_9 = VAR_10 >> VAR_6->ns_blocksize_bits;
 FUNC_3(VAR_9, VAR_6->ns_blocks_per_segment);

 VAR_11 = FUNC_14(VAR_6->ns_sufile, VAR_9);
 FUNC_16(&VAR_6->ns_segctor_sem);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = FUNC_10(VAR_4);
 if (VAR_11 < 0)
  goto out;

 FUNC_4(&VAR_6->ns_sem);
 FUNC_11(VAR_4, VAR_10);
 VAR_11 = -VAR_0;
 VAR_7 = FUNC_12(VAR_4, 0);
 if (FUNC_7(VAR_7)) {
  FUNC_13(VAR_7[0], VAR_6);





  VAR_7[0]->s_state = FUNC_1(FUNC_6(VAR_7[0]->s_state) &
           ~VAR_2);
  VAR_7[0]->s_dev_size = FUNC_2(VAR_5);
  VAR_7[0]->s_nsegments = FUNC_2(VAR_6->ns_nsegments);
  if (VAR_7[1])
   FUNC_8(VAR_7[1], VAR_7[0], VAR_6->ns_sbsize);
  VAR_11 = FUNC_9(VAR_4, VAR_3);
 }
 FUNC_16(&VAR_6->ns_sem);







 if (!VAR_11)
  FUNC_15(VAR_6->ns_sufile, 0, VAR_9 - 1);
out:
 return VAR_11;
}
