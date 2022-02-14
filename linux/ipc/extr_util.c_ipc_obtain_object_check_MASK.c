
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int dummy; } ;
struct ipc_ids {int dummy; } ;


 int VAR_0 ;
 struct kern_ipc_perm* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kern_ipc_perm*) ;
 scalar_t__ FUNC_2 (struct kern_ipc_perm*,int) ;
 struct kern_ipc_perm* FUNC_3 (struct ipc_ids*,int) ;

struct kern_ipc_perm *FUNC_4(struct ipc_ids *VAR_1, int VAR_2)
{
 struct kern_ipc_perm *VAR_3 = FUNC_3(VAR_1, VAR_2);

 if (FUNC_1(VAR_3))
  goto out;

 if (FUNC_2(VAR_3, VAR_2))
  return FUNC_0(-VAR_0);
out:
 return VAR_3;
}
