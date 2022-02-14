
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int rx_handler_data; } ;
struct macsec_rxh_data {int dummy; } ;


 struct macsec_rxh_data* FUNC_0 (int ) ;

__attribute__((used)) static struct macsec_rxh_data *FUNC_1(const struct net_device *VAR_0)
{
 return FUNC_0(VAR_0->rx_handler_data);
}
