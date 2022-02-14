
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {scalar_t__ tx_pause; } ;


 int FUNC_0 (struct xlgmac_pdata*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_2(struct xlgmac_pdata *VAR_0)
{
 if (VAR_0->tx_pause)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);

 return 0;
}
