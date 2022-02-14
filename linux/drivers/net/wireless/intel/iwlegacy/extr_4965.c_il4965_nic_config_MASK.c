
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct il_priv {int lock; struct il_eeprom_calib_info* calib_info; } ;
struct il_eeprom_calib_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct il_priv*,int ) ;
 scalar_t__ FUNC_4 (struct il_priv*,int ) ;
 int FUNC_5 (struct il_priv*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void
FUNC_8(struct il_priv *VAR_6)
{
 unsigned long VAR_7;
 u16 VAR_8;

 FUNC_6(&VAR_6->lock, VAR_7);

 VAR_8 = FUNC_3(VAR_6, VAR_5);


 if (FUNC_2(VAR_8) == VAR_4)
  FUNC_5(VAR_6, VAR_0,
      FUNC_2(VAR_8) |
      FUNC_1(VAR_8) |
      FUNC_0(VAR_8));


 FUNC_5(VAR_6, VAR_0,
     VAR_2 |
     VAR_1);

 VAR_6->calib_info =
     (struct il_eeprom_calib_info *)
     FUNC_4(VAR_6, VAR_3);

 FUNC_7(&VAR_6->lock, VAR_7);
}
