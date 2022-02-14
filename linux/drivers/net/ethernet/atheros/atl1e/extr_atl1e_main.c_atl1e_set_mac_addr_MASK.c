
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_2__ {int mac_addr; } ;
struct atl1e_adapter {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct atl1e_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 struct atl1e_adapter *VAR_4 = FUNC_3(VAR_2);
 struct sockaddr *VAR_5 = VAR_3;

 if (!FUNC_1(VAR_5->sa_data))
  return -VAR_0;

 if (FUNC_4(VAR_2))
  return -VAR_1;

 FUNC_2(VAR_2->dev_addr, VAR_5->sa_data, VAR_2->addr_len);
 FUNC_2(VAR_4->hw.mac_addr, VAR_5->sa_data, VAR_2->addr_len);

 FUNC_0(&VAR_4->hw);

 return 0;
}
