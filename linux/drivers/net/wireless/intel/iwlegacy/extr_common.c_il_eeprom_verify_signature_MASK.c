
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_priv {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct il_priv*,int ) ;

__attribute__((used)) static int
FUNC_3(struct il_priv *VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_3, VAR_0) & VAR_1;
 int VAR_5 = 0;

 FUNC_0("EEPROM signature=0x%08x\n", VAR_4);
 switch (VAR_4) {
 case 129:
 case 128:
  break;
 default:
  FUNC_1("bad EEPROM signature," "EEPROM_GP=0x%08x\n", VAR_4);
  VAR_5 = -VAR_2;
  break;
 }
 return VAR_5;
}
