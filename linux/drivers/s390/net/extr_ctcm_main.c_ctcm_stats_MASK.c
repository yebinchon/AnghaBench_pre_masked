
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {scalar_t__ ml_priv; } ;
struct ctcm_priv {struct net_device_stats stats; } ;



__attribute__((used)) static struct net_device_stats *FUNC_0(struct net_device *VAR_0)
{
 return &((struct ctcm_priv *)VAR_0->ml_priv)->stats;
}
