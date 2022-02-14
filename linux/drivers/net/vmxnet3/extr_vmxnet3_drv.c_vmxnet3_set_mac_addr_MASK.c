
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int dummy; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct vmxnet3_adapter*,int ) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_0, void *VAR_1)
{
 struct sockaddr *VAR_2 = VAR_1;
 struct vmxnet3_adapter *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_0->dev_addr, VAR_2->sa_data, VAR_0->addr_len);
 FUNC_2(VAR_3, VAR_2->sa_data);

 return 0;
}
