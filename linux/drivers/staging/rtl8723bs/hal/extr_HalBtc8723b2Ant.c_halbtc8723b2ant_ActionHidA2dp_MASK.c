
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_14__ {int (* fBtcGet ) (TYPE_1__*,int ,int*) ;int (* fBtcSetRfReg ) (TYPE_1__*,int ,int,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int,int) ;
 int FUNC_9 (TYPE_1__*,int,int,int) ;
 int FUNC_10 (TYPE_1__*,int ,int,int,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_12 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_13 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void FUNC_14(PBTC_COEXIST VAR_8)
{
 u8 VAR_9, VAR_10;
 u32 VAR_11;
 u8 VAR_12 = 0;

 VAR_9 = FUNC_10(VAR_8, 0, 2, 15, 0);

 VAR_10 = FUNC_2(3, 29, 37);

 VAR_8->fBtcSetRfReg(VAR_8, VAR_2, 0x1, 0xfffff, 0x0);

 FUNC_6(VAR_8, VAR_7, 0, 1, 0x5);

 FUNC_5(VAR_8, VAR_7, 6);

 VAR_8->fBtcGet(VAR_8, VAR_1, &VAR_11);
 if (VAR_6 == VAR_11) {
  if (FUNC_0(VAR_10))
   FUNC_4(VAR_8, VAR_7, 2);
  else if (FUNC_1(VAR_10))
   FUNC_4(VAR_8, VAR_7, 2);
  else
   FUNC_4(VAR_8, VAR_7, 0);
 } else {

  if (FUNC_0(VAR_10)) {
   VAR_8->fBtcGet(VAR_8, VAR_0, &VAR_12);

   if (VAR_12 < 10)
    FUNC_4(VAR_8, VAR_7, 4);
   else
    FUNC_4(VAR_8, VAR_7, 2);
  } else if (FUNC_1(VAR_10))
   FUNC_4(VAR_8, VAR_7, 2);
  else
   FUNC_4(VAR_8, VAR_7, 0);
 }

 FUNC_3(VAR_8, VAR_7, 7);

 if (
  (VAR_10 == VAR_3) ||
  (VAR_10 == VAR_4)
 )
  FUNC_9(VAR_8, 1, 0, 2);
 else
  FUNC_9(VAR_8, 1, 1, 2);


 if (VAR_5 == VAR_11) {
  if (
   (VAR_9 == VAR_3) ||
   (VAR_9 == VAR_4)
  ) {
   FUNC_7(VAR_8, 1, 1, 0, 0);
   FUNC_8(VAR_8, 1, 0, 0, 0x18);
  } else {
   FUNC_7(VAR_8, 1, 1, 0, 0);
   FUNC_8(VAR_8, 0, 0, 0, 0x18);
  }
 } else {
  if (
   (VAR_9 == VAR_3) ||
   (VAR_9 == VAR_4)
  ) {
   FUNC_7(VAR_8, 0, 1, 0, 0);
   FUNC_8(VAR_8, 1, 0, 0, 0x18);
  } else {
   FUNC_7(VAR_8, 0, 1, 0, 0);
   FUNC_8(VAR_8, 0, 0, 0, 0x18);
  }
 }
}
