
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sh_eth_private {int dummy; } ;
struct net_device {int dummy; } ;
typedef int blank ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 struct sh_eth_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sh_eth_private*,int ) ;
 int FUNC_3 (struct sh_eth_private*,int ) ;
 int FUNC_4 (struct sh_eth_private*,int,int ) ;
 int FUNC_5 (struct net_device*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3,
           int VAR_4)
{
 struct sh_eth_private *VAR_5 = FUNC_1(VAR_3);
 u16 VAR_6 = FUNC_2(VAR_5, VAR_1);
 int VAR_7;
 u8 VAR_8[VAR_0];

 FUNC_4(VAR_5, FUNC_3(VAR_5, VAR_2) &
    ~(1 << (31 - VAR_4)), VAR_2);

 FUNC_0(VAR_8, 0, sizeof(VAR_8));
 VAR_7 = FUNC_5(VAR_3, VAR_6 + VAR_4 * 8, VAR_8);
 if (VAR_7 < 0)
  return VAR_7;
 return 0;
}
