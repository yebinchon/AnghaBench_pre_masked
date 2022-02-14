
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_dat; int ns_cpfile; int ns_sufile; int ns_sem; } ;
struct super_block {int s_time_gran; int * s_root; TYPE_1__* s_bdev; int s_bdi; int s_max_links; int * s_export_op; int * s_op; struct the_nilfs* s_fs_info; } ;
struct nilfs_root {int dummy; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int bd_bdi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct the_nilfs* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct the_nilfs*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct the_nilfs*,struct super_block*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct the_nilfs*,struct super_block*) ;
 int FUNC_7 (struct super_block*,scalar_t__,int,struct nilfs_root**) ;
 int FUNC_8 (struct super_block*,struct nilfs_root*) ;
 int FUNC_9 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_10 (struct super_block*,struct nilfs_root*,int **) ;
 scalar_t__ FUNC_11 (struct the_nilfs*) ;
 int FUNC_12 (struct super_block*,int ,char*,int,unsigned long long) ;
 int FUNC_13 (struct nilfs_root*) ;
 int FUNC_14 (struct super_block*,int) ;
 int VAR_4 ;
 int FUNC_15 (struct super_block*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int
FUNC_17(struct super_block *VAR_5, void *VAR_6, int VAR_7)
{
 struct the_nilfs *VAR_8;
 struct nilfs_root *VAR_9;
 __u64 VAR_10;
 int VAR_11;

 VAR_8 = FUNC_0(VAR_5);
 if (!VAR_8)
  return -VAR_0;

 VAR_5->s_fs_info = VAR_8;

 VAR_11 = FUNC_4(VAR_8, VAR_5, (char *)VAR_6);
 if (VAR_11)
  goto failed_nilfs;

 VAR_5->s_op = &VAR_4;
 VAR_5->s_export_op = &VAR_3;
 VAR_5->s_root = ((void*)0);
 VAR_5->s_time_gran = 1;
 VAR_5->s_max_links = VAR_2;

 VAR_5->s_bdi = FUNC_1(VAR_5->s_bdev->bd_bdi);

 VAR_11 = FUNC_6(VAR_8, VAR_5);
 if (VAR_11)
  goto failed_nilfs;

 VAR_10 = FUNC_11(VAR_8);
 VAR_11 = FUNC_7(VAR_5, VAR_10, 1, &VAR_9);
 if (VAR_11) {
  FUNC_12(VAR_5, VAR_1,
     "error %d while loading last checkpoint (checkpoint number=%llu)",
     VAR_11, (unsigned long long)VAR_10);
  goto failed_unload;
 }

 if (!FUNC_15(VAR_5)) {
  VAR_11 = FUNC_8(VAR_5, VAR_9);
  if (VAR_11)
   goto failed_checkpoint;
 }

 VAR_11 = FUNC_10(VAR_5, VAR_9, &VAR_5->s_root);
 if (VAR_11)
  goto failed_segctor;

 FUNC_13(VAR_9);

 if (!FUNC_15(VAR_5)) {
  FUNC_3(&VAR_8->ns_sem);
  FUNC_14(VAR_5, 1);
  FUNC_16(&VAR_8->ns_sem);
 }

 return 0;

 failed_segctor:
 FUNC_9(VAR_5);

 failed_checkpoint:
 FUNC_13(VAR_9);

 failed_unload:
 FUNC_5(VAR_8->ns_sufile);
 FUNC_5(VAR_8->ns_cpfile);
 FUNC_5(VAR_8->ns_dat);

 failed_nilfs:
 FUNC_2(VAR_8);
 return VAR_11;
}
