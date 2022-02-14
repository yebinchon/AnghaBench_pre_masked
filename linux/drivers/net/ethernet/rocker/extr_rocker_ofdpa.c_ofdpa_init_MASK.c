
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker {struct ofdpa* wpriv; } ;
struct ofdpa {int ageing_time; int fdb_cleanup_timer; int neigh_tbl_lock; int neigh_tbl; int internal_vlan_tbl_lock; int internal_vlan_tbl; int fdb_tbl_lock; int fdb_tbl; int group_tbl_lock; int group_tbl; int flow_tbl_lock; int flow_tbl; struct rocker* rocker; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rocker *VAR_3)
{
 struct ofdpa *VAR_4 = VAR_3->wpriv;

 VAR_4->rocker = VAR_3;

 FUNC_0(VAR_4->flow_tbl);
 FUNC_2(&VAR_4->flow_tbl_lock);

 FUNC_0(VAR_4->group_tbl);
 FUNC_2(&VAR_4->group_tbl_lock);

 FUNC_0(VAR_4->fdb_tbl);
 FUNC_2(&VAR_4->fdb_tbl_lock);

 FUNC_0(VAR_4->internal_vlan_tbl);
 FUNC_2(&VAR_4->internal_vlan_tbl_lock);

 FUNC_0(VAR_4->neigh_tbl);
 FUNC_2(&VAR_4->neigh_tbl_lock);

 FUNC_3(&VAR_4->fdb_cleanup_timer, VAR_2, 0);
 FUNC_1(&VAR_4->fdb_cleanup_timer, VAR_1);

 VAR_4->ageing_time = VAR_0;

 return 0;
}
