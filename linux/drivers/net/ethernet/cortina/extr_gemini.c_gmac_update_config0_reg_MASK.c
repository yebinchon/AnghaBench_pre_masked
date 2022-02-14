
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct gemini_ethernet_port {int config_lock; scalar_t__ gmac_base; } ;


 scalar_t__ VAR_0 ;
 struct gemini_ethernet_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 struct gemini_ethernet_port *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_4->config_lock, VAR_5);

 VAR_6 = FUNC_1(VAR_4->gmac_base + VAR_0);
 VAR_6 = (VAR_6 & ~VAR_3) | VAR_2;
 FUNC_4(VAR_6, VAR_4->gmac_base + VAR_0);

 FUNC_3(&VAR_4->config_lock, VAR_5);
}
