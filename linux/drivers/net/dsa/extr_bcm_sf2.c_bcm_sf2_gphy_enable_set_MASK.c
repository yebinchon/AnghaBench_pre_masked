
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
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct bcm_sf2_priv* FUNC_1 (struct dsa_switch*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bcm_sf2_priv*,int ) ;
 int FUNC_4 (struct bcm_sf2_priv*,int,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct dsa_switch *VAR_7, bool VAR_8)
{
 struct bcm_sf2_priv *VAR_9 = FUNC_1(VAR_7);
 u32 VAR_10;

 VAR_10 = FUNC_3(VAR_9, VAR_5);
 if (VAR_8) {
  VAR_10 |= VAR_4;
  VAR_10 &= ~(VAR_1 | VAR_2 | VAR_3 | VAR_0);
  FUNC_4(VAR_9, VAR_10, VAR_5);
  FUNC_5(21);
  VAR_10 = FUNC_3(VAR_9, VAR_5);
  VAR_10 &= ~VAR_4;
 } else {
  VAR_10 |= VAR_1 | VAR_2 | VAR_4;
  FUNC_4(VAR_9, VAR_10, VAR_5);
  FUNC_2(1);
  VAR_10 |= VAR_0;
 }
 FUNC_4(VAR_9, VAR_10, VAR_5);


 if (!VAR_8) {
  VAR_10 = FUNC_3(VAR_9, FUNC_0(0));
  VAR_10 |= VAR_6;
  FUNC_4(VAR_9, VAR_10, FUNC_0(0));
 }
}
