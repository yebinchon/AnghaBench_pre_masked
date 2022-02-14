
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_desc_info {int dummy; } ;
struct TYPE_2__ {int group_id; int ttl_check; scalar_t__ vlan_id; int eth_dst; int eth_src; } ;
struct ofdpa_group_tbl_entry {TYPE_1__ l3_unicast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rocker_desc_info*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct rocker_desc_info*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_4 (struct rocker_desc_info*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct rocker_desc_info *VAR_7,
       const struct ofdpa_group_tbl_entry *VAR_8)
{
 if (!FUNC_0(VAR_8->l3_unicast.eth_src) &&
     FUNC_1(VAR_7, VAR_4,
      VAR_1, VAR_8->l3_unicast.eth_src))
  return -VAR_0;
 if (!FUNC_0(VAR_8->l3_unicast.eth_dst) &&
     FUNC_1(VAR_7, VAR_2,
      VAR_1, VAR_8->l3_unicast.eth_dst))
  return -VAR_0;
 if (VAR_8->l3_unicast.vlan_id &&
     FUNC_2(VAR_7, VAR_6,
    VAR_8->l3_unicast.vlan_id))
  return -VAR_0;
 if (FUNC_4(VAR_7, VAR_5,
         VAR_8->l3_unicast.ttl_check))
  return -VAR_0;
 if (FUNC_3(VAR_7, VAR_3,
          VAR_8->l3_unicast.group_id))
  return -VAR_0;

 return 0;
}
