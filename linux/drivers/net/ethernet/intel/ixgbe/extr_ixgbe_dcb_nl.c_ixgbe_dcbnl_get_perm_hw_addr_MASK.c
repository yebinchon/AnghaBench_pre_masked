
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int addr_len; } ;
struct TYPE_3__ {int type; int * san_addr; int * perm_addr; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {TYPE_2__ hw; } ;


 int VAR_0 ;



 int FUNC_0 (int *,int,int ) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
      u8 *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_1(VAR_1);
 int VAR_4, VAR_5;

 FUNC_0(VAR_2, 0xff, VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_1->addr_len; VAR_4++)
  VAR_2[VAR_4] = VAR_3->hw.mac.perm_addr[VAR_4];

 switch (VAR_3->hw.mac.type) {
 case 130:
 case 129:
 case 128:
  for (VAR_5 = 0; VAR_5 < VAR_1->addr_len; VAR_5++, VAR_4++)
   VAR_2[VAR_4] = VAR_3->hw.mac.san_addr[VAR_5];
  break;
 default:
  break;
 }
}
