
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv643xx_eth_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mv643xx_eth_private*,int) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ) ;

__attribute__((used)) static void FUNC_2(struct mv643xx_eth_private *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 0x80; VAR_3 += 4)
  FUNC_0(VAR_2, VAR_3);


 FUNC_1(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_1);
}
