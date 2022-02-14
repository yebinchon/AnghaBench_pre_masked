
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_15__ {int (* fBtcSetRfReg ) (TYPE_1__*,int ,int,int,int) ;int (* fBtcGet ) (TYPE_1__*,int ,scalar_t__*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int,int,int ) ;
 int FUNC_10 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_11 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_12 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_13 (TYPE_1__*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_14(PBTC_COEXIST VAR_6)
{
 u8 VAR_7, VAR_8;
 u32 VAR_9;

 VAR_7 = FUNC_9(VAR_6, 0, 2, 15, 0);
 VAR_8 = FUNC_1(2, 29, 0);
 VAR_6->fBtcGet(VAR_6, VAR_0, &VAR_9);

 FUNC_5(VAR_6, VAR_5, 0, 0, 0x8);

 if (FUNC_0(VAR_8))
  FUNC_3(VAR_6, VAR_5, 2);
 else
  FUNC_3(VAR_6, VAR_5, 0);

 if (
  (VAR_8 == VAR_2) ||
  (VAR_8 == VAR_3)
 ) {
  if (VAR_4 == VAR_9) {
   FUNC_4(VAR_6, VAR_5, 3);
   FUNC_2(VAR_6, VAR_5, 11);
   VAR_6->fBtcSetRfReg(VAR_6, VAR_1, 0x1, 0xfffff, 0x780);
  } else {
   FUNC_4(VAR_6, VAR_5, 6);
   FUNC_2(VAR_6, VAR_5, 7);
   VAR_6->fBtcSetRfReg(VAR_6, VAR_1, 0x1, 0xfffff, 0x0);
  }
  FUNC_8(VAR_6, 1, 0, 2);
 } else {
  FUNC_4(VAR_6, VAR_5, 6);
  FUNC_2(VAR_6, VAR_5, 11);
  VAR_6->fBtcSetRfReg(VAR_6, VAR_1, 0x1, 0xfffff, 0x0);
  FUNC_8(VAR_6, 1, 1, 2);
 }


 if (VAR_4 == VAR_9) {
  if (
   (VAR_7 == VAR_2) ||
   (VAR_7 == VAR_3)
  ) {
   FUNC_6(VAR_6, 1, 1, 0, 0);
   FUNC_7(VAR_6, 1, 0, 0, 0x18);
  } else {
   FUNC_6(VAR_6, 1, 1, 0, 0);
   FUNC_7(VAR_6, 0, 0, 0, 0x18);
  }
 } else {
  if (
   (VAR_7 == VAR_2) ||
   (VAR_7 == VAR_3)
  ) {
   FUNC_6(VAR_6, 0, 1, 0, 0);
   FUNC_7(VAR_6, 1, 0, 0, 0x18);
  } else {
   FUNC_6(VAR_6, 0, 1, 0, 0);
   FUNC_7(VAR_6, 0, 0, 0, 0x18);
  }
 }
}
