
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {struct net_device* netdev; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xlgmac_pdata*) ;
 int FUNC_1 (struct xlgmac_pdata*,unsigned int) ;
 int FUNC_2 (struct xlgmac_pdata*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct xlgmac_pdata *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 unsigned int VAR_4, VAR_5;

 VAR_4 = ((VAR_3->flags & VAR_1) != 0);
 VAR_5 = ((VAR_3->flags & VAR_0) != 0);

 FUNC_2(VAR_2, VAR_4);
 FUNC_1(VAR_2, VAR_5);

 FUNC_0(VAR_2);

 return 0;
}
