
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsc9420_pdata {int dummy; } ;
struct net_device_stats {int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 struct smsc9420_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct smsc9420_pdata*,int ) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_1)
{
 struct smsc9420_pdata *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3 = FUNC_1(VAR_2, VAR_0);
 VAR_1->stats.rx_dropped +=
     (VAR_3 & 0x0000FFFF) + ((VAR_3 >> 17) & 0x000003FF);
 return &VAR_1->stats;
}
