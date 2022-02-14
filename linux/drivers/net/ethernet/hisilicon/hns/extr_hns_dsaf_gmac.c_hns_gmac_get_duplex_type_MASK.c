
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_driver {int dummy; } ;
typedef enum hns_gmac_duplex_mdoe { ____Placeholder_hns_gmac_duplex_mdoe } hns_gmac_duplex_mdoe ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mac_driver*,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_2,
         enum hns_gmac_duplex_mdoe *VAR_3)
{
 struct mac_driver *VAR_4 = (struct mac_driver *)VAR_2;

 *VAR_3 = (enum hns_gmac_duplex_mdoe)FUNC_0(
  VAR_4, VAR_1, VAR_0);
}
