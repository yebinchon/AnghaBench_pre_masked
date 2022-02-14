
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sh_eth_private {TYPE_1__* cd; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tsu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int const*) ;
 scalar_t__ FUNC_4 (struct sh_eth_private*,int ) ;
 int FUNC_5 (struct sh_eth_private*,int ) ;
 int FUNC_6 (struct sh_eth_private*,int,int ) ;
 int FUNC_7 (struct net_device*,scalar_t__,int const*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, const u8 *VAR_4)
{
 struct sh_eth_private *VAR_5 = FUNC_0(VAR_3);
 u16 VAR_6 = FUNC_4(VAR_5, VAR_1);
 int VAR_7, VAR_8;

 if (!VAR_5->cd->tsu)
  return 0;

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 if (VAR_7 < 0) {

  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7 < 0)
   return -VAR_0;
  VAR_8 = FUNC_7(VAR_3, VAR_6 + VAR_7 * 8, VAR_4);
  if (VAR_8 < 0)
   return VAR_8;


  FUNC_6(VAR_5, FUNC_5(VAR_5, VAR_2) |
     (1 << (31 - VAR_7)), VAR_2);
 }


 FUNC_1(VAR_3, VAR_7);

 return 0;
}
