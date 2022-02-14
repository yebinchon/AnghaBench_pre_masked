
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pxa168_eth_private* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (struct pxa168_eth_private*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
           unsigned char *VAR_3)
{
 struct pxa168_eth_private *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = FUNC_1(VAR_4, VAR_0);
 unsigned int VAR_6 = FUNC_1(VAR_4, VAR_1);

 VAR_3[0] = (VAR_5 >> 24) & 0xff;
 VAR_3[1] = (VAR_5 >> 16) & 0xff;
 VAR_3[2] = (VAR_5 >> 8) & 0xff;
 VAR_3[3] = VAR_5 & 0xff;
 VAR_3[4] = (VAR_6 >> 8) & 0xff;
 VAR_3[5] = VAR_6 & 0xff;
}
