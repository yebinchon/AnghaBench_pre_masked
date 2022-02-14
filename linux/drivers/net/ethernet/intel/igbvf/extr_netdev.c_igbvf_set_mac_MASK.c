
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_3__ {int (* rar_set ) (struct e1000_hw*,int ,int ) ;} ;
struct TYPE_4__ {int addr; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; int mbx_lock; } ;
struct igbvf_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct igbvf_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, void *VAR_2)
{
 struct igbvf_adapter *VAR_3 = FUNC_3(VAR_1);
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 struct sockaddr *VAR_5 = VAR_2;

 if (!FUNC_1(VAR_5->sa_data))
  return -VAR_0;

 FUNC_2(VAR_4->mac.addr, VAR_5->sa_data, VAR_1->addr_len);

 FUNC_4(&VAR_4->mbx_lock);

 VAR_4->mac.ops.rar_set(VAR_4, VAR_4->mac.addr, 0);

 FUNC_5(&VAR_4->mbx_lock);

 if (!FUNC_0(VAR_5->sa_data, VAR_4->mac.addr))
  return -VAR_0;

 FUNC_2(VAR_1->dev_addr, VAR_5->sa_data, VAR_1->addr_len);

 return 0;
}
