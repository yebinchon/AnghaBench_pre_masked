
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int dcbx_cap; } ;
struct dcb_app {int protocol; int selector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_1(VAR_2);
 struct dcb_app VAR_6 = {
    .selector = VAR_3,
    .protocol = VAR_4,
        };

 if (!(VAR_5->dcbx_cap & VAR_0))
  return -VAR_1;

 return FUNC_0(VAR_2, &VAR_6);
}
