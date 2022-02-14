
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct tx_desc {int dummy; } ;
struct TYPE_2__ {int dot11PrivacyAlgrthm; } ;
struct adapter {TYPE_1__ securitypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (scalar_t__*,int) ;
 int FUNC_8 (scalar_t__*,int) ;
 int FUNC_9 (scalar_t__*,int ) ;
 int FUNC_10 (scalar_t__*,int) ;
 int FUNC_11 (scalar_t__*,int ) ;
 int FUNC_12 (scalar_t__*,int) ;
 int VAR_2 ;






 int FUNC_13 (scalar_t__*,int ,int ) ;
 int FUNC_14 (struct tx_desc*) ;

void FUNC_15(
 struct adapter *VAR_3,
 u8 *VAR_4,
 u32 VAR_5,
 u8 VAR_6,
 u8 VAR_7,
 u8 VAR_8
)
{

 FUNC_13(VAR_4, 0, VAR_2);

 FUNC_1(VAR_4, 1);
 FUNC_4(VAR_4, 1);

 FUNC_6(VAR_4, 0x28);

 FUNC_8(VAR_4, VAR_5);
 FUNC_9(VAR_4, VAR_1);


 if (VAR_6) {
  FUNC_5(VAR_4, 1);
 } else {
  FUNC_2(VAR_4, 1);
  FUNC_3(VAR_4, 0);
 }

 if (VAR_7) {
  FUNC_0(VAR_4, 1);
 }

 FUNC_12(VAR_4, 1);
 FUNC_7((u8 *)VAR_4, 1);

 FUNC_11(VAR_4, VAR_0);




 if (VAR_8) {
  u32 VAR_9;

  VAR_9 = VAR_3->securitypriv.dot11PrivacyAlgrthm;
  switch (VAR_9) {
  case 132:
   FUNC_10(VAR_4, 0x0);
   break;
  case 128:
  case 129:
  case 130:
   FUNC_10(VAR_4, 0x1);
   break;
  case 131:
   FUNC_10(VAR_4, 0x2);
   break;
  case 133:
   FUNC_10(VAR_4, 0x3);
   break;
  default:
   FUNC_10(VAR_4, 0x0);
   break;
  }
 }



 FUNC_14((struct tx_desc *)VAR_4);
}
