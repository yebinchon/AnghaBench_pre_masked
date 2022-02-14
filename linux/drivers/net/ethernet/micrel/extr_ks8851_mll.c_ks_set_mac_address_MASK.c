
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr {int sa_data; } ;
struct net_device {scalar_t__ dev_addr; int addr_len; } ;
struct ks_net {int dummy; } ;


 int FUNC_0 (struct ks_net*,int *) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 struct ks_net* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, void *VAR_1)
{
 struct ks_net *VAR_2 = FUNC_2(VAR_0);
 struct sockaddr *VAR_3 = VAR_1;
 u8 *VAR_4;

 FUNC_1(VAR_0->dev_addr, VAR_3->sa_data, VAR_0->addr_len);

 VAR_4 = (u8 *)VAR_0->dev_addr;

 FUNC_0(VAR_2, VAR_4);
 return 0;
}
