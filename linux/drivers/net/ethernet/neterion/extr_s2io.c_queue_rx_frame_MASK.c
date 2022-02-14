
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int protocol; struct net_device* dev; } ;
struct TYPE_2__ {scalar_t__ napi; } ;
struct s2io_nic {TYPE_1__ config; scalar_t__ vlan_strip_flag; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ) ;
 struct s2io_nic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_1, u16 VAR_2)
{
 struct net_device *VAR_3 = VAR_1->dev;
 struct s2io_nic *VAR_4 = FUNC_3(VAR_3);

 VAR_1->protocol = FUNC_1(VAR_1, VAR_3);
 if (VAR_2 && VAR_4->vlan_strip_flag)
  FUNC_0(VAR_1, FUNC_2(VAR_0), VAR_2);
 if (VAR_4->config.napi)
  FUNC_4(VAR_1);
 else
  FUNC_5(VAR_1);
}
