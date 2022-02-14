
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct mvpp2_rfs_rule {int c2_tcam; int c2_tcam_mask; int hek_fields; struct flow_rule* flow; } ;
struct flow_rule {int dummy; } ;
struct flow_match_vlan {TYPE_2__* mask; TYPE_1__* key; } ;
struct flow_match_ports {TYPE_4__* mask; TYPE_3__* key; } ;
struct TYPE_8__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_7__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_6__ {scalar_t__ vlan_dei; scalar_t__ vlan_priority; scalar_t__ vlan_id; } ;
struct TYPE_5__ {scalar_t__ vlan_priority; scalar_t__ vlan_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct flow_rule*,int ) ;
 int FUNC_1 (struct flow_rule*,struct flow_match_ports*) ;
 int FUNC_2 (struct flow_rule*,struct flow_match_vlan*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mvpp2_rfs_rule *VAR_8)
{
 struct flow_rule *VAR_9 = VAR_8->flow;
 int VAR_10 = 0;




 if (FUNC_0(VAR_9, VAR_2)) {
  struct flow_match_vlan VAR_11;

  FUNC_2(VAR_9, &VAR_11);
  if (VAR_11.mask->vlan_id) {
   VAR_8->hek_fields |= VAR_5;

   VAR_8->c2_tcam |= ((u64)VAR_11.key->vlan_id) << VAR_10;
   VAR_8->c2_tcam_mask |= ((u64)VAR_11.mask->vlan_id) << VAR_10;


  }

  if (VAR_11.mask->vlan_priority) {
   VAR_8->hek_fields |= VAR_6;




   VAR_8->c2_tcam |= ((u64)VAR_11.key->vlan_priority) <<
    (VAR_10 + 13);
   VAR_8->c2_tcam_mask |= ((u64)VAR_11.mask->vlan_priority) <<
    (VAR_10 + 13);
  }

  if (VAR_11.mask->vlan_dei)
   return -VAR_0;




  VAR_10 += 16;
 }

 if (FUNC_0(VAR_9, VAR_1)) {
  struct flow_match_ports VAR_12;

  FUNC_1(VAR_9, &VAR_12);
  if (VAR_12.mask->src) {
   VAR_8->hek_fields |= VAR_4;

   VAR_8->c2_tcam |= ((u64)FUNC_5(VAR_12.key->src)) << VAR_10;
   VAR_8->c2_tcam_mask |= ((u64)FUNC_5(VAR_12.mask->src)) << VAR_10;
   VAR_10 += FUNC_4(VAR_4);
  }

  if (VAR_12.mask->dst) {
   VAR_8->hek_fields |= VAR_3;

   VAR_8->c2_tcam |= ((u64)FUNC_5(VAR_12.key->dst)) << VAR_10;
   VAR_8->c2_tcam_mask |= ((u64)FUNC_5(VAR_12.mask->dst)) << VAR_10;
   VAR_10 += FUNC_4(VAR_3);
  }
 }

 if (FUNC_3(VAR_8->hek_fields) > VAR_7)
  return -VAR_0;

 return 0;
}
