
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int id; } ;
struct shmid_kernel {int shm_atim; int shm_dtim; int shm_ctim; TYPE_1__ shm_perm; int shm_nattch; int shm_lprid; int shm_cprid; int shm_segsz; } ;
struct shmid64_ds {int shm_atime; int shm_dtime; int shm_ctime; int shm_atime_high; int shm_dtime_high; int shm_ctime_high; int shm_nattch; void* shm_lpid; void* shm_cpid; int shm_segsz; int shm_perm; } ;
struct ipc_namespace {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct shmid_kernel*) ;
 int FUNC_1 (struct shmid_kernel*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct ipc_namespace*,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (struct shmid64_ds*,int ,int) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*,int) ;
 struct shmid_kernel* FUNC_13 (struct ipc_namespace*,int) ;
 struct shmid_kernel* FUNC_14 (struct ipc_namespace*,int) ;

__attribute__((used)) static int FUNC_15(struct ipc_namespace *VAR_6, int VAR_7,
   int VAR_8, struct shmid64_ds *VAR_9)
{
 struct shmid_kernel *VAR_10;
 int VAR_11;

 FUNC_8(VAR_9, 0, sizeof(*VAR_9));

 FUNC_10();
 if (VAR_8 == VAR_3 || VAR_8 == VAR_4) {
  VAR_10 = FUNC_13(VAR_6, VAR_7);
  if (FUNC_0(VAR_10)) {
   VAR_11 = FUNC_1(VAR_10);
   goto out_unlock;
  }
 } else {
  VAR_10 = FUNC_14(VAR_6, VAR_7);
  if (FUNC_0(VAR_10)) {
   VAR_11 = FUNC_1(VAR_10);
   goto out_unlock;
  }
 }
 if (VAR_8 == VAR_4)
  FUNC_2(&VAR_10->shm_perm);
 else {
  VAR_11 = -VAR_0;
  if (FUNC_6(VAR_6, &VAR_10->shm_perm, VAR_5))
   goto out_unlock;
 }

 VAR_11 = FUNC_12(&VAR_10->shm_perm, VAR_8);
 if (VAR_11)
  goto out_unlock;

 FUNC_3(&VAR_10->shm_perm);

 if (!FUNC_5(&VAR_10->shm_perm)) {
  FUNC_4(&VAR_10->shm_perm);
  VAR_11 = -VAR_1;
  goto out_unlock;
 }

 FUNC_7(&VAR_10->shm_perm, &VAR_9->shm_perm);
 VAR_9->shm_segsz = VAR_10->shm_segsz;
 VAR_9->shm_atime = VAR_10->shm_atim;
 VAR_9->shm_dtime = VAR_10->shm_dtim;
 VAR_9->shm_ctime = VAR_10->shm_ctim;

 VAR_9->shm_atime_high = VAR_10->shm_atim >> 32;
 VAR_9->shm_dtime_high = VAR_10->shm_dtim >> 32;
 VAR_9->shm_ctime_high = VAR_10->shm_ctim >> 32;

 VAR_9->shm_cpid = FUNC_9(VAR_10->shm_cprid);
 VAR_9->shm_lpid = FUNC_9(VAR_10->shm_lprid);
 VAR_9->shm_nattch = VAR_10->shm_nattch;

 if (VAR_8 == VAR_2) {




  VAR_11 = 0;
 } else {




  VAR_11 = VAR_10->shm_perm.id;
 }

 FUNC_4(&VAR_10->shm_perm);
out_unlock:
 FUNC_11();
 return VAR_11;
}
