
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct gemini_ethernet_port {int config_lock; scalar_t__ gmac_base; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct gemini_ethernet_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
        netdev_features_t VAR_4)
{
 struct gemini_ethernet_port *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = VAR_4 & VAR_2;
 unsigned long VAR_7;
 u32 VAR_8;

 FUNC_2(&VAR_5->config_lock, VAR_7);

 VAR_8 = FUNC_1(VAR_5->gmac_base + VAR_1);
 VAR_8 = VAR_6 ? VAR_8 | VAR_0 : VAR_8 & ~VAR_0;
 FUNC_4(VAR_8, VAR_5->gmac_base + VAR_1);

 FUNC_3(&VAR_5->config_lock, VAR_7);
 return 0;
}
