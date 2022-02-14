
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_2__ {int cur_algorithm; int pre_algorithm; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*) ;
 int FUNC_6 (struct btc_coexist*) ;
 int FUNC_7 (struct btc_coexist*) ;
 int FUNC_8 (struct btc_coexist*) ;
 int FUNC_9 (struct btc_coexist*) ;
 int FUNC_10 (struct btc_coexist*) ;
 int FUNC_11 (struct btc_coexist*) ;
 int FUNC_12 (struct btc_coexist*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_13(struct btc_coexist *VAR_3)
{
 struct rtl_priv *VAR_4 = VAR_3->adapter;
 u8 VAR_5 = 0;

 VAR_5 = FUNC_3(VAR_3);
 VAR_2->cur_algorithm = VAR_5;

 if (!FUNC_12(VAR_3)) {
  switch (VAR_2->cur_algorithm) {
  case 128:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = SCO\n");
   FUNC_11(VAR_3);
   break;
  case 135:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = HID\n");
   FUNC_4(VAR_3);
   break;
  case 137:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = A2DP\n");
   FUNC_1(VAR_3);
   break;
  case 136:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = A2DP+PAN(HS)\n");
   FUNC_2(VAR_3);
   break;
  case 132:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = PAN(EDR)\n");
   FUNC_7(VAR_3);
   break;
  case 129:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = HS mode\n");
   FUNC_10(VAR_3);
   break;
  case 131:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = PAN+A2DP\n");
   FUNC_8(VAR_3);
   break;
  case 130:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = PAN(EDR)+HID\n");
   FUNC_9(VAR_3);
   break;
  case 133:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = HID+A2DP+PAN\n");
   FUNC_6(VAR_3);
   break;
  case 134:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = HID+A2DP\n");
   FUNC_5(VAR_3);
   break;
  default:
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "[BTCoex], Action algorithm = coexist All Off!!\n");

   break;
  }
  VAR_2->pre_algorithm = VAR_2->cur_algorithm;
 }
}
