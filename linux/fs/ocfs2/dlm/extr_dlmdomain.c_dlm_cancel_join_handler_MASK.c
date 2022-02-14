
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct dlm_ctxt {scalar_t__ joining_node; int spinlock; } ;
struct dlm_cancel_join {scalar_t__ node_idx; int name_len; int domain; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct dlm_ctxt* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dlm_ctxt*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct o2net_msg *VAR_2, u32 VAR_3, void *VAR_4,
       void **VAR_5)
{
 struct dlm_cancel_join *VAR_6;
 struct dlm_ctxt *VAR_7 = ((void*)0);

 VAR_6 = (struct dlm_cancel_join *) VAR_2->buf;

 FUNC_3(0, "node %u cancels join on domain %s\n", VAR_6->node_idx,
    VAR_6->domain);

 FUNC_4(&VAR_1);
 VAR_7 = FUNC_1(VAR_6->domain, VAR_6->name_len);

 if (VAR_7) {
  FUNC_4(&VAR_7->spinlock);



  FUNC_0(VAR_7->joining_node != VAR_6->node_idx);
  FUNC_2(VAR_7, VAR_0);

  FUNC_5(&VAR_7->spinlock);
 }
 FUNC_5(&VAR_1);

 return 0;
}
