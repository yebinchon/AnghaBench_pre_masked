
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct user_arg_ptr {int dummy; } ;
struct linux_binprm {char* filename; char* interp; scalar_t__ mm; struct filename* file; int argc; int envc; int p; int exec; int interp_flags; } ;
struct files_struct {int dummy; } ;
struct filename {char* name; } ;
struct file {char* name; } ;
struct TYPE_11__ {int processes; } ;
struct TYPE_10__ {int flags; int in_execve; TYPE_2__* fs; TYPE_1__* files; } ;
struct TYPE_9__ {scalar_t__ in_exec; } ;
struct TYPE_8__ {int fdt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct filename*) ;
 int VAR_5 ;
 int FUNC_1 (struct filename*) ;
 int VAR_6 ;
 int FUNC_2 (struct linux_binprm*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct linux_binprm*) ;
 int FUNC_6 (struct linux_binprm*) ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (int ,struct user_arg_ptr,struct linux_binprm*) ;
 int FUNC_9 (int,char**,struct linux_binprm*) ;
 TYPE_3__* VAR_7 ;
 TYPE_5__* FUNC_10 () ;
 struct filename* FUNC_11 (int,struct filename*,int) ;
 int FUNC_12 (struct linux_binprm*) ;
 int FUNC_13 (struct linux_binprm*) ;
 char* FUNC_14 (int ,char*,int,...) ;
 int FUNC_15 (char*) ;
 struct linux_binprm* FUNC_16 (int,int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct linux_binprm*,struct user_arg_ptr,struct user_arg_ptr) ;
 int FUNC_19 (struct linux_binprm*) ;
 int FUNC_20 (struct linux_binprm*) ;
 int FUNC_21 (struct files_struct*) ;
 int FUNC_22 (struct filename*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct files_struct*) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 () ;
 int FUNC_28 (TYPE_3__*,int) ;
 int FUNC_29 (struct files_struct**) ;
 int FUNC_30 (struct linux_binprm*,struct filename*) ;

__attribute__((used)) static int FUNC_31(int VAR_8, struct filename *VAR_9,
       struct user_arg_ptr VAR_10,
       struct user_arg_ptr VAR_11,
       int VAR_12, struct file *VAR_13)
{
 char *VAR_14 = ((void*)0);
 struct linux_binprm *VAR_15;
 struct files_struct *VAR_16;
 int VAR_17;

 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);







 if ((VAR_7->flags & VAR_5) &&
     FUNC_4(&FUNC_10()->processes) > FUNC_25(VAR_6)) {
  VAR_17 = -VAR_2;
  goto out_ret;
 }



 VAR_7->flags &= ~VAR_5;

 VAR_17 = FUNC_29(&VAR_16);
 if (VAR_17)
  goto out_ret;

 VAR_17 = -VAR_3;
 VAR_15 = FUNC_16(sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  goto out_files;

 VAR_17 = FUNC_20(VAR_15);
 if (VAR_17)
  goto out_free;

 FUNC_6(VAR_15);
 VAR_7->in_execve = 1;

 if (!VAR_13)
  VAR_13 = FUNC_11(VAR_8, VAR_9, VAR_12);
 VAR_17 = FUNC_1(VAR_13);
 if (FUNC_0(VAR_13))
  goto out_unmark;

 FUNC_27();

 VAR_15->file = VAR_13;
 if (!VAR_9) {
  VAR_15->filename = "none";
 } else if (VAR_8 == VAR_0 || VAR_9->name[0] == '/') {
  VAR_15->filename = VAR_9->name;
 } else {
  if (VAR_9->name[0] == '\0')
   VAR_14 = FUNC_14(VAR_4, "/dev/fd/%d", VAR_8);
  else
   VAR_14 = FUNC_14(VAR_4, "/dev/fd/%d/%s",
         VAR_8, VAR_9->name);
  if (!VAR_14) {
   VAR_17 = -VAR_3;
   goto out_unmark;
  }





  if (FUNC_7(VAR_8, FUNC_23(VAR_7->files->fdt)))
   VAR_15->interp_flags |= VAR_1;
  VAR_15->filename = VAR_14;
 }
 VAR_15->interp = VAR_15->filename;

 VAR_17 = FUNC_5(VAR_15);
 if (VAR_17)
  goto out_unmark;

 VAR_17 = FUNC_18(VAR_15, VAR_10, VAR_11);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_19(VAR_15);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_9(1, &VAR_15->filename, VAR_15);
 if (VAR_17 < 0)
  goto out;

 VAR_15->exec = VAR_15->p;
 VAR_17 = FUNC_8(VAR_15->envc, VAR_11, VAR_15);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_8(VAR_15->argc, VAR_10, VAR_15);
 if (VAR_17 < 0)
  goto out;

 FUNC_30(VAR_15, VAR_15->file);

 VAR_17 = FUNC_12(VAR_15);
 if (VAR_17 < 0)
  goto out;


 VAR_7->fs->in_exec = 0;
 VAR_7->in_execve = 0;
 FUNC_26(VAR_7);
 FUNC_3(VAR_7);
 FUNC_28(VAR_7, 0);
 FUNC_13(VAR_15);
 FUNC_15(VAR_14);
 if (VAR_9)
  FUNC_22(VAR_9);
 if (VAR_16)
  FUNC_21(VAR_16);
 return VAR_17;

out:
 if (VAR_15->mm) {
  FUNC_2(VAR_15, 0);
  FUNC_17(VAR_15->mm);
 }

out_unmark:
 VAR_7->fs->in_exec = 0;
 VAR_7->in_execve = 0;

out_free:
 FUNC_13(VAR_15);
 FUNC_15(VAR_14);

out_files:
 if (VAR_16)
  FUNC_24(VAR_16);
out_ret:
 if (VAR_9)
  FUNC_22(VAR_9);
 return VAR_17;
}
