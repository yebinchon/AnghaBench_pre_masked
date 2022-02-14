
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct user_struct {int dummy; } ;
struct TYPE_6__ {int mode; int cuid; int uid; } ;
struct shmid_kernel {TYPE_1__ shm_perm; struct user_struct* mlock_user; struct file* shm_file; } ;
struct ipc_namespace {int user_ns; } ;
struct file {int f_mapping; } ;
typedef int kuid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct shmid_kernel*) ;
 int FUNC_1 (struct shmid_kernel*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 struct user_struct* FUNC_4 () ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (struct file*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*,int) ;
 struct shmid_kernel* FUNC_16 (struct ipc_namespace*,int) ;
 int FUNC_17 (struct file*,int,struct user_struct*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;

__attribute__((used)) static int FUNC_20(struct ipc_namespace *VAR_6, int VAR_7, int VAR_8)
{
 struct shmid_kernel *VAR_9;
 struct file *VAR_10;
 int VAR_11;

 FUNC_12();
 VAR_9 = FUNC_16(VAR_6, VAR_7);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  goto out_unlock1;
 }

 FUNC_2(&(VAR_9->shm_perm));
 VAR_11 = FUNC_15(&VAR_9->shm_perm, VAR_8);
 if (VAR_11)
  goto out_unlock1;

 FUNC_7(&VAR_9->shm_perm);


 if (!FUNC_9(&VAR_9->shm_perm)) {
  VAR_11 = -VAR_1;
  goto out_unlock0;
 }

 if (!FUNC_11(VAR_6->user_ns, VAR_0)) {
  kuid_t VAR_12 = FUNC_3();

  if (!FUNC_19(VAR_12, VAR_9->shm_perm.uid) &&
      !FUNC_19(VAR_12, VAR_9->shm_perm.cuid)) {
   VAR_11 = -VAR_2;
   goto out_unlock0;
  }
  if (VAR_8 == VAR_4 && !FUNC_14(VAR_3)) {
   VAR_11 = -VAR_2;
   goto out_unlock0;
  }
 }

 VAR_10 = VAR_9->shm_file;
 if (FUNC_10(VAR_10))
  goto out_unlock0;

 if (VAR_8 == VAR_4) {
  struct user_struct *VAR_13 = FUNC_4();

  VAR_11 = FUNC_17(VAR_10, 1, VAR_13);
  if (!VAR_11 && !(VAR_9->shm_perm.mode & VAR_5)) {
   VAR_9->shm_perm.mode |= VAR_5;
   VAR_9->mlock_user = VAR_13;
  }
  goto out_unlock0;
 }


 if (!(VAR_9->shm_perm.mode & VAR_5))
  goto out_unlock0;
 FUNC_17(VAR_10, 0, VAR_9->mlock_user);
 VAR_9->shm_perm.mode &= ~VAR_5;
 VAR_9->mlock_user = ((void*)0);
 FUNC_6(VAR_10);
 FUNC_8(&VAR_9->shm_perm);
 FUNC_13();
 FUNC_18(VAR_10->f_mapping);

 FUNC_5(VAR_10);
 return VAR_11;

out_unlock0:
 FUNC_8(&VAR_9->shm_perm);
out_unlock1:
 FUNC_13();
 return VAR_11;
}
