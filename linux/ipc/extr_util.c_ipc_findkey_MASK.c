
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int dummy; } ;
struct ipc_ids {int key_ht; } ;
typedef int key_t ;


 int VAR_0 ;
 int FUNC_0 (struct kern_ipc_perm*) ;
 int FUNC_1 () ;
 struct kern_ipc_perm* FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static struct kern_ipc_perm *FUNC_3(struct ipc_ids *VAR_1, key_t VAR_2)
{
 struct kern_ipc_perm *VAR_3;

 VAR_3 = FUNC_2(&VAR_1->key_ht, &VAR_2,
           VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1();
 FUNC_0(VAR_3);
 return VAR_3;
}
