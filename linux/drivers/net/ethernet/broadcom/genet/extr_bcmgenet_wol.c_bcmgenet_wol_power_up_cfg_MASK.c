
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcmgenet_priv {scalar_t__ crc_fwd_en; int dev; } ;
typedef enum bcmgenet_power_mode { ____Placeholder_bcmgenet_power_mode } bcmgenet_power_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,int ,int ,char*,int) ;
 int VAR_5 ;

void FUNC_3(struct bcmgenet_priv *VAR_6,
          enum bcmgenet_power_mode VAR_7)
{
 u32 VAR_8;

 if (VAR_7 != VAR_1) {
  FUNC_2(VAR_6, VAR_5, VAR_6->dev, "invalid mode: %d\n", VAR_7);
  return;
 }

 VAR_8 = FUNC_0(VAR_6, VAR_4);
 if (!(VAR_8 & VAR_2))
  return;
 VAR_8 &= ~VAR_2;
 FUNC_1(VAR_6, VAR_8, VAR_4);


 VAR_8 = FUNC_0(VAR_6, VAR_3);
 VAR_8 &= ~VAR_0;
 FUNC_1(VAR_6, VAR_8, VAR_3);
 VAR_6->crc_fwd_en = 0;
}
