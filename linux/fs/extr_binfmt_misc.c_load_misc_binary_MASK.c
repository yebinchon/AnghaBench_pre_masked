
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct linux_binprm {int interp_flags; int interp_data; int buf; struct file* file; int argc; int interp; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_3__ {int flags; int dentry; int interpreter; int interp_file; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int ,struct linux_binprm*) ;
 TYPE_1__* FUNC_4 (struct linux_binprm*) ;
 int FUNC_5 (int,int *,struct linux_binprm*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int,struct file*) ;
 struct file* FUNC_10 (int ) ;
 int FUNC_11 (struct file*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct file*,int ,int ,int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int ,int ) ;
 struct file* FUNC_16 (int ) ;
 int FUNC_17 (struct linux_binprm*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct linux_binprm*) ;
 int FUNC_21 (struct linux_binprm*) ;
 int FUNC_22 (struct linux_binprm*,struct file*) ;

__attribute__((used)) static int FUNC_23(struct linux_binprm *VAR_11)
{
 Node *VAR_12;
 struct file *VAR_13 = ((void*)0);
 int VAR_14;
 int VAR_15 = -1;

 VAR_14 = -VAR_4;
 if (!VAR_9)
  return VAR_14;


 FUNC_18(&VAR_10);
 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12)
  FUNC_7(VAR_12->dentry);
 FUNC_19(&VAR_10);
 if (!VAR_12)
  return VAR_14;


 VAR_14 = -VAR_3;
 if (VAR_11->interp_flags & VAR_2)
  goto ret;

 if (!(VAR_12->flags & VAR_8)) {
  VAR_14 = FUNC_20(VAR_11);
  if (VAR_14)
   goto ret;
 }

 if (VAR_12->flags & VAR_6) {





  VAR_15 = FUNC_12(0);
  if (VAR_15 < 0) {
   VAR_14 = VAR_15;
   goto ret;
  }
  FUNC_9(VAR_15, VAR_11->file);



  FUNC_22(VAR_11, VAR_11->file);

  FUNC_2(VAR_11->file);
  VAR_11->file = ((void*)0);


  VAR_11->interp_flags |= VAR_1;
  VAR_11->interp_data = VAR_15;

 } else {
  FUNC_2(VAR_11->file);
  FUNC_11(VAR_11->file);
  VAR_11->file = ((void*)0);
 }

 VAR_14 = FUNC_5(1, &VAR_11->interp, VAR_11);
 if (VAR_14 < 0)
  goto error;
 VAR_11->argc++;


 VAR_14 = FUNC_5(1, &VAR_12->interpreter, VAR_11);
 if (VAR_14 < 0)
  goto error;
 VAR_11->argc++;


 VAR_14 = FUNC_3(VAR_12->interpreter, VAR_11);
 if (VAR_14 < 0)
  goto error;

 if (VAR_12->flags & VAR_7) {
  VAR_13 = FUNC_10(VAR_12->interp_file);
  if (!FUNC_0(VAR_13))
   FUNC_6(VAR_13);
 } else {
  VAR_13 = FUNC_16(VAR_12->interpreter);
 }
 VAR_14 = FUNC_1(VAR_13);
 if (FUNC_0(VAR_13))
  goto error;

 VAR_11->file = VAR_13;
 if (VAR_12->flags & VAR_5) {
  loff_t VAR_16 = 0;





  FUNC_15(VAR_11->buf, 0, VAR_0);
  VAR_14 = FUNC_13(VAR_11->file, VAR_11->buf, VAR_0,
    &VAR_16);
 } else
  VAR_14 = FUNC_17(VAR_11);

 if (VAR_14 < 0)
  goto error;

 VAR_14 = FUNC_21(VAR_11);
 if (VAR_14 < 0)
  goto error;

ret:
 FUNC_8(VAR_12->dentry);
 return VAR_14;
error:
 if (VAR_15 > 0)
  FUNC_14(VAR_15);
 VAR_11->interp_flags = 0;
 VAR_11->interp_data = 0;
 goto ret;
}
