
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; int * ethtool_ops; int watchdog_timeo; } ;
struct napi_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,struct napi_struct*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5,
      struct napi_struct *VAR_6)
{
 VAR_5->watchdog_timeo = VAR_0;

 FUNC_0(VAR_5, VAR_6, VAR_3, VAR_1);
 VAR_5->ethtool_ops = &VAR_2;
 VAR_5->netdev_ops = &VAR_4;
}
