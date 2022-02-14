
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ofdpa_port {int dummy; } ;
struct TYPE_2__ {int ttl_check; int group_id; int vlan_id; int eth_dst; int eth_src; } ;
struct ofdpa_group_tbl_entry {TYPE_1__ l3_unicast; int group_id; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*) ;
 struct ofdpa_group_tbl_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ofdpa_port*,int,struct ofdpa_group_tbl_entry*) ;

__attribute__((used)) static int FUNC_5(struct ofdpa_port *VAR_2, int VAR_3,
      u32 VAR_4, const u8 *VAR_5, const u8 *VAR_6,
      __be16 VAR_7, bool VAR_8, u32 VAR_9)
{
 struct ofdpa_group_tbl_entry *VAR_10;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->group_id = FUNC_1(VAR_4);
 if (VAR_5)
  FUNC_2(VAR_10->l3_unicast.eth_src, VAR_5);
 if (VAR_6)
  FUNC_2(VAR_10->l3_unicast.eth_dst, VAR_6);
 VAR_10->l3_unicast.vlan_id = VAR_7;
 VAR_10->l3_unicast.ttl_check = VAR_8;
 VAR_10->l3_unicast.group_id = FUNC_0(VAR_7, VAR_9);

 return FUNC_4(VAR_2, VAR_3, VAR_10);
}
