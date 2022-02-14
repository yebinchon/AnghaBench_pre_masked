
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_namespace {int * ids; int msg_hdrs; int msg_bytes; int msg_ctlmni; int msg_ctlmnb; int msg_ctlmax; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ipc_namespace *VAR_4)
{
 VAR_4->msg_ctlmax = VAR_1;
 VAR_4->msg_ctlmnb = VAR_2;
 VAR_4->msg_ctlmni = VAR_3;

 FUNC_0(&VAR_4->msg_bytes, 0);
 FUNC_0(&VAR_4->msg_hdrs, 0);
 FUNC_1(&VAR_4->ids[VAR_0]);
}
