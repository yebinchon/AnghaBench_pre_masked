
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sx_fdtmp; scalar_t__ sx_fdtarget; } ;
typedef TYPE_1__ xfs_swapext_t ;
struct TYPE_10__ {scalar_t__ i_mount; scalar_t__ i_ino; } ;
typedef TYPE_2__ xfs_inode_t ;
struct fd {TYPE_7__* file; } ;
struct TYPE_11__ {int f_mode; int f_flags; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (int ) ;
 struct fd FUNC_3 (int) ;
 int FUNC_4 (struct fd) ;
 int FUNC_5 (TYPE_7__*) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,TYPE_1__*) ;

int
FUNC_7(
 xfs_swapext_t *VAR_7)
{
 xfs_inode_t *VAR_8, *VAR_9;
 struct fd VAR_10, VAR_11;
 int VAR_12 = 0;


 VAR_10 = FUNC_3((int)VAR_7->sx_fdtarget);
 if (!VAR_10.file) {
  VAR_12 = -VAR_1;
  goto out;
 }

 if (!(VAR_10.file->f_mode & VAR_4) ||
     !(VAR_10.file->f_mode & VAR_3) ||
     (VAR_10.file->f_flags & VAR_5)) {
  VAR_12 = -VAR_0;
  goto out_put_file;
 }

 VAR_11 = FUNC_3((int)VAR_7->sx_fdtmp);
 if (!VAR_11.file) {
  VAR_12 = -VAR_1;
  goto out_put_file;
 }

 if (!(VAR_11.file->f_mode & VAR_4) ||
     !(VAR_11.file->f_mode & VAR_3) ||
     (VAR_11.file->f_flags & VAR_5)) {
  VAR_12 = -VAR_0;
  goto out_put_tmp_file;
 }

 if (FUNC_0(FUNC_5(VAR_10.file)) ||
     FUNC_0(FUNC_5(VAR_11.file))) {
  VAR_12 = -VAR_1;
  goto out_put_tmp_file;
 }






 if (VAR_10.file->f_op != &VAR_6 ||
     VAR_11.file->f_op != &VAR_6) {
  VAR_12 = -VAR_1;
  goto out_put_tmp_file;
 }

 VAR_8 = FUNC_2(FUNC_5(VAR_10.file));
 VAR_9 = FUNC_2(FUNC_5(VAR_11.file));

 if (VAR_8->i_mount != VAR_9->i_mount) {
  VAR_12 = -VAR_1;
  goto out_put_tmp_file;
 }

 if (VAR_8->i_ino == VAR_9->i_ino) {
  VAR_12 = -VAR_1;
  goto out_put_tmp_file;
 }

 if (FUNC_1(VAR_8->i_mount)) {
  VAR_12 = -VAR_2;
  goto out_put_tmp_file;
 }

 VAR_12 = FUNC_6(VAR_8, VAR_9, VAR_7);

 out_put_tmp_file:
 FUNC_4(VAR_11);
 out_put_file:
 FUNC_4(VAR_10);
 out:
 return VAR_12;
}
