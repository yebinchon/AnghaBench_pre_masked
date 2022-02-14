
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u32 ;
struct TYPE_2__ {scalar_t__ curVal0x6c0; scalar_t__ curVal0x6c4; scalar_t__ curVal0x6c8; scalar_t__ curVal0x6cc; scalar_t__ preVal0x6c0; scalar_t__ preVal0x6c4; scalar_t__ preVal0x6c8; scalar_t__ preVal0x6cc; } ;
typedef int PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,void*,void*,void*,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_3,
 bool VAR_4,
 u32 VAR_5,
 u32 VAR_6,
 u32 VAR_7,
 u8 VAR_8
)
{
 FUNC_0(
  VAR_1,
  VAR_0,
  (
   "[BTCoex], %s write Coex Table 0x6c0 = 0x%x, 0x6c4 = 0x%x, 0x6cc = 0x%x\n",
   (VAR_4 ? "force to" : ""),
   VAR_5, VAR_6, VAR_8
  )
 );
 VAR_2->curVal0x6c0 = VAR_5;
 VAR_2->curVal0x6c4 = VAR_6;
 VAR_2->curVal0x6c8 = VAR_7;
 VAR_2->curVal0x6cc = VAR_8;

 if (!VAR_4) {
  if (
   (VAR_2->preVal0x6c0 == VAR_2->curVal0x6c0) &&
      (VAR_2->preVal0x6c4 == VAR_2->curVal0x6c4) &&
      (VAR_2->preVal0x6c8 == VAR_2->curVal0x6c8) &&
      (VAR_2->preVal0x6cc == VAR_2->curVal0x6cc)
  )
   return;
 }

 FUNC_1(
  VAR_3, VAR_5, VAR_6, VAR_7, VAR_8
 );

 VAR_2->preVal0x6c0 = VAR_2->curVal0x6c0;
 VAR_2->preVal0x6c4 = VAR_2->curVal0x6c4;
 VAR_2->preVal0x6c8 = VAR_2->curVal0x6c8;
 VAR_2->preVal0x6cc = VAR_2->curVal0x6cc;
}
