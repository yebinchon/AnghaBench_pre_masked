
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int key; } ;
struct ipc_ids {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipc_ids*,struct kern_ipc_perm*) ;

void FUNC_1(struct ipc_ids *VAR_1, struct kern_ipc_perm *VAR_2)
{
 FUNC_0(VAR_1, VAR_2);
 VAR_2->key = VAR_0;
}
