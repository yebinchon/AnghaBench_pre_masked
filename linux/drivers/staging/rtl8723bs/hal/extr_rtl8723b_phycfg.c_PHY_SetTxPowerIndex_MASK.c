
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct adapter*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_3(
 struct adapter *VAR_14,
 u32 VAR_15,
 u8 VAR_16,
 u8 VAR_17
)
{
 if (VAR_16 == VAR_0 || VAR_16 == VAR_1) {
  switch (VAR_17) {
  case 144:
   FUNC_1(VAR_14, VAR_8, VAR_5, VAR_15);
   break;
  case 142:
   FUNC_1(VAR_14, VAR_13, VAR_5, VAR_15);
   break;
  case 138:
   FUNC_1(VAR_14, VAR_13, VAR_6, VAR_15);
   break;
  case 147:
   FUNC_1(VAR_14, VAR_13, VAR_7, VAR_15);
   break;

  case 137:
   FUNC_1(VAR_14, VAR_11, VAR_4, VAR_15);
   break;
  case 136:
   FUNC_1(VAR_14, VAR_11, VAR_5, VAR_15);
   break;
  case 146:
   FUNC_1(VAR_14, VAR_11, VAR_6, VAR_15);
   break;
  case 145:
   FUNC_1(VAR_14, VAR_11, VAR_7, VAR_15);
   break;

  case 143:
   FUNC_1(VAR_14, VAR_12, VAR_4, VAR_15);
   break;
  case 141:
   FUNC_1(VAR_14, VAR_12, VAR_5, VAR_15);
   break;
  case 140:
   FUNC_1(VAR_14, VAR_12, VAR_6, VAR_15);
   break;
  case 139:
   FUNC_1(VAR_14, VAR_12, VAR_7, VAR_15);
   break;

  case 135:
   FUNC_1(VAR_14, VAR_9, VAR_4, VAR_15);
   break;
  case 134:
   FUNC_1(VAR_14, VAR_9, VAR_5, VAR_15);
   break;
  case 133:
   FUNC_1(VAR_14, VAR_9, VAR_6, VAR_15);
   break;
  case 132:
   FUNC_1(VAR_14, VAR_9, VAR_7, VAR_15);
   break;

  case 131:
   FUNC_1(VAR_14, VAR_10, VAR_4, VAR_15);
   break;
  case 130:
   FUNC_1(VAR_14, VAR_10, VAR_5, VAR_15);
   break;
  case 129:
   FUNC_1(VAR_14, VAR_10, VAR_6, VAR_15);
   break;
  case 128:
   FUNC_1(VAR_14, VAR_10, VAR_7, VAR_15);
   break;

  default:
   FUNC_0("Invalid Rate!!\n");
   break;
  }
 } else {
  FUNC_2(VAR_3, VAR_2, ("Invalid RFPath!!\n"));
 }
}
