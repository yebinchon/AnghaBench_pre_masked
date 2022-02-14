
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_core_priv {int pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct brcmf_core_priv*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (struct brcmf_core_priv*,int,int*) ;

__attribute__((used)) static u32 FUNC_5(struct brcmf_core_priv *VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 if (!FUNC_2(&VAR_2->pub))
  FUNC_3(&VAR_2->pub, 0, 0, 0);

 VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_4));
 VAR_6 = (VAR_4 & VAR_0) >> VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  FUNC_4(VAR_2, VAR_5, &VAR_7);
  VAR_3 += VAR_7;
 }

 return VAR_3;
}
