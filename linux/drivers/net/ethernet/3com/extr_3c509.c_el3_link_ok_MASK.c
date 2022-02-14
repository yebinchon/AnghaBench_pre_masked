
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int base_addr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1)
{
 int VAR_2 = VAR_1->base_addr;
 u16 VAR_3;

 FUNC_0(4);
 VAR_3 = FUNC_1(VAR_2 + VAR_0);
 FUNC_0(1);
 return VAR_3 & (1<<11);
}
