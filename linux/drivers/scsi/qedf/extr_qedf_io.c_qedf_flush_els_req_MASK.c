
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ioreq {int refcount; int * cb_arg; int (* cb_func ) (int *) ;int timeout_work; int event; int xid; } ;
struct qedf_ctx {int dbg_ctx; } ;


 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct qedf_ctx *VAR_3,
 struct qedf_ioreq *VAR_4)
{
 FUNC_0(&(VAR_3->dbg_ctx), VAR_1,
     "Flushing ELS request xid=0x%x refcount=%d.\n", VAR_4->xid,
     FUNC_3(&VAR_4->refcount));





 VAR_4->event = VAR_0;


 FUNC_1(&VAR_4->timeout_work);


 if (VAR_4->cb_func && VAR_4->cb_arg) {
  VAR_4->cb_func(VAR_4->cb_arg);
  VAR_4->cb_arg = ((void*)0);
 }


 FUNC_2(&VAR_4->refcount, VAR_2);
}
