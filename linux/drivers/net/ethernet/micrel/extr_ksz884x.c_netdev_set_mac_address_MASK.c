
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct ksz_hw {int mac_override; int override_addr; } ;
struct TYPE_2__ {scalar_t__ first_port; } ;
struct dev_priv {TYPE_1__ port; struct dev_info* adapter; } ;
struct dev_info {struct ksz_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ksz_hw*,int ) ;
 int FUNC_1 (struct ksz_hw*) ;
 int FUNC_2 (struct ksz_hw*,int ) ;
 int FUNC_3 (struct ksz_hw*,int ) ;
 int FUNC_4 (struct ksz_hw*) ;
 int FUNC_5 (int ,int ,int ) ;
 struct dev_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, void *VAR_2)
{
 struct dev_priv *VAR_3 = FUNC_6(VAR_1);
 struct dev_info *VAR_4 = VAR_3->adapter;
 struct ksz_hw *VAR_5 = &VAR_4->hw;
 struct sockaddr *VAR_6 = VAR_2;
 uint VAR_7;

 if (VAR_3->port.first_port > 0)
  FUNC_2(VAR_5, VAR_1->dev_addr);
 else {
  VAR_5->mac_override = 1;
  FUNC_5(VAR_5->override_addr, VAR_6->sa_data, VAR_0);
 }

 FUNC_5(VAR_1->dev_addr, VAR_6->sa_data, VAR_0);

 VAR_7 = FUNC_1(VAR_5);

 if (VAR_3->port.first_port > 0)
  FUNC_0(VAR_5, VAR_1->dev_addr);
 else
  FUNC_4(VAR_5);
 FUNC_3(VAR_5, VAR_7);

 return 0;
}
