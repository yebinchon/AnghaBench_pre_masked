
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_13__ {int (* fBtcGet ) (TYPE_1__*,int ,scalar_t__*) ;int (* fBtcSetRfReg ) (TYPE_1__*,int ,int,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int ) ;
 int FUNC_7 (TYPE_1__*,int,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int,int,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_11 (TYPE_1__*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_12(PBTC_COEXIST VAR_7)
{
 u8 VAR_8, VAR_9;
 u32 VAR_10;

 VAR_8 = FUNC_9(VAR_7, 0, 2, 15, 0);
 VAR_9 = FUNC_1(2, 29, 0);

 VAR_7->fBtcSetRfReg(VAR_7, VAR_1, 0x1, 0xfffff, 0x0);

 FUNC_5(VAR_7, VAR_6, 0, 0, 0x8);

 FUNC_4(VAR_7, VAR_6, 4);

 if (FUNC_0(VAR_9))
  FUNC_3(VAR_7, VAR_6, 2);
 else
  FUNC_3(VAR_7, VAR_6, 0);

 VAR_7->fBtcGet(VAR_7, VAR_0, &VAR_10);

 if (VAR_5 == VAR_10)
  FUNC_2(VAR_7, VAR_6, 2);
 else
  FUNC_2(VAR_7, VAR_6, 8);

 FUNC_6(VAR_7, VAR_6, 0, 0);


 if (VAR_4 == VAR_10) {
  if (
   (VAR_8 == VAR_2) ||
   (VAR_8 == VAR_3)
  ) {
   FUNC_7(VAR_7, 1, 1, 0, 0);
   FUNC_8(VAR_7, 1, 0, 1, 0x4);
  } else {
   FUNC_7(VAR_7, 1, 1, 0, 0);
   FUNC_8(VAR_7, 0, 0, 1, 0x4);
  }
 } else {
  if (
   (VAR_8 == VAR_2) ||
   (VAR_8 == VAR_3)
  ) {
   FUNC_7(VAR_7, 0, 1, 0, 0);
   FUNC_8(VAR_7, 1, 0, 1, 0x4);
  } else {
   FUNC_7(VAR_7, 0, 1, 0, 0);
   FUNC_8(VAR_7, 0, 0, 1, 0x4);
  }
 }
}
