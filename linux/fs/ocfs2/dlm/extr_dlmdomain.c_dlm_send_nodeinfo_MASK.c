
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct o2nm_node {int nd_ipv4_port; int nd_ipv4_address; int nd_num; } ;
struct dlm_query_nodeinfo {int qn_nodenum; int qn_numnodes; int qn_namelen; int qn_domain; TYPE_1__* qn_nodes; } ;
struct dlm_ctxt {int node_num; int name; } ;
struct TYPE_2__ {int ni_ipv4_address; int ni_ipv4_port; int ni_nodenum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long*,int,int) ;
 int FUNC_1 (struct dlm_query_nodeinfo*) ;
 struct dlm_query_nodeinfo* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,struct dlm_query_nodeinfo*,int,int,int*) ;
 struct o2nm_node* FUNC_8 (int) ;
 int FUNC_9 (struct o2nm_node*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct dlm_ctxt *VAR_6, unsigned long *VAR_7)
{
 struct dlm_query_nodeinfo *VAR_8 = ((void*)0);
 struct o2nm_node *VAR_9;
 int VAR_10 = 0, VAR_11, VAR_12, VAR_13;

 if (FUNC_0(VAR_7, VAR_5, 0) >= VAR_5)
  goto bail;

 VAR_8 = FUNC_2(sizeof(struct dlm_query_nodeinfo), VAR_3);
 if (!VAR_8) {
  VAR_10 = -VAR_2;
  FUNC_5(VAR_10);
  goto bail;
 }

 for (VAR_13 = 0, VAR_12 = 0; VAR_13 < VAR_5; ++VAR_13) {
  VAR_9 = FUNC_8(VAR_13);
  if (!VAR_9)
   continue;
  VAR_8->qn_nodes[VAR_12].ni_nodenum = VAR_9->nd_num;
  VAR_8->qn_nodes[VAR_12].ni_ipv4_port = VAR_9->nd_ipv4_port;
  VAR_8->qn_nodes[VAR_12].ni_ipv4_address = VAR_9->nd_ipv4_address;
  FUNC_4(0, "Node %3d, %pI4:%u\n", VAR_9->nd_num,
       &(VAR_9->nd_ipv4_address), FUNC_6(VAR_9->nd_ipv4_port));
  ++VAR_12;
  FUNC_9(VAR_9);
 }

 VAR_8->qn_nodenum = VAR_6->node_num;
 VAR_8->qn_numnodes = VAR_12;
 VAR_8->qn_namelen = FUNC_10(VAR_6->name);
 FUNC_3(VAR_8->qn_domain, VAR_6->name, VAR_8->qn_namelen);

 VAR_13 = -1;
 while ((VAR_13 = FUNC_0(VAR_7, VAR_5,
      VAR_13 + 1)) < VAR_5) {
  if (VAR_13 == VAR_6->node_num)
   continue;

  FUNC_4(0, "Sending nodeinfo to node %d\n", VAR_13);

  VAR_10 = FUNC_7(VAR_1, VAR_0,
      VAR_8, sizeof(struct dlm_query_nodeinfo),
      VAR_13, &VAR_11);
  if (VAR_10 >= 0)
   VAR_10 = VAR_11;
  if (VAR_10) {
   FUNC_4(VAR_4, "node mismatch %d, node %d\n", VAR_10, VAR_13);
   break;
  }
 }

bail:
 FUNC_1(VAR_8);
 return VAR_10;
}
