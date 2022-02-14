
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs_client {TYPE_2__* cl_nfs_mod; } ;
struct nfs4_state {int dummy; } ;
struct TYPE_4__ {TYPE_1__* rpc_vers; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rpc_task*,struct pnfs_layout_segment*,int) ;
 int FUNC_2 (struct rpc_task*,struct nfs4_state*,struct nfs_client*,struct pnfs_layout_segment*,int) ;
 int FUNC_3 (struct pnfs_layout_segment*,int) ;
 int FUNC_4 (struct pnfs_layout_segment*) ;

__attribute__((used)) static int FUNC_5(struct rpc_task *VAR_1,
     struct nfs4_state *VAR_2,
     struct nfs_client *VAR_3,
     struct pnfs_layout_segment *VAR_4,
     int VAR_5)
{
 int VAR_6 = VAR_3->cl_nfs_mod->rpc_vers->number;

 if (VAR_1->tk_status >= 0) {
  FUNC_3(VAR_4, VAR_5);
  return 0;
 }


 if (!FUNC_4(VAR_4))
  return -VAR_0;

 switch (VAR_6) {
 case 3:
  return FUNC_1(VAR_1, VAR_4, VAR_5);
 case 4:
  return FUNC_2(VAR_1, VAR_2, VAR_3,
             VAR_4, VAR_5);
 default:

  FUNC_0(1);
  return 0;
 }
}
