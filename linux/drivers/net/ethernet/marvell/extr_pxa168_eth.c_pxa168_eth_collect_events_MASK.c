
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa168_eth_private {int work_todo; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pxa168_eth_private*,int ) ;
 int FUNC_1 (struct pxa168_eth_private*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pxa168_eth_private *VAR_6,
         struct net_device *VAR_7)
{
 u32 VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_0(VAR_6, VAR_3);
 if (VAR_8 == 0)
  return VAR_4;

 FUNC_1(VAR_6, VAR_3, ~VAR_8);
 if (VAR_8 & (VAR_1 | VAR_2)) {
  VAR_6->work_todo |= VAR_5;
  VAR_9 = 1;
 }
 if (VAR_8 & VAR_0)
  VAR_9 = 1;
 return VAR_9;
}
