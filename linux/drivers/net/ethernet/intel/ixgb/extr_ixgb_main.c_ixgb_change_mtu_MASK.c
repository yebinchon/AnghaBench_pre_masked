
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct ixgb_adapter {int rx_buffer_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgb_adapter*,int) ;
 int FUNC_1 (struct ixgb_adapter*) ;
 struct ixgb_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_2, int VAR_3)
{
 struct ixgb_adapter *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = VAR_3 + VAR_1 + VAR_0;

 if (FUNC_3(VAR_2))
  FUNC_0(VAR_4, 1);

 VAR_4->rx_buffer_len = VAR_5 + 8;

 VAR_2->mtu = VAR_3;

 if (FUNC_3(VAR_2))
  FUNC_1(VAR_4);

 return 0;
}
