
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_femac_priv {scalar_t__ glb_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hisi_femac_priv *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->glb_base + VAR_0);
 VAR_3 |= VAR_1;
 FUNC_2(VAR_3, VAR_2->glb_base + VAR_0);

 FUNC_1(500, 800);

 VAR_3 &= ~VAR_1;
 FUNC_2(VAR_3, VAR_2->glb_base + VAR_0);

 return 0;
}
