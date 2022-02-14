
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {scalar_t__* pBandType; int Adapter; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 int* VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_2(
 PDM_ODM_T VAR_14,
 u8 VAR_15,
 u8 VAR_16,
 s32 VAR_17,
 s32 VAR_18
)
{
 s32 VAR_19 = 0, VAR_20, VAR_21 = 0, VAR_22;

 if (VAR_15 >= VAR_6)
  VAR_15 = VAR_6-1;

 VAR_20 = (VAR_5[VAR_15] & 0xFFC00000)>>22;


 if ((VAR_17 != 0) && (*(VAR_14->pBandType) == VAR_2)) {
  if ((VAR_17 & 0x00000200) != 0)
   VAR_17 = VAR_17 | 0xFFFFFC00;
  VAR_19 = ((VAR_17 * VAR_20)>>8)&0x000003FF;


  if ((VAR_18 & 0x00000200) != 0)
   VAR_18 = VAR_18 | 0xFFFFFC00;
  VAR_21 = ((VAR_18 * VAR_20)>>8)&0x000003FF;


  switch (VAR_16) {
  case 129:

   VAR_22 = (VAR_20<<22)|((VAR_21&0x3F)<<16)|VAR_19;
   FUNC_1(VAR_14->Adapter, VAR_10, VAR_7, VAR_22);

   VAR_22 = (VAR_21&0x000003C0)>>6;
   FUNC_1(VAR_14->Adapter, VAR_12, VAR_8, VAR_22);

   VAR_22 = ((VAR_17 * VAR_20)>>7)&0x01;
   FUNC_1(VAR_14->Adapter, VAR_9, VAR_0, VAR_22);
   break;
  case 128:

   VAR_22 = (VAR_20<<22)|((VAR_21&0x3F)<<16)|VAR_19;
   FUNC_1(VAR_14->Adapter, VAR_11, VAR_7, VAR_22);

   VAR_22 = (VAR_21&0x000003C0)>>6;
   FUNC_1(VAR_14->Adapter, VAR_13, VAR_8, VAR_22);

   VAR_22 = ((VAR_17 * VAR_20)>>7)&0x01;
   FUNC_1(VAR_14->Adapter, VAR_9, VAR_1, VAR_22);

   break;
  default:
   break;
  }
 } else {
  switch (VAR_16) {
  case 129:
   FUNC_1(VAR_14->Adapter, VAR_10, VAR_7, VAR_5[VAR_15]);
   FUNC_1(VAR_14->Adapter, VAR_12, VAR_8, 0x00);
   FUNC_1(VAR_14->Adapter, VAR_9, VAR_0, 0x00);
   break;

  case 128:
   FUNC_1(VAR_14->Adapter, VAR_11, VAR_7, VAR_5[VAR_15]);
   FUNC_1(VAR_14->Adapter, VAR_13, VAR_8, 0x00);
   FUNC_1(VAR_14->Adapter, VAR_9, VAR_1, 0x00);
   break;

  default:
   break;
  }
 }

 FUNC_0(VAR_14, VAR_3, VAR_4, ("TxPwrTracking path B: X = 0x%x, Y = 0x%x ele_A = 0x%x ele_C = 0x%x ele_D = 0x%x 0xeb4 = 0x%x 0xebc = 0x%x\n",
 (u32)VAR_17, (u32)VAR_18, (u32)VAR_19, (u32)VAR_21, (u32)VAR_20, (u32)VAR_17, (u32)VAR_18));
}
