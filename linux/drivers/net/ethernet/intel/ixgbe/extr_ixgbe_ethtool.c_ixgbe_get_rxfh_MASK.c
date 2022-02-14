
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int rss_key; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_adapter*,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ,int ) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, u32 *VAR_2, u8 *VAR_3,
     u8 *VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_3(VAR_1);

 if (VAR_4)
  *VAR_4 = VAR_0;

 if (VAR_2)
  FUNC_0(VAR_5, VAR_2);

 if (VAR_3)
  FUNC_2(VAR_3, VAR_5->rss_key, FUNC_1(VAR_1));

 return 0;
}
