
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fjes_adapter {int napi; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fjes_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;

 FUNC_0(VAR_2, &VAR_1->napi, VAR_0, 64);

 return 0;
}
