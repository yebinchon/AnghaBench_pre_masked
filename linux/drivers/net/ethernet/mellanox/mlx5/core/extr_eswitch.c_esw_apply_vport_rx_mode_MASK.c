
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_vport {int * promisc_rule; int vport; int * allmulti_rule; } ;
struct esw_mc_addr {scalar_t__ refcnt; int * uplink_rule; } ;
struct mlx5_eswitch {struct esw_mc_addr mc_promisc; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* FUNC_1 (struct mlx5_eswitch*,int ) ;
 int * FUNC_2 (struct mlx5_eswitch*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mlx5_eswitch *VAR_1,
        struct mlx5_vport *VAR_2,
        bool VAR_3, bool VAR_4)
{
 struct esw_mc_addr *VAR_5 = &VAR_1->mc_promisc;

 if (FUNC_0(VAR_2->allmulti_rule) != VAR_4)
  goto promisc;

 if (VAR_4) {
  VAR_2->allmulti_rule =
   FUNC_1(VAR_1, VAR_2->vport);
  if (!VAR_5->uplink_rule)
   VAR_5->uplink_rule =
    FUNC_1(VAR_1,
        VAR_0);
  VAR_5->refcnt++;
 } else if (VAR_2->allmulti_rule) {
  FUNC_3(VAR_2->allmulti_rule);
  VAR_2->allmulti_rule = ((void*)0);

  if (--VAR_5->refcnt > 0)
   goto promisc;

  if (VAR_5->uplink_rule)
   FUNC_3(VAR_5->uplink_rule);
  VAR_5->uplink_rule = ((void*)0);
 }

promisc:
 if (FUNC_0(VAR_2->promisc_rule) != VAR_3)
  return;

 if (VAR_3) {
  VAR_2->promisc_rule =
   FUNC_2(VAR_1, VAR_2->vport);
 } else if (VAR_2->promisc_rule) {
  FUNC_3(VAR_2->promisc_rule);
  VAR_2->promisc_rule = ((void*)0);
 }
}
