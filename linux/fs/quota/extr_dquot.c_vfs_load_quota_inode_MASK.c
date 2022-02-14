
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int s_bdev; int * s_user_ns; TYPE_2__* dq_op; TYPE_1__* s_op; } ;
struct quota_info {int flags; int ** files; TYPE_4__* info; TYPE_3__** ops; } ;
struct quota_format_type {TYPE_3__* qf_ops; } ;
struct inode {int i_flags; int i_mode; struct super_block* i_sb; } ;
struct TYPE_8__ {int dqi_fmt_id; int dqi_flags; int dqi_dirty_list; struct quota_format_type* dqi_format; } ;
struct TYPE_7__ {int (* read_file_info ) (struct super_block*,int) ;int (* check_quota_file ) (struct super_block*,int) ;} ;
struct TYPE_6__ {int * get_projid; } ;
struct TYPE_5__ {int quota_read; int quota_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct super_block*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct super_block*,int,unsigned int) ;
 int FUNC_6 (unsigned int,int) ;
 struct quota_format_type* FUNC_7 (int) ;
 int * FUNC_8 (struct inode*) ;
 int VAR_13 ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct quota_format_type*) ;
 struct quota_info* FUNC_14 (struct super_block*) ;
 scalar_t__ FUNC_15 (struct super_block*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct super_block*,int) ;
 int FUNC_19 (struct super_block*,int) ;
 int FUNC_20 (struct super_block*) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_14, int VAR_15, int VAR_16,
 unsigned int VAR_17)
{
 struct quota_format_type *VAR_18 = FUNC_7(VAR_16);
 struct super_block *VAR_19 = VAR_14->i_sb;
 struct quota_info *VAR_20 = FUNC_14(VAR_19);
 int VAR_21;

 if (!VAR_18)
  return -VAR_8;
 if (!FUNC_2(VAR_14->i_mode)) {
  VAR_21 = -VAR_3;
  goto out_fmt;
 }
 if (FUNC_1(VAR_14)) {
  VAR_21 = -VAR_7;
  goto out_fmt;
 }
 if (!VAR_19->s_op->quota_write || !VAR_19->s_op->quota_read ||
     (VAR_15 == VAR_9 && VAR_19->dq_op->get_projid == ((void*)0))) {
  VAR_21 = -VAR_5;
  goto out_fmt;
 }

 if (VAR_19->s_user_ns != &VAR_13) {
  VAR_21 = -VAR_5;
  goto out_fmt;
 }

 if (!(VAR_17 & VAR_2)) {
  VAR_21 = -VAR_5;
  goto out_fmt;
 }
 if (FUNC_15(VAR_19, VAR_15)) {
  VAR_21 = -VAR_4;
  goto out_fmt;
 }

 if (!(VAR_20->flags & VAR_1)) {






  FUNC_20(VAR_19);
  FUNC_11(VAR_19->s_bdev);
 }

 if (!(VAR_20->flags & VAR_1)) {



  FUNC_9(VAR_14);
  VAR_14->i_flags |= VAR_10;
  FUNC_10(VAR_14);




  FUNC_3(VAR_14);
 }

 VAR_21 = -VAR_6;
 VAR_20->files[VAR_15] = FUNC_8(VAR_14);
 if (!VAR_20->files[VAR_15])
  goto out_file_flags;
 VAR_21 = -VAR_5;
 if (!VAR_18->qf_ops->check_quota_file(VAR_19, VAR_15))
  goto out_file_init;

 VAR_20->ops[VAR_15] = VAR_18->qf_ops;
 VAR_20->info[VAR_15].dqi_format = VAR_18;
 VAR_20->info[VAR_15].dqi_fmt_id = VAR_16;
 FUNC_0(&VAR_20->info[VAR_15].dqi_dirty_list);
 VAR_21 = VAR_20->ops[VAR_15]->read_file_info(VAR_19, VAR_15);
 if (VAR_21 < 0)
  goto out_file_init;
 if (VAR_20->flags & VAR_1) {
  FUNC_16(&VAR_11);
  VAR_20->info[VAR_15].dqi_flags |= VAR_0;
  FUNC_17(&VAR_11);
 }
 FUNC_16(&VAR_12);
 VAR_20->flags |= FUNC_6(VAR_17, VAR_15);
 FUNC_17(&VAR_12);

 VAR_21 = FUNC_4(VAR_19, VAR_15);
 if (VAR_21)
  FUNC_5(VAR_19, VAR_15, VAR_17);

 return VAR_21;
out_file_init:
 VAR_20->files[VAR_15] = ((void*)0);
 FUNC_12(VAR_14);
out_file_flags:
 FUNC_9(VAR_14);
 VAR_14->i_flags &= ~VAR_10;
 FUNC_10(VAR_14);
out_fmt:
 FUNC_13(VAR_18);

 return VAR_21;
}
