
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {scalar_t__ key; int khtnode; } ;
struct ipc_ids {int key_ht; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ipc_ids *VAR_2, struct kern_ipc_perm *VAR_3)
{
 if (VAR_3->key != VAR_0)
  FUNC_0(&VAR_2->key_ht, &VAR_3->khtnode,
           VAR_1);
}
