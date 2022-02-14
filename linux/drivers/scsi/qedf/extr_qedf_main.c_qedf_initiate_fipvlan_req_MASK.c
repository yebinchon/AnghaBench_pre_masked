
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ctx {scalar_t__ fipvlan_retries; scalar_t__ vlan_id; int fipvlan_compl; int dbg_ctx; int ctlr; int link_state; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qedf_ctx*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static bool FUNC_8(struct qedf_ctx *VAR_5)
{

 while (VAR_5->fipvlan_retries--) {

  if (FUNC_2(&VAR_5->link_state) == VAR_1) {
   FUNC_0(&VAR_5->dbg_ctx, "Link not up.\n");
   return 0;
  }

  if (FUNC_6(VAR_4, &VAR_5->flags)) {
   FUNC_0(&VAR_5->dbg_ctx, "Driver unloading.\n");
   return 0;
  }

  if (VAR_5->vlan_id > 0) {
   FUNC_1(&VAR_5->dbg_ctx, VAR_3,
      "vlan = 0x%x already set, calling ctlr_link_up.\n",
      VAR_5->vlan_id);
   if (FUNC_2(&VAR_5->link_state) == VAR_2)
    FUNC_3(&VAR_5->ctlr);
   return 1;
  }

  FUNC_1(&(VAR_5->dbg_ctx), VAR_3,
      "Retry %d.\n", VAR_5->fipvlan_retries);
  FUNC_4(&VAR_5->fipvlan_compl);
  FUNC_5(VAR_5);
  FUNC_7(&VAR_5->fipvlan_compl, 1 * VAR_0);
 }

 return 0;
}
