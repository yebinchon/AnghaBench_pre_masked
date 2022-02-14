
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_binprm {int interp_flags; char const* filename; struct file* file; int argc; scalar_t__ buf; } ;
struct file {TYPE_1__* f_op; } ;
struct elfhdr {scalar_t__ e_type; scalar_t__ e_machine; int e_ident; } ;
struct TYPE_2__ {int mmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int VAR_10 ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int,char const**,struct linux_binprm*) ;
 int FUNC_4 (struct file*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 struct file* FUNC_6 (char*) ;
 int FUNC_7 (struct linux_binprm*) ;
 int FUNC_8 (struct linux_binprm*) ;
 int FUNC_9 (struct linux_binprm*) ;

__attribute__((used)) static int FUNC_10(struct linux_binprm *VAR_11)
{
 const char *VAR_12, *VAR_13;
 char *VAR_14;
 struct file * VAR_15;
 int VAR_16;
 struct elfhdr VAR_17;


 VAR_17 = *((struct elfhdr *)VAR_11->buf);

 if (FUNC_5(VAR_17.e_ident, VAR_1, VAR_10) != 0)
  return -VAR_7;


 if ((VAR_17.e_type != VAR_9 && VAR_17.e_type != VAR_8) ||
  (!((VAR_17.e_machine == VAR_4) || (VAR_17.e_machine == VAR_5))) ||
  !VAR_11->file->f_op->mmap) {
   return -VAR_7;
 }


 if (VAR_11->interp_flags & VAR_0)
  return -VAR_6;

 FUNC_2(VAR_11->file);
 FUNC_4(VAR_11->file);
 VAR_11->file = ((void*)0);




 VAR_14 = VAR_2;
 VAR_12 = VAR_3;
 VAR_13 = ((void*)0);
 FUNC_8(VAR_11);
 VAR_16 = FUNC_3(1, &VAR_11->filename, VAR_11);
 if (VAR_16 < 0) return VAR_16;
 VAR_11->argc++;
 if (VAR_13) {
  VAR_16 = FUNC_3(1, &VAR_13, VAR_11);
  if (VAR_16 < 0) return VAR_16;
  VAR_11->argc++;
 }
 VAR_16 = FUNC_3(1, &VAR_12, VAR_11);
 if (VAR_16 < 0) return VAR_16;
 VAR_11->argc++;






 VAR_15 = FUNC_6(VAR_14);
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 VAR_11->file = VAR_15;

 VAR_16 = FUNC_7(VAR_11);
 if (VAR_16 < 0)
  return VAR_16;

 return FUNC_9(VAR_11);
}
