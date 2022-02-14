
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_core_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct brcmf_core_priv*,int ) ;
 int FUNC_1 (struct brcmf_core_priv*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct brcmf_core_priv *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 VAR_10 = FUNC_0(VAR_9, VAR_4);

 VAR_12 = (VAR_10 & VAR_5) >> VAR_6;
 VAR_13 = (VAR_10 & VAR_7) >> VAR_8;
 VAR_14 = VAR_12 + VAR_13;

 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  FUNC_1(VAR_9, VAR_0, VAR_16);
  VAR_15 = FUNC_0(VAR_9, VAR_1);
  VAR_11 += ((VAR_15 & VAR_2) + 1) * VAR_3;
 }

 return VAR_11;
}
