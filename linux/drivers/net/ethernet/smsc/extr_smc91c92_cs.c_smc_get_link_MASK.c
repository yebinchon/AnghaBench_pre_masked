
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct smc_private {int lock; } ;
struct net_device {unsigned int base_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 struct smc_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_6(struct net_device *VAR_1)
{
 struct smc_private *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3 = VAR_1->base_addr;
 u16 VAR_4 = FUNC_1(VAR_3 + VAR_0);
 u32 VAR_5;
 unsigned long VAR_6;

 FUNC_4(&VAR_2->lock, VAR_6);
 FUNC_0(3);
 VAR_5 = FUNC_3(VAR_1);
 FUNC_0(VAR_4);
 FUNC_5(&VAR_2->lock, VAR_6);
 return VAR_5;
}
