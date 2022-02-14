
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sh_eth_private {TYPE_1__* cd; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tsu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct sh_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 (struct sh_eth_private*,int ) ;
 int FUNC_4 (struct net_device*,int,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
 struct sh_eth_private *VAR_4 = FUNC_1(VAR_3);
 u16 VAR_5 = FUNC_3(VAR_4, VAR_2);
 u8 VAR_6[VAR_0];
 int VAR_7;

 if (!VAR_4->cd->tsu)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++, VAR_5 += 8) {
  FUNC_4(VAR_3, VAR_5, VAR_6);
  if (FUNC_0(VAR_6))
   FUNC_2(VAR_3, VAR_6);
 }
}
