
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int nd_num; scalar_t__ nd_ipv4_port; scalar_t__ nd_ipv4_address; } ;
struct dlm_query_nodeinfo {int qn_numnodes; int qn_nodenum; int qn_domain; struct dlm_node_info* qn_nodes; } ;
struct dlm_node_info {int ni_nodenum; scalar_t__ ni_ipv4_address; scalar_t__ ni_ipv4_port; } ;
struct dlm_ctxt {int node_num; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (scalar_t__) ;
 struct o2nm_node* FUNC_3 (int) ;
 int FUNC_4 (struct o2nm_node*) ;

__attribute__((used)) static int FUNC_5(struct dlm_ctxt *VAR_3, struct dlm_query_nodeinfo *VAR_4)
{
 struct o2nm_node *VAR_5;
 struct dlm_node_info *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_4->qn_numnodes; ++VAR_8)
  FUNC_1(0, "Node %3d, %pI4:%u\n", VAR_4->qn_nodes[VAR_8].ni_nodenum,
       &(VAR_4->qn_nodes[VAR_8].ni_ipv4_address),
       FUNC_2(VAR_4->qn_nodes[VAR_8].ni_ipv4_port));

 for (VAR_7 = 0; VAR_7 < VAR_2 && !VAR_9; ++VAR_7) {
  VAR_5 = FUNC_3(VAR_7);
  VAR_6 = ((void*)0);
  for (VAR_8 = 0; VAR_8 < VAR_4->qn_numnodes; ++VAR_8) {
   if (VAR_4->qn_nodes[VAR_8].ni_nodenum == VAR_7) {
    VAR_6 = &(VAR_4->qn_nodes[VAR_8]);
    break;
   }
  }

  if (!VAR_5 && !VAR_6)
   continue;

  if ((VAR_5 && !VAR_6) || (!VAR_5 && VAR_6))
   VAR_9 = -VAR_0;

  if (!VAR_9 &&
      ((VAR_6->ni_nodenum != VAR_5->nd_num) ||
       (VAR_6->ni_ipv4_port != VAR_5->nd_ipv4_port) ||
       (VAR_6->ni_ipv4_address != VAR_5->nd_ipv4_address)))
   VAR_9 = -VAR_0;

  if (VAR_9) {
   if (VAR_6 && !VAR_5)
    FUNC_1(VAR_1, "Domain %s: Node %d (%pI4:%u) "
         "registered in joining node %d but not in "
         "local node %d\n", VAR_4->qn_domain,
         VAR_6->ni_nodenum,
         &(VAR_6->ni_ipv4_address),
         FUNC_2(VAR_6->ni_ipv4_port),
         VAR_4->qn_nodenum, VAR_3->node_num);
   if (VAR_5 && !VAR_6)
    FUNC_1(VAR_1, "Domain %s: Node %d (%pI4:%u) "
         "registered in local node %d but not in "
         "joining node %d\n", VAR_4->qn_domain,
         VAR_5->nd_num, &(VAR_5->nd_ipv4_address),
         FUNC_2(VAR_5->nd_ipv4_port),
         VAR_3->node_num, VAR_4->qn_nodenum);
   FUNC_0((!VAR_5 && !VAR_6));
  }

  if (VAR_5)
   FUNC_4(VAR_5);
 }

 return VAR_9;
}
