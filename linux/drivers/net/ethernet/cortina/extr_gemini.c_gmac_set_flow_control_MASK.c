
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct gemini_ethernet_port {int config_lock; scalar_t__ gmac_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct gemini_ethernet_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4, bool VAR_5, bool VAR_6)
{
 struct gemini_ethernet_port *VAR_7 = FUNC_0(VAR_4);
 unsigned long VAR_8;
 u32 VAR_9;

 FUNC_2(&VAR_7->config_lock, VAR_8);

 VAR_9 = FUNC_1(VAR_7->gmac_base + VAR_3);
 VAR_9 &= ~VAR_0;
 if (VAR_5)
  VAR_9 |= VAR_2;
 if (VAR_6)
  VAR_9 |= VAR_1;
 FUNC_4(VAR_9, VAR_7->gmac_base + VAR_3);

 FUNC_3(&VAR_7->config_lock, VAR_8);
}
