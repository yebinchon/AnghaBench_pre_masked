
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net2272_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net2272_ep*,int ) ;
 int FUNC_1 (struct net2272_ep*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net2272_ep *VAR_4)
{
 u8 VAR_5 = FUNC_0(VAR_4, VAR_2);

 if ((VAR_5 & (1 << VAR_3)) != 0)
  FUNC_1(VAR_4, VAR_1, 1 << VAR_0);
}
