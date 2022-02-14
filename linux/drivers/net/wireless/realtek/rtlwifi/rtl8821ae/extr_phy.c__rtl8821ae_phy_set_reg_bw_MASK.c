
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_2 (struct rtl_priv*,int ) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rtl_priv *VAR_3, u8 VAR_4)
{
 u16 VAR_5, VAR_6 = 0;

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 switch (VAR_4) {
 case 130:
  FUNC_3(VAR_3, VAR_2, VAR_5 & 0xFE7F);
  break;
 case 129:
  VAR_6 = VAR_5 | FUNC_0(7);
  FUNC_3(VAR_3, VAR_2, VAR_6 & 0xFEFF);
  break;
 case 128:
  VAR_6 = VAR_5 | FUNC_0(8);
  FUNC_3(VAR_3, VAR_2, VAR_6 & 0xFF7F);
  break;
 default:
  FUNC_1(VAR_3, VAR_0, VAR_1, "unknown Bandwidth: 0x%x\n", VAR_4);
  break;
 }
}
