
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_iwarp_listener {int vlan; int port; int * ip_addr; int event_cb; int list_entry; int max_backlog; int cb_context; int ip_version; } ;
struct qed_iwarp_listen_out {struct qed_iwarp_listener* handle; } ;
struct qed_iwarp_listen_in {int max_backlog; int cb_context; int event_cb; int vlan; int port; int ip_addr; int ip_version; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_3__ {int iw_lock; int listen_list; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,struct qed_iwarp_listener*,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qed_iwarp_listener* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(void *VAR_3,
   struct qed_iwarp_listen_in *VAR_4,
   struct qed_iwarp_listen_out *VAR_5)
{
 struct qed_hwfn *VAR_6 = VAR_3;
 struct qed_iwarp_listener *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->ip_version = VAR_4->ip_version;
 FUNC_3(VAR_7->ip_addr, VAR_4->ip_addr, sizeof(VAR_7->ip_addr));
 VAR_7->port = VAR_4->port;
 VAR_7->vlan = VAR_4->vlan;

 VAR_7->event_cb = VAR_4->event_cb;
 VAR_7->cb_context = VAR_4->cb_context;
 VAR_7->max_backlog = VAR_4->max_backlog;
 VAR_5->handle = VAR_7;

 FUNC_4(&VAR_6->p_rdma_info->iwarp.iw_lock);
 FUNC_2(&VAR_7->list_entry,
        &VAR_6->p_rdma_info->iwarp.listen_list);
 FUNC_5(&VAR_6->p_rdma_info->iwarp.iw_lock);

 FUNC_0(VAR_6,
     VAR_2,
     "callback=%p handle=%p ip=%x:%x:%x:%x port=0x%x vlan=0x%x\n",
     VAR_7->event_cb,
     VAR_7,
     VAR_7->ip_addr[0],
     VAR_7->ip_addr[1],
     VAR_7->ip_addr[2],
     VAR_7->ip_addr[3], VAR_7->port, VAR_7->vlan);

 return 0;
}
