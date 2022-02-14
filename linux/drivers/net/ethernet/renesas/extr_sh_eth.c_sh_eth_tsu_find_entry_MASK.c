
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sh_eth_private {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int *) ;
 struct sh_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sh_eth_private*,int ) ;
 int FUNC_3 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, const u8 *VAR_5)
{
 struct sh_eth_private *VAR_6 = FUNC_1(VAR_4);
 u16 VAR_7 = FUNC_2(VAR_6, VAR_3);
 int VAR_8;
 u8 VAR_9[VAR_1];

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++, VAR_7 += 8) {
  FUNC_3(VAR_4, VAR_7, VAR_9);
  if (FUNC_0(VAR_5, VAR_9))
   return VAR_8;
 }

 return -VAR_0;
}
