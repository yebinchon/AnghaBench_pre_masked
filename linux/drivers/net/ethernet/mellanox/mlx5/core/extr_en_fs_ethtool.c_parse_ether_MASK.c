
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;
struct TYPE_3__ {struct ethhdr ether_spec; } ;
struct TYPE_4__ {struct ethhdr ether_spec; } ;
struct ethtool_rx_flow_spec {TYPE_1__ h_u; TYPE_2__ m_u; } ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, void *VAR_4, struct ethtool_rx_flow_spec *VAR_5)
{
 struct ethhdr *VAR_6 = &VAR_5->m_u.ether_spec;
 struct ethhdr *VAR_7 = &VAR_5->h_u.ether_spec;

 FUNC_3((u8 *)VAR_6, (u8 *)VAR_7, sizeof(*VAR_6));
 FUNC_2(FUNC_0(VAR_3, VAR_2), VAR_6->h_source);
 FUNC_2(FUNC_0(VAR_4, VAR_2), VAR_7->h_source);
 FUNC_2(FUNC_0(VAR_3, VAR_0), VAR_6->h_dest);
 FUNC_2(FUNC_0(VAR_4, VAR_0), VAR_7->h_dest);
 FUNC_1(VAR_3, VAR_1, FUNC_4(VAR_6->h_proto));
 FUNC_1(VAR_4, VAR_1, FUNC_4(VAR_7->h_proto));
}
