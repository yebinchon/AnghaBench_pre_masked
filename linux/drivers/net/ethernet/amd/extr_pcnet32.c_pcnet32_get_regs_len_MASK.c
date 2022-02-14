
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pcnet32_private {int phycount; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcnet32_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2)
{
 struct pcnet32_private *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = VAR_3->phycount * VAR_1;

 return (VAR_0 + VAR_4) * sizeof(u16);
}
