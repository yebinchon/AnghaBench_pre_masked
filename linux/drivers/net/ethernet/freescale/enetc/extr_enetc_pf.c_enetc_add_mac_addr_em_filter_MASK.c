
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_mac_filter {int mac_addr_cnt; int mac_addr; } ;


 int FUNC_0 (int ,unsigned char const*) ;

__attribute__((used)) static void FUNC_1(struct enetc_mac_filter *VAR_0,
      const unsigned char *VAR_1)
{

 FUNC_0(VAR_0->mac_addr, VAR_1);
 VAR_0->mac_addr_cnt++;
}
