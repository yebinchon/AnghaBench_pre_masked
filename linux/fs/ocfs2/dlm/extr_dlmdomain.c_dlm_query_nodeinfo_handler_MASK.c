
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct dlm_query_nodeinfo {scalar_t__ qn_nodenum; int qn_domain; int qn_namelen; } ;
struct TYPE_2__ {int pv_major; scalar_t__ pv_minor; } ;
struct dlm_ctxt {scalar_t__ joining_node; int spinlock; TYPE_1__ dlm_locking_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dlm_ctxt* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_query_nodeinfo*) ;
 int FUNC_2 (int ,char*,scalar_t__,int ,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct o2net_msg *VAR_3, u32 VAR_4,
          void *VAR_5, void **VAR_6)
{
 struct dlm_query_nodeinfo *VAR_7;
 struct dlm_ctxt *VAR_8 = ((void*)0);
 int VAR_9 = 0, VAR_10 = -VAR_0;

 VAR_7 = (struct dlm_query_nodeinfo *) VAR_3->buf;

 FUNC_2(0, "Node %u queries nodes on domain %s\n", VAR_7->qn_nodenum,
      VAR_7->qn_domain);

 FUNC_3(&VAR_2);
 VAR_8 = FUNC_0(VAR_7->qn_domain, VAR_7->qn_namelen);
 if (!VAR_8) {
  FUNC_2(VAR_1, "Node %d queried nodes on domain %s before "
       "join domain\n", VAR_7->qn_nodenum, VAR_7->qn_domain);
  goto bail;
 }

 FUNC_3(&VAR_8->spinlock);
 VAR_9 = 1;
 if (VAR_8->joining_node != VAR_7->qn_nodenum) {
  FUNC_2(VAR_1, "Node %d queried nodes on domain %s but "
       "joining node is %d\n", VAR_7->qn_nodenum, VAR_7->qn_domain,
       VAR_8->joining_node);
  goto bail;
 }


 if (VAR_8->dlm_locking_proto.pv_major == 1 &&
     VAR_8->dlm_locking_proto.pv_minor == 0) {
  FUNC_2(VAR_1, "Node %d queried nodes on domain %s "
       "but active dlm protocol is %d.%d\n", VAR_7->qn_nodenum,
       VAR_7->qn_domain, VAR_8->dlm_locking_proto.pv_major,
       VAR_8->dlm_locking_proto.pv_minor);
  goto bail;
 }

 VAR_10 = FUNC_1(VAR_8, VAR_7);

bail:
 if (VAR_9)
  FUNC_4(&VAR_8->spinlock);
 FUNC_4(&VAR_2);

 return VAR_10;
}
