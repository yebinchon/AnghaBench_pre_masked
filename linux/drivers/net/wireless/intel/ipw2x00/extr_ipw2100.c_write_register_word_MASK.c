
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ipw2100_priv {scalar_t__ ioaddr; } ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_0, u32 VAR_1, u16 VAR_2)
{
 struct ipw2100_priv *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_2, VAR_3->ioaddr + VAR_1);
 FUNC_0("w: 0x%08X <= %04X\n", VAR_1, VAR_2);
}
