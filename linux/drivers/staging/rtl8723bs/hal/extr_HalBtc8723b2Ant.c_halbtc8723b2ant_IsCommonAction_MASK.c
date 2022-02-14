
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;


typedef int u8 ;
struct TYPE_23__ {int (* fBtcSetRfReg ) (TYPE_1__*,int ,int,int,int) ;int (* fBtcSet ) (TYPE_1__*,int ,int*) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;} ;
struct TYPE_22__ {scalar_t__ btStatus; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int,int) ;
 int FUNC_9 (TYPE_1__*,int,int,int,int) ;
 TYPE_13__* VAR_11 ;
 int FUNC_10 (TYPE_1__*,int ,int*) ;
 int FUNC_11 (TYPE_1__*,int ,int*) ;
 int FUNC_12 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_13 (TYPE_1__*,int ,int*) ;
 int FUNC_14 (TYPE_1__*,int ,int*) ;
 int FUNC_15 (TYPE_1__*,int ,int*) ;
 int FUNC_16 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_17 (TYPE_1__*,int ,int*) ;
 int FUNC_18 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_19 (TYPE_1__*,int ,int*) ;
 int FUNC_20 (TYPE_1__*,int ,int,int,int) ;

__attribute__((used)) static bool FUNC_21(PBTC_COEXIST VAR_12)
{
 u8 VAR_13 = VAR_6;
 bool VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 bool VAR_17 = 0, VAR_18 = 0;

 VAR_12->fBtcGet(VAR_12, VAR_1, &VAR_17);
 VAR_12->fBtcGet(VAR_12, VAR_3, &VAR_15);
 VAR_12->fBtcGet(VAR_12, VAR_2, &VAR_16);

 if (!VAR_15) {
  VAR_18 = 0;
  VAR_12->fBtcSet(VAR_12, VAR_7, &VAR_18);
  FUNC_6(VAR_12, VAR_10, 0, 0, 0x8);

  FUNC_0(VAR_4, VAR_0, ("[BTCoex], Wifi non-connected idle!!\n"));

  VAR_12->fBtcSetRfReg(VAR_12, VAR_5, 0x1, 0xfffff, 0x0);
  FUNC_3(VAR_12, VAR_10, 0);
  FUNC_7(VAR_12, VAR_10, 0, 1);
  FUNC_5(VAR_12, VAR_10, 6);
  FUNC_4(VAR_12, VAR_10, 0);

  FUNC_8(VAR_12, 0, 0, 0, 0);
  FUNC_9(VAR_12, 0, 0, 0, 0x18);

  VAR_14 = 1;
 } else {
  if (VAR_9 == VAR_11->btStatus) {
   VAR_18 = 0;
   VAR_12->fBtcSet(VAR_12, VAR_7, &VAR_18);
   FUNC_6(VAR_12, VAR_10, 0, 0, 0x8);

   FUNC_0(VAR_4, VAR_0, ("[BTCoex], Wifi connected + BT non connected-idle!!\n"));

   VAR_12->fBtcSetRfReg(VAR_12, VAR_5, 0x1, 0xfffff, 0x0);
   FUNC_3(VAR_12, VAR_10, 0);
   FUNC_7(VAR_12, VAR_10, 0, 1);
   FUNC_5(VAR_12, VAR_10, 0xb);
   FUNC_4(VAR_12, VAR_10, 0);

   FUNC_8(VAR_12, 0, 0, 0, 0);
   FUNC_9(VAR_12, 0, 0, 0, 0x18);

   VAR_14 = 1;
  } else if (VAR_8 == VAR_11->btStatus) {
   VAR_18 = 1;
   VAR_12->fBtcSet(VAR_12, VAR_7, &VAR_18);

   if (VAR_17)
    return 0;

   FUNC_0(VAR_4, VAR_0, ("[BTCoex], Wifi connected + BT connected-idle!!\n"));
   FUNC_6(VAR_12, VAR_10, 0, 0, 0x8);

   VAR_12->fBtcSetRfReg(VAR_12, VAR_5, 0x1, 0xfffff, 0x0);
   FUNC_3(VAR_12, VAR_10, 0);
   FUNC_7(VAR_12, VAR_10, 0, 1);
   FUNC_5(VAR_12, VAR_10, 0xb);
   FUNC_4(VAR_12, VAR_10, 0);

   FUNC_8(VAR_12, 1, 0, 0, 0);
   FUNC_9(VAR_12, 0, 0, 0, 0x18);

   VAR_14 = 1;
  } else {
   VAR_18 = 1;
   VAR_12->fBtcSet(VAR_12, VAR_7, &VAR_18);

   if (VAR_16) {
    FUNC_0(VAR_4, VAR_0, ("[BTCoex], Wifi Connected-Busy + BT Busy!!\n"));
    VAR_14 = 0;
   } else {
    if (VAR_17)
     return 0;

    FUNC_0(VAR_4, VAR_0, ("[BTCoex], Wifi Connected-Idle + BT Busy!!\n"));
    VAR_13 = FUNC_2(2, 29, 0);
    FUNC_6(VAR_12, VAR_10, 0, 0, 0x8);

    VAR_12->fBtcSetRfReg(VAR_12, VAR_5, 0x1, 0xfffff, 0x0);
    FUNC_3(VAR_12, VAR_10, 7);
    FUNC_7(VAR_12, VAR_10, 1, 21);
    FUNC_5(VAR_12, VAR_10, 0xb);

    if (FUNC_1(VAR_13))
     FUNC_4(VAR_12, VAR_10, 2);
    else
     FUNC_4(VAR_12, VAR_10, 0);

    FUNC_8(VAR_12, 0, 0, 0, 0);
    FUNC_9(VAR_12, 0, 0, 0, 0x18);
    VAR_14 = 1;
   }
  }
 }

 return VAR_14;
}
