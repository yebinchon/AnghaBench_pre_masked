
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_eth_table_port {scalar_t__ interface; scalar_t__ media; int port_type; } ;
struct nfp_cpp {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0(struct nfp_cpp *VAR_7, struct nfp_eth_table_port *VAR_8)
{
 if (VAR_8->interface == VAR_0) {
  VAR_8->port_type = VAR_5;
  return;
 } else if (VAR_8->interface == VAR_1) {
  VAR_8->port_type = VAR_6;
  return;
 }

 if (VAR_8->media == VAR_2)
  VAR_8->port_type = VAR_4;
 else
  VAR_8->port_type = VAR_3;
}
