
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct brcmf_core_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct brcmf_core_priv*,int ) ;
 int FUNC_2 (struct brcmf_core_priv*,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct brcmf_core_priv *VAR_5, u8 VAR_6,
           u32 *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9 = (VAR_4 << VAR_0);

 VAR_9 |= VAR_6;
 FUNC_2(VAR_5, FUNC_0(VAR_9), VAR_9);
 VAR_8 = FUNC_1(VAR_5, FUNC_0(VAR_8));
 *VAR_7 = (VAR_8 & VAR_3) + 1;
 *VAR_7 *= VAR_2;
 return !!(VAR_8 & VAR_1);
}
