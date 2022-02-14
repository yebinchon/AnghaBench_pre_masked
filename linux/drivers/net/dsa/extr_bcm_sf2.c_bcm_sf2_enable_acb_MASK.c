
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsa_switch {int dummy; } ;
struct bcm_sf2_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_sf2_priv*,int ) ;
 int FUNC_1 (struct bcm_sf2_priv*,int,int ) ;
 struct bcm_sf2_priv* FUNC_2 (struct dsa_switch*) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_5)
{
 struct bcm_sf2_priv *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7;


 VAR_7 = FUNC_0(VAR_6, VAR_1);
 VAR_7 |= (VAR_3 << VAR_4);
 FUNC_1(VAR_6, VAR_7, VAR_1);
 VAR_7 &= ~(VAR_3 << VAR_4);
 VAR_7 |= VAR_2 | VAR_0;
 FUNC_1(VAR_6, VAR_7, VAR_1);
}
