
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_endpoint {struct cxgbi_endpoint* dd_data; } ;
struct cxgbi_sock {scalar_t__ state; int callback_lock; int * user_data; int flags; } ;
struct cxgbi_endpoint {struct cxgbi_sock* csk; struct cxgbi_conn* cconn; } ;
struct cxgbi_conn {int * cep; scalar_t__ iconn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 int FUNC_1 (struct cxgbi_sock*) ;
 int FUNC_2 (struct iscsi_endpoint*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,struct iscsi_endpoint*,struct cxgbi_endpoint*,struct cxgbi_conn*,struct cxgbi_sock*,scalar_t__,int ) ;
 int FUNC_6 (struct cxgbi_sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct iscsi_endpoint *VAR_3)
{
 struct cxgbi_endpoint *VAR_4 = VAR_3->dd_data;
 struct cxgbi_conn *VAR_5 = VAR_4->cconn;
 struct cxgbi_sock *VAR_6 = VAR_4->csk;

 FUNC_5(1 << VAR_1 | 1 << VAR_2,
  "ep 0x%p, cep 0x%p, cconn 0x%p, csk 0x%p,%u,0x%lx.\n",
  VAR_3, VAR_4, VAR_5, VAR_6, VAR_6->state, VAR_6->flags);

 if (VAR_5 && VAR_5->iconn) {
  FUNC_3(VAR_5->iconn);
  FUNC_7(&VAR_6->callback_lock);
  VAR_4->csk->user_data = ((void*)0);
  VAR_5->cep = ((void*)0);
  FUNC_8(&VAR_6->callback_lock);
 }
 FUNC_2(VAR_3);

 if (FUNC_4(VAR_6->state >= VAR_0))
  FUNC_6(VAR_6);
 else
  FUNC_0(VAR_6);

 FUNC_1(VAR_6);
}
