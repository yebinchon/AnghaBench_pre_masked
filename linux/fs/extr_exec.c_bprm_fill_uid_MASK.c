
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct linux_binprm {TYPE_4__* cred; int per_clear; TYPE_3__* file; } ;
struct inode {unsigned int i_mode; int i_gid; int i_uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_8__ {int egid; int euid; int user_ns; } ;
struct TYPE_6__ {TYPE_1__* dentry; int mnt; } ;
struct TYPE_7__ {TYPE_2__ f_path; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct linux_binprm *VAR_5)
{
 struct inode *VAR_6;
 unsigned int VAR_7;
 kuid_t VAR_8;
 kgid_t VAR_9;







 VAR_5->cred->euid = FUNC_2();
 VAR_5->cred->egid = FUNC_1();

 if (!FUNC_7(VAR_5->file->f_path.mnt))
  return;

 if (FUNC_8(VAR_4))
  return;

 VAR_6 = VAR_5->file->f_path.dentry->d_inode;
 VAR_7 = FUNC_0(VAR_6->i_mode);
 if (!(VAR_7 & (VAR_2|VAR_1)))
  return;


 FUNC_3(VAR_6);


 VAR_7 = VAR_6->i_mode;
 VAR_8 = VAR_6->i_uid;
 VAR_9 = VAR_6->i_gid;
 FUNC_4(VAR_6);


 if (!FUNC_6(VAR_5->cred->user_ns, VAR_8) ||
   !FUNC_5(VAR_5->cred->user_ns, VAR_9))
  return;

 if (VAR_7 & VAR_2) {
  VAR_5->per_clear |= VAR_0;
  VAR_5->cred->euid = VAR_8;
 }

 if ((VAR_7 & (VAR_1 | VAR_3)) == (VAR_1 | VAR_3)) {
  VAR_5->per_clear |= VAR_0;
  VAR_5->cred->egid = VAR_9;
 }
}
