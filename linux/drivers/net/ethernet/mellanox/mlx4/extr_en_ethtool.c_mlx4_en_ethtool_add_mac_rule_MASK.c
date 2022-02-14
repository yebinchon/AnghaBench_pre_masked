
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int vlan_id_msk; int vlan_id; int dst_mac; int dst_mac_msk; } ;
struct mlx4_spec_list {int list; TYPE_4__ eth; int id; } ;
struct list_head {int dummy; } ;
struct TYPE_6__ {int vlan_tci; } ;
struct TYPE_5__ {int vlan_tci; } ;
struct TYPE_7__ {int flow_type; TYPE_2__ h_ext; TYPE_1__ m_ext; } ;
struct ethtool_rxnfc {TYPE_3__ fs; } ;
typedef unsigned char __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned char FUNC_1 (int) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int ,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_4(struct ethtool_rxnfc *VAR_5,
     struct list_head *VAR_6,
     struct mlx4_spec_list *VAR_7,
     unsigned char *VAR_8)
{
 int VAR_9 = 0;
 __be64 VAR_10 = FUNC_1(VAR_2 << 16);

 VAR_7->id = VAR_3;
 FUNC_3(VAR_7->eth.dst_mac_msk, &VAR_10, VAR_0);
 FUNC_3(VAR_7->eth.dst_mac, VAR_8, VAR_0);

 if ((VAR_5->fs.flow_type & VAR_1) &&
     (VAR_5->fs.m_ext.vlan_tci & FUNC_0(VAR_4))) {
  VAR_7->eth.vlan_id = VAR_5->fs.h_ext.vlan_tci;
  VAR_7->eth.vlan_id_msk = FUNC_0(VAR_4);
 }

 FUNC_2(&VAR_7->list, VAR_6);

 return VAR_9;
}
