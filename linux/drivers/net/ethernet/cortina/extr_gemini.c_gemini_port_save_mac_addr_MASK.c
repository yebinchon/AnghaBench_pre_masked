
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemini_ethernet_port {scalar_t__ gmac_base; void** mac_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gemini_ethernet_port *VAR_3)
{
 VAR_3->mac_addr[0] =
  FUNC_0(FUNC_1(VAR_3->gmac_base + VAR_0));
 VAR_3->mac_addr[1] =
  FUNC_0(FUNC_1(VAR_3->gmac_base + VAR_1));
 VAR_3->mac_addr[2] =
  FUNC_0(FUNC_1(VAR_3->gmac_base + VAR_2));
}
