
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int vsi; int vid; } ;
struct fm10k_macvlan_request {int set; int list; TYPE_1__ vlan; int type; } ;
struct fm10k_intfc {int macvlan_lock; int macvlan_requests; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fm10k_intfc*) ;
 struct fm10k_macvlan_request* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct fm10k_intfc *VAR_3,
        u32 VAR_4, u8 VAR_5, bool VAR_6)
{
 struct fm10k_macvlan_request *VAR_7;
 unsigned long VAR_8;




 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->type = VAR_1;
 VAR_7->vlan.vid = VAR_4;
 VAR_7->vlan.vsi = VAR_5;
 VAR_7->set = VAR_6;

 FUNC_3(&VAR_3->macvlan_lock, VAR_8);
 FUNC_2(&VAR_7->list, &VAR_3->macvlan_requests);
 FUNC_4(&VAR_3->macvlan_lock, VAR_8);

 FUNC_0(VAR_3);

 return 0;
}
