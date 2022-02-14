
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct i40e_vsi {int has_vlan_filter; TYPE_1__* back; int flags; int mac_filter_hash; } ;
struct i40e_mac_filter {scalar_t__ state; int hlist; scalar_t__ vlan; int macaddr; } ;
typedef scalar_t__ s16 ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int const*) ;
 struct i40e_mac_filter* FUNC_4 (struct i40e_vsi*,int const*,scalar_t__) ;
 struct i40e_mac_filter* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ) ;

struct i40e_mac_filter *FUNC_7(struct i40e_vsi *VAR_6,
     const u8 *VAR_7, s16 VAR_8)
{
 struct i40e_mac_filter *VAR_9;
 u64 VAR_10;

 if (!VAR_6 || !VAR_7)
  return ((void*)0);

 VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_8);
 if (!VAR_9) {
  VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_0);
  if (!VAR_9)
   return ((void*)0);




  if (VAR_8 >= 0)
   VAR_6->has_vlan_filter = 1;

  FUNC_1(VAR_9->macaddr, VAR_7);
  VAR_9->vlan = VAR_8;
  VAR_9->state = VAR_2;
  FUNC_0(&VAR_9->hlist);

  VAR_10 = FUNC_3(VAR_7);
  FUNC_2(VAR_6->mac_filter_hash, &VAR_9->hlist, VAR_10);

  VAR_6->flags |= VAR_4;
  FUNC_6(VAR_5, VAR_6->back->state);
 }
 if (VAR_9->state == VAR_3)
  VAR_9->state = VAR_1;

 return VAR_9;
}
