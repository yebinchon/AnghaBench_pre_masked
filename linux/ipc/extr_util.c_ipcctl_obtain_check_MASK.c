
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int uid; int cuid; } ;
struct ipc_namespace {int user_ns; } ;
struct ipc_ids {int dummy; } ;
struct ipc64_perm {int mode; int gid; int uid; } ;
typedef int kuid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct kern_ipc_perm* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct kern_ipc_perm*) ;
 int FUNC_2 (struct kern_ipc_perm*) ;
 int FUNC_3 (struct kern_ipc_perm*) ;
 int FUNC_4 (int,int ,int ,int ) ;
 int FUNC_5 () ;
 struct kern_ipc_perm* FUNC_6 (struct ipc_ids*,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

struct kern_ipc_perm *FUNC_9(struct ipc_namespace *VAR_3,
     struct ipc_ids *VAR_4, int VAR_5, int VAR_6,
     struct ipc64_perm *VAR_7, int VAR_8)
{
 kuid_t VAR_9;
 int VAR_10 = -VAR_1;
 struct kern_ipc_perm *VAR_11;

 VAR_11 = FUNC_6(VAR_4, VAR_5);
 if (FUNC_1(VAR_11)) {
  VAR_10 = FUNC_2(VAR_11);
  goto err;
 }

 FUNC_3(VAR_11);
 if (VAR_6 == VAR_2)
  FUNC_4(VAR_8, VAR_7->uid,
       VAR_7->gid, VAR_7->mode);

 VAR_9 = FUNC_5();
 if (FUNC_8(VAR_9, VAR_11->cuid) || FUNC_8(VAR_9, VAR_11->uid) ||
     FUNC_7(VAR_3->user_ns, VAR_0))
  return VAR_11;
err:
 return FUNC_0(VAR_10);
}
