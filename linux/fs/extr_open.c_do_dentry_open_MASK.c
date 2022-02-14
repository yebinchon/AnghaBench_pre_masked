
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {TYPE_5__* i_mapping; int i_fop; int i_mode; } ;
struct file_operations {int (* open ) (struct inode*,struct file*) ;scalar_t__ write_iter; scalar_t__ write; scalar_t__ read_iter; scalar_t__ read; } ;
struct TYPE_9__ {int * dentry; int * mnt; } ;
struct file {int f_flags; int f_mode; struct inode* f_inode; TYPE_3__ f_path; struct file_operations const* f_op; TYPE_5__* f_mapping; int f_ra; int f_write_hint; int f_wb_err; } ;
struct TYPE_10__ {TYPE_2__* a_ops; TYPE_1__* host; } ;
struct TYPE_8__ {int direct_IO; } ;
struct TYPE_7__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_21 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 struct file_operations const* FUNC_10 (int ) ;
 int FUNC_11 (struct file_operations const*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct file*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct file*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct inode*,int ) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct file *VAR_22,
     struct inode *VAR_23,
     int (*VAR_24)(struct inode *, struct file *))
{
 static const struct file_operations VAR_25 = {};
 int VAR_26;

 FUNC_16(&VAR_22->f_path);
 VAR_22->f_inode = VAR_23;
 VAR_22->f_mapping = VAR_23->i_mapping;


 VAR_22->f_wb_err = FUNC_9(VAR_22->f_mapping);

 if (FUNC_22(VAR_22->f_flags & VAR_19)) {
  VAR_22->f_mode = VAR_9 | VAR_8;
  VAR_22->f_op = &VAR_25;
  return 0;
 }


 if (FUNC_22(VAR_22->f_flags & VAR_6 && !FUNC_1(VAR_23->i_mode))) {
  VAR_26 = -VAR_0;
  goto cleanup_file;
 }

 if (VAR_22->f_mode & VAR_13 && !FUNC_20(VAR_23->i_mode)) {
  VAR_26 = FUNC_12(VAR_23);
  if (FUNC_22(VAR_26))
   goto cleanup_file;
  VAR_26 = FUNC_5(VAR_22->f_path.mnt);
  if (FUNC_22(VAR_26)) {
   FUNC_18(VAR_23);
   goto cleanup_file;
  }
  VAR_22->f_mode |= VAR_14;
 }


 if (FUNC_1(VAR_23->i_mode) || FUNC_0(VAR_23->i_mode))
  VAR_22->f_mode |= VAR_3;

 VAR_22->f_op = FUNC_10(VAR_23->i_fop);
 if (FUNC_2(!VAR_22->f_op)) {
  VAR_26 = -VAR_2;
  goto cleanup_all;
 }

 VAR_26 = FUNC_19(VAR_22);
 if (VAR_26)
  goto cleanup_all;

 VAR_26 = FUNC_6(FUNC_15(VAR_22), VAR_22->f_flags);
 if (VAR_26)
  goto cleanup_all;


 VAR_22->f_mode |= VAR_7 | VAR_10 | VAR_11;
 if (!VAR_24)
  VAR_24 = VAR_22->f_op->open;
 if (VAR_24) {
  VAR_26 = VAR_24(VAR_23, VAR_22);
  if (VAR_26)
   goto cleanup_all;
 }
 VAR_22->f_mode |= VAR_8;
 if ((VAR_22->f_mode & (VAR_12 | VAR_13)) == VAR_12)
  FUNC_13(VAR_23);
 if ((VAR_22->f_mode & VAR_12) &&
      FUNC_14(VAR_22->f_op->read || VAR_22->f_op->read_iter))
  VAR_22->f_mode |= VAR_4;
 if ((VAR_22->f_mode & VAR_13) &&
      FUNC_14(VAR_22->f_op->write || VAR_22->f_op->write_iter))
  VAR_22->f_mode |= VAR_5;

 VAR_22->f_write_hint = VAR_21;
 VAR_22->f_flags &= ~(VAR_15 | VAR_17 | VAR_18 | VAR_20);

 FUNC_7(&VAR_22->f_ra, VAR_22->f_mapping->host->i_mapping);


 if (VAR_22->f_flags & VAR_16) {
  if (!VAR_22->f_mapping->a_ops || !VAR_22->f_mapping->a_ops->direct_IO)
   return -VAR_1;
 }





 if ((VAR_22->f_mode & VAR_13) && FUNC_8(VAR_23->i_mapping))
  FUNC_21(VAR_23, 0);

 return 0;

cleanup_all:
 if (FUNC_3(VAR_26 > 0))
  VAR_26 = -VAR_1;
 FUNC_11(VAR_22->f_op);
 if (VAR_22->f_mode & VAR_14) {
  FUNC_18(VAR_23);
  FUNC_4(VAR_22->f_path.mnt);
 }
cleanup_file:
 FUNC_17(&VAR_22->f_path);
 VAR_22->f_path.mnt = ((void*)0);
 VAR_22->f_path.dentry = ((void*)0);
 VAR_22->f_inode = ((void*)0);
 return VAR_26;
}
