
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct kern_ipc_perm kern_ipc_perm ;
struct ipc_namespace {int dummy; } ;
struct ipc_ids {int in_use; int rwsem; int ipcs_idr; } ;


 int FUNC_0 (int *) ;
 struct kern_ipc_perm* FUNC_1 (int *,int) ;
 int FUNC_2 (struct kern_ipc_perm*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ipc_namespace *VAR_0, struct ipc_ids *VAR_1,
        void (*VAR_2)(struct ipc_namespace *, struct kern_ipc_perm *))
{
 struct kern_ipc_perm *VAR_3;
 int VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(&VAR_1->rwsem);

 VAR_6 = VAR_1->in_use;

 for (VAR_5 = 0, VAR_4 = 0; VAR_5 < VAR_6; VAR_4++) {
  VAR_3 = FUNC_1(&VAR_1->ipcs_idr, VAR_4);
  if (VAR_3 == ((void*)0))
   continue;
  FUNC_3();
  FUNC_2(VAR_3);
  VAR_2(VAR_0, VAR_3);
  VAR_5++;
 }
 FUNC_4(&VAR_1->rwsem);
}
