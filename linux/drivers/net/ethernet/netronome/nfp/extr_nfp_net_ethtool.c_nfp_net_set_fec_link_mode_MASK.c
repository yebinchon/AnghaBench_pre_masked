
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_eth_table_port {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_1 (struct nfp_eth_table_port*) ;
 unsigned int FUNC_2 (struct nfp_eth_table_port*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(struct nfp_eth_table_port *VAR_7,
     struct ethtool_link_ksettings *VAR_8)
{
 unsigned int VAR_9;

 FUNC_0(VAR_8, VAR_6, VAR_1);
 if (!FUNC_1(VAR_7)) {
  FUNC_0(VAR_8, VAR_5, VAR_1);
  return;
 }

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9 & VAR_3) {
  FUNC_0(VAR_8, VAR_6, VAR_0);
  FUNC_0(VAR_8, VAR_5, VAR_0);
 }

 if (VAR_9 & VAR_4) {
  FUNC_0(VAR_8, VAR_6, VAR_2);
  FUNC_0(VAR_8, VAR_5, VAR_2);
 }
}
