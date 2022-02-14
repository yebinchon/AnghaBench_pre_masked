
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dlm_exit_domain {int node_idx; } ;
struct dlm_ctxt {int name; int key; int node_num; } ;
typedef int leave_msg ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_exit_domain*,int ,int) ;
 int FUNC_1 (int ,char*,int,int ,unsigned int,...) ;
 int FUNC_2 (int ,int ,struct dlm_exit_domain*,int,unsigned int,int *) ;

__attribute__((used)) static int FUNC_3(struct dlm_ctxt *VAR_1, u32 VAR_2,
        unsigned int VAR_3)
{
 int VAR_4;
 struct dlm_exit_domain VAR_5;

 FUNC_1(0, "%s: Sending domain exit message %u to node %u\n", VAR_1->name,
      VAR_2, VAR_3);

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.node_idx = VAR_1->node_num;

 VAR_4 = FUNC_2(VAR_2, VAR_1->key, &VAR_5,
        sizeof(VAR_5), VAR_3, ((void*)0));
 if (VAR_4 < 0)
  FUNC_1(VAR_0, "Error %d sending domain exit message %u "
       "to node %u on domain %s\n", VAR_4, VAR_2, VAR_3,
       VAR_1->name);

 return VAR_4;
}
