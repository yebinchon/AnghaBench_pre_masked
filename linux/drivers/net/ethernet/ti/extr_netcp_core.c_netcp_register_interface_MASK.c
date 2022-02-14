
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {int netdev_registered; int ndev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct netcp_intf *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->ndev);
 if (!VAR_1)
  VAR_0->netdev_registered = 1;
 return VAR_1;
}
