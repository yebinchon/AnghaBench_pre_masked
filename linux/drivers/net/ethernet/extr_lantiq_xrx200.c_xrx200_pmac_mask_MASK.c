
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xrx200_priv {int dummy; } ;


 int FUNC_0 (struct xrx200_priv*,int ) ;
 int FUNC_1 (struct xrx200_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct xrx200_priv *VAR_0, u32 VAR_1, u32 VAR_2,
        u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_0, VAR_3);

 VAR_4 &= ~(VAR_1);
 VAR_4 |= VAR_2;
 FUNC_1(VAR_0, VAR_4, VAR_3);
}
