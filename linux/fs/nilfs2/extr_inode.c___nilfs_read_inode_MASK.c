
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct the_nilfs {int ns_dat; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_root {int ifile; } ;
struct nilfs_inode {int i_device_code; } ;
struct inode {TYPE_1__* i_mapping; int i_mode; int * i_op; int * i_fop; } ;
struct buffer_head {int dummy; } ;
struct TYPE_5__ {int mi_sem; } ;
struct TYPE_4__ {int * a_ops; } ;


 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,int ,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int ,unsigned long,struct buffer_head**) ;
 struct nilfs_inode* FUNC_13 (int ,unsigned long,struct buffer_head*) ;
 int FUNC_14 (int ,unsigned long,struct buffer_head*) ;
 int FUNC_15 (struct inode*,struct nilfs_inode*) ;
 int FUNC_16 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct super_block *VAR_8,
         struct nilfs_root *VAR_9, unsigned long VAR_10,
         struct inode *VAR_11)
{
 struct the_nilfs *VAR_12 = VAR_8->s_fs_info;
 struct buffer_head *VAR_13;
 struct nilfs_inode *VAR_14;
 int VAR_15;

 FUNC_5(&FUNC_0(VAR_12->ns_dat)->mi_sem);
 VAR_15 = FUNC_12(VAR_9->ifile, VAR_10, &VAR_13);
 if (FUNC_17(VAR_15))
  goto bad_inode;

 VAR_14 = FUNC_13(VAR_9->ifile, VAR_10, VAR_13);

 VAR_15 = FUNC_15(VAR_11, VAR_14);
 if (VAR_15)
  goto failed_unmap;

 if (FUNC_3(VAR_11->i_mode)) {
  VAR_11->i_op = &VAR_4;
  VAR_11->i_fop = &VAR_5;
  VAR_11->i_mapping->a_ops = &VAR_1;
 } else if (FUNC_1(VAR_11->i_mode)) {
  VAR_11->i_op = &VAR_2;
  VAR_11->i_fop = &VAR_3;
  VAR_11->i_mapping->a_ops = &VAR_1;
 } else if (FUNC_2(VAR_11->i_mode)) {
  VAR_11->i_op = &VAR_7;
  FUNC_8(VAR_11);
  VAR_11->i_mapping->a_ops = &VAR_1;
 } else {
  VAR_11->i_op = &VAR_6;
  FUNC_7(
   VAR_11, VAR_11->i_mode,
   FUNC_6(FUNC_9(VAR_14->i_device_code)));
 }
 FUNC_14(VAR_9->ifile, VAR_10, VAR_13);
 FUNC_4(VAR_13);
 FUNC_18(&FUNC_0(VAR_12->ns_dat)->mi_sem);
 FUNC_16(VAR_11);
 FUNC_11(VAR_11->i_mapping,
      FUNC_10(VAR_11->i_mapping, ~VAR_0));
 return 0;

 failed_unmap:
 FUNC_14(VAR_9->ifile, VAR_10, VAR_13);
 FUNC_4(VAR_13);

 bad_inode:
 FUNC_18(&FUNC_0(VAR_12->ns_dat)->mi_sem);
 return VAR_15;
}
