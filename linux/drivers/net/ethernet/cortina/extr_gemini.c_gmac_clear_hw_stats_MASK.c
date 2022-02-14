
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gemini_ethernet_port {scalar_t__ gmac_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct gemini_ethernet_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6)
{
 struct gemini_ethernet_port *VAR_7 = FUNC_0(VAR_6);

 FUNC_1(VAR_7->gmac_base + VAR_1);
 FUNC_1(VAR_7->gmac_base + VAR_2);
 FUNC_1(VAR_7->gmac_base + VAR_5);
 FUNC_1(VAR_7->gmac_base + VAR_0);
 FUNC_1(VAR_7->gmac_base + VAR_3);
 FUNC_1(VAR_7->gmac_base + VAR_4);
}
