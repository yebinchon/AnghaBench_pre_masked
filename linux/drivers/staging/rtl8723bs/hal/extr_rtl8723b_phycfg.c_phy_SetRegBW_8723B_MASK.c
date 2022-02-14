
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adapter {int dummy; } ;
typedef enum CHANNEL_WIDTH { ____Placeholder_CHANNEL_WIDTH } CHANNEL_WIDTH ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_3(
 struct adapter *VAR_3, enum CHANNEL_WIDTH VAR_4
)
{
 u16 VAR_5, VAR_6 = 0;
 VAR_5 = FUNC_1(VAR_3, VAR_2);

 switch (VAR_4) {
 case 130:
  FUNC_2(VAR_3, VAR_2, (VAR_5 & 0xFE7F));
  break;

 case 129:
  VAR_6 = VAR_5 | VAR_0;
  FUNC_2(VAR_3, VAR_2, (VAR_6 & 0xFEFF));
  break;

 case 128:
  VAR_6 = VAR_5 | VAR_1;
  FUNC_2(VAR_3, VAR_2, (VAR_6 & 0xFF7F));
  break;

 default:
  FUNC_0("phy_PostSetBWMode8723B():	unknown Bandwidth: %#X\n", VAR_4);
  break;
 }
}
