
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int * cl_slot_tbl; struct nfs4_session* cl_session; } ;
struct nfs4_session {int fc_slot_table; int bc_slot_table; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct nfs_client *VAR_0)
{
 struct nfs4_session *VAR_1 = VAR_0->cl_session;
 int VAR_2;

 if (VAR_0->cl_slot_tbl)
  return FUNC_0(VAR_0->cl_slot_tbl);


 VAR_2 = FUNC_0(&VAR_1->bc_slot_table);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(&VAR_1->fc_slot_table);
}
