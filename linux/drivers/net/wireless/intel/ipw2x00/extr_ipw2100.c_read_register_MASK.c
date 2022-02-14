
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ipw2100_priv {scalar_t__ ioaddr; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_0, u32 VAR_1, u32 * VAR_2)
{
 struct ipw2100_priv *VAR_3 = FUNC_2(VAR_0);

 *VAR_2 = FUNC_1(VAR_3->ioaddr + VAR_1);
 FUNC_0("r: 0x%08X => 0x%08X\n", VAR_1, *VAR_2);
}
