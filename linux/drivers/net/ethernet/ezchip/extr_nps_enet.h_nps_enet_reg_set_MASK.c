
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nps_enet_priv {scalar_t__ regs_base; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct nps_enet_priv *VAR_0,
        s32 VAR_1, s32 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->regs_base + VAR_1);
}
