
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_client {int cl_lock; int cl_cb_conn; int cl_cb_state; } ;
struct nfs4_cb_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct nfs4_cb_conn*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nfs4_client *VAR_1, struct nfs4_cb_conn *VAR_2)
{
 VAR_1->cl_cb_state = VAR_0;
 FUNC_1(&VAR_1->cl_lock);
 FUNC_0(&VAR_1->cl_cb_conn, VAR_2, sizeof(struct nfs4_cb_conn));
 FUNC_2(&VAR_1->cl_lock);
}
