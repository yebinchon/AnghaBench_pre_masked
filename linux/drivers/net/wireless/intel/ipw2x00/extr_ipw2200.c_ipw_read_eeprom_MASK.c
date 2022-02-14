
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw_priv {scalar_t__ eeprom; } ;
typedef int __le16 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipw_priv*,int ) ;

__attribute__((used)) static void FUNC_3(struct ipw_priv *VAR_0)
{
 int VAR_1;
 __le16 *VAR_2 = (__le16 *) VAR_0->eeprom;

 FUNC_0(">>\n");


 for (VAR_1 = 0; VAR_1 < 128; VAR_1++)
  VAR_2[VAR_1] = FUNC_1(FUNC_2(VAR_0, (u8) VAR_1));

 FUNC_0("<<\n");
}
