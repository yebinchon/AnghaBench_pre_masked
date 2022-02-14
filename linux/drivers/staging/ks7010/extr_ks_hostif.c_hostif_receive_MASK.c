
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_wlan_private {unsigned char* rxp; unsigned int rx_size; } ;


 int FUNC_0 (struct ks_wlan_private*,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct ks_wlan_private*) ;
 int FUNC_2 (struct ks_wlan_private*) ;

void FUNC_3(struct ks_wlan_private *VAR_0, unsigned char *VAR_1,
      unsigned int VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_0->rxp = VAR_1;
 VAR_0->rx_size = VAR_2;

 if (FUNC_1(VAR_0) == VAR_0->rx_size)
  FUNC_2(VAR_0);
}
