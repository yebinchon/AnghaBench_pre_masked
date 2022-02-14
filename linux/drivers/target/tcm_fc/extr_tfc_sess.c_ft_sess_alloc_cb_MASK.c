
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int dummy; } ;
struct se_portal_group {int dummy; } ;
struct hlist_head {int dummy; } ;
struct ft_tport {int sess_count; int lport; struct hlist_head* hash; } ;
struct ft_sess {int hash; int port_id; struct ft_tport* tport; } ;


 int FUNC_0 (int ,char*,int ,struct ft_sess*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,struct hlist_head*) ;

__attribute__((used)) static int FUNC_3(struct se_portal_group *VAR_0,
       struct se_session *VAR_1, void *VAR_2)
{
 struct ft_sess *VAR_3 = VAR_2;
 struct ft_tport *VAR_4 = VAR_3->tport;
 struct hlist_head *VAR_5 = &VAR_4->hash[FUNC_1(VAR_3->port_id)];

 FUNC_0(VAR_4->lport, "port_id %x sess %p\n", VAR_3->port_id, VAR_3);
 FUNC_2(&VAR_3->hash, VAR_5);
 VAR_4->sess_count++;

 return 0;
}
