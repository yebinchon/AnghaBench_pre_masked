
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct gemini_ethernet_port {int config_lock; scalar_t__ gmac_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct gemini_ethernet_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2)
{
 struct gemini_ethernet_port *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_3(&VAR_3->config_lock, VAR_4);

 VAR_5 = FUNC_2(VAR_3->gmac_base + VAR_1);
 VAR_5 |= VAR_0;
 FUNC_5(VAR_5, VAR_3->gmac_base + VAR_1);

 FUNC_4(&VAR_3->config_lock, VAR_4);

 FUNC_0(10);
}
