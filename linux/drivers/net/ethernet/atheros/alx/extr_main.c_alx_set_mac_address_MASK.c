
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int addr_assign_type; int addr_len; int dev_addr; } ;
struct alx_hw {int mac_addr; } ;
struct alx_priv {struct alx_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alx_hw*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct alx_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, void *VAR_3)
{
 struct alx_priv *VAR_4 = FUNC_3(VAR_2);
 struct alx_hw *VAR_5 = &VAR_4->hw;
 struct sockaddr *VAR_6 = VAR_3;

 if (!FUNC_1(VAR_6->sa_data))
  return -VAR_0;

 if (VAR_2->addr_assign_type & VAR_1)
  VAR_2->addr_assign_type ^= VAR_1;

 FUNC_2(VAR_2->dev_addr, VAR_6->sa_data, VAR_2->addr_len);
 FUNC_2(VAR_5->mac_addr, VAR_6->sa_data, VAR_2->addr_len);
 FUNC_0(VAR_5, VAR_5->mac_addr);

 return 0;
}
