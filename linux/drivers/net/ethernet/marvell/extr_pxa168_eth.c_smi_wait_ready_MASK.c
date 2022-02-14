
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pxa168_eth_private*,int ) ;

__attribute__((used)) static int FUNC_2(struct pxa168_eth_private *VAR_4)
{
 int VAR_5 = 0;


 for (VAR_5 = 0; FUNC_1(VAR_4, VAR_2) & VAR_3; VAR_5++) {
  if (VAR_5 == VAR_1)
   return -VAR_0;
  FUNC_0(10);
 }

 return 0;
}
