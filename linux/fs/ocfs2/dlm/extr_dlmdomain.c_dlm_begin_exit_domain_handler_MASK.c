
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct dlm_exit_domain {unsigned int node_idx; } ;
struct dlm_ctxt {int spinlock; int exit_domain_map; int name; } ;


 int FUNC_0 (struct dlm_ctxt*) ;
 int FUNC_1 (struct dlm_ctxt*) ;
 int FUNC_2 (int ,char*,int ,unsigned int) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct o2net_msg *VAR_0, u32 VAR_1,
      void *VAR_2, void **VAR_3)
{
 struct dlm_ctxt *VAR_4 = VAR_2;
 unsigned int VAR_5;
 struct dlm_exit_domain *VAR_6 = (struct dlm_exit_domain *) VAR_0->buf;

 if (!FUNC_0(VAR_4))
  return 0;

 VAR_5 = VAR_6->node_idx;
 FUNC_2(0, "%s: Node %u sent a begin exit domain message\n", VAR_4->name, VAR_5);

 FUNC_4(&VAR_4->spinlock);
 FUNC_3(VAR_5, VAR_4->exit_domain_map);
 FUNC_5(&VAR_4->spinlock);

 FUNC_1(VAR_4);

 return 0;
}
